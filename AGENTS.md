# AGENTS.md

Guidance for AI coding agents working in the **6leetcode** repository.

## Project overview

1. **`apps/cli`** — the `leet` CLI, written in TypeScript with the **Bun standard
   library only** (`bun:sqlite`, `Bun.YAML`, `fetch`, `util.parseArgs`, `Bun.write`)
   and **no runtime dependencies** (only `@types/bun` as a devDependency, for editor
   types). It crawls `leetcode.cn`, stores problems in SQLite, writes per-problem
   `README`/`Makefile`, and exports JSON for the web app.
2. **`apps/web`** — React 18 + TypeScript + Ant Design (Create React App) frontend
   that reads the exported JSON from `apps/web/public/db`.
3. **`questions/`** — the solution corpus. One directory per problem with runnable
   test programs (`Testing.<ext>`) for each language plus generated docs.

## Repository layout

```
apps/cli/                     Bun CLI (module name `leet`)
  src/index.ts                entry: commands all | gen | version
  src/config.ts               config.yml + env resolution
  src/db.ts                   bun:sqlite schema + queries (questions, solutions)
  src/leetcode.ts             GraphQL client + crawl (Cloudflare-aware fetch)
  src/readme.ts               root README/README_ZH + testing/*.makefile + per-problem files
  src/jsongen.ts              exports apps/web/public/db JSON
  src/solutions.ts            extracts solution bodies between begin/end markers
  src/ids.ts, src/log.ts, src/version.ts
  package.json, tsconfig.json, Makefile   (bun build --compile -> bin/leet)
  config.yml.sample
apps/web/                     CRA frontend; `yarn build` -> apps/web/build
questions/                    problem corpus (generated + hand-written solutions)
  Algorithms/, Database/, Shell/, Concurrency/, JavaScript/, pandas/, LCCI/, ...
  library/                    shared helpers (c/, cc/, go/, java/, rust/, ...
  go.mod, Cargo.toml, package.json, tsconfig.json   (per-language tooling roots)
testing/*.makefile            generated per-language test targets (used by docker/)
docker/*.Dockerfile           per-language test images
Makefile.lang.mk              generic compile/run logic, included by every problem Makefile
```

## Build, run & test

### CLI (`apps/cli`)

```bash
cd apps/cli
make build            # bun build --compile --minify -> bin/leet (injects version via --define)
make install          # PREFIX=/usr/local by default
bun run src/index.ts <command>   # run without compiling
```

Commands (config at repo root `./config.yml`, or `-c`, or `/etc/leet/config.yml`):

```bash
leet all       # crawl leetcode.cn -> write per-problem files -> generate README + web JSON
leet gen       # regenerate README*/testing makefiles/web JSON from the local database
leet version
```

Config resolution: `-c/--config` (default `./config.yml`), else `/etc/leet/config.yml`;
env overrides `QuestionDir`, `Public`, `DatabaseFile`.

### Solutions (`questions/`)

Run every solution for one language (requires Docker):

```bash
make c|cc|golang|java|typescript|php|python|rust|bash
```

Run one problem directly (uses the included `Makefile.lang.mk`):

```bash
cd "questions/Algorithms/0001. Two Sum"
make golang          # or c, cc, java, python, rust, typescript, php, bash
```

### Frontend (`apps/web`)

```bash
cd apps/web
yarn install
yarn start           # dev server
yarn build           # -> apps/web/build
```

## Conventions

### Commits

Gitmoji-style: `:<emoji>: <Subject>` (see `.chglog/config.yml`). Examples:
`:sparkles: Add ...`, `:bug: Fix ...`, `:arrow_up: Upgrade deps`,
`:robot: Generate questions`, `:truck: Rename ...`, `:fire: Remove ...`.

### Adding / editing a solution

- Primary file is `Testing.<ext>`; additional solutions use `language<N>.<ext>`
  (e.g. `c1.c`, `c2.c`, `python1.py`) where a smaller N is more optimized.
- Each solution file must be runnable standalone (`main`/entry point with test cases).
- Wrap the solution body in the begin/end markers so the crawler can extract it:
  `// ------------------------------- solution begin -------------------------------`
  and the matching `... solution end ...` (comment style differs per language).
- Shared helpers live in `questions/library/<lang>/`.

### Generated files — do not hand-edit

`README.md`, `README_ZH.md`, per-problem `README*.md`/`Makefile`, `testing/*.makefile`
and `apps/web/public/db/**` are generated. After adding/changing solutions run
`leet gen` (or `make deploy` from the repo root) instead of editing by hand.

## Critical: Cloudflare / `leetcode.cn`

`leetcode.cn` is behind Cloudflare, which **rejects Chrome/Firefox and generic TLS
fingerprints** (curl, `obscura`, ...) with a 403 challenge. The Bun CLI passes because:

- it uses Bun's **default User-Agent** (do **not** set a spoofed browser UA — that
  flips the request back to a 403 challenge), and
- it sends a same-origin `referer: https://leetcode.cn/problemset/all/`.

No login, cookies, or the `.cn`/`.com` Chinese/English tradeoff are needed — the
public GraphQL API returns full Chinese content. See `src/leetcode.ts`.

## Gotchas

- **No Go in `apps/cli`**: the CLI was rewritten in Bun. `apps/cli/bin/` and `*.db`
  are gitignored. The Go solutions under `questions/` run via their own
  `questions/go.mod` (no Go workspace).
- **`questions` module**: directory names contain spaces, so `go build ./...` inside
  `questions/` reports `malformed import path ... invalid char ' '`. This is a known,
  pre-existing limitation (no external deps there).
- Regeneration requires a non-empty database; `all`/`gen` abort otherwise so the
  committed README/JSON can never be wiped by an empty crawl.
- `.editorconfig` uses 2-space indentation for most files; Makefiles use tabs.
