# AGENTS.md

Guidance for AI coding agents working in the **6leetcode** repository.

## Project overview

1. **`apps/cli`** — the `leet` CLI, written in TypeScript with the **Bun standard
   library only** (`bun:sqlite`, `Bun.YAML`, `fetch`, `util.parseArgs`, `Bun.write`)
   and **no runtime dependencies** (only `@types/bun` as a devDependency, for editor
   types). It crawls `leetcode.cn`, stores problems in SQLite, writes per-problem
   `README`/`Makefile`, and exports JSON for the web app.
2. **`apps/web`** — the frontend: **no framework, no build step, no antd** — plain
   HTML/CSS/JS in a "newspaper" style, reading the generated JSON from `apps/web/db`.
   Left column = category dropdown + searchable question list (infinite scroll),
   right column = Chinese statement + solution.
3. **`questions/`** — the solution corpus. One directory per problem with runnable
   test programs (`solution.<ext>`) for each language plus generated docs.
   Supported languages: C, C++, Go, Java, TypeScript, Python, Rust.

## Repository layout

```
apps/cli/                     Bun CLI (module name `leet`)
  src/index.ts                entry: commands all | gen | version
  src/config.ts               config.yml + env resolution
  src/db.ts                   bun:sqlite schema + queries (questions, solutions)
  src/leetcode.ts             GraphQL client + crawl (Cloudflare-aware fetch)
  src/readme.ts               root README/README_ZH + testing/*.makefile + per-problem files
  src/jsongen.ts              exports the apps/web/db JSON
  src/solutions.ts            extracts solution bodies between begin/end markers
  src/ids.ts, src/log.ts, src/version.ts
  package.json, tsconfig.json, Makefile   (bun build --compile -> bin/leet)
  config.yml.sample
apps/web/                     frontend: plain HTML/CSS/JS, no deps
  index.html                  app shell
  assets/app.{css,js}         styles + logic (categories / infinite scroll / search / solution)
  db/                         generated JSON (index.json, questions/, solutions/)
  serve.command               serve this directory and open the page
questions/                    problem corpus (generated + hand-written solutions)
  Algorithms/, JavaScript/, LCCI/    (Database, Concurrency, Shell, pandas excluded see db.ts)
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
make c|cc|golang|java|typescript|python|rust
```

Run one problem directly (uses the included `Makefile.lang.mk`):

```bash
cd "questions/Algorithms/0001. Two Sum"
make golang          # or c, cc, java, python, rust, typescript
```

### Frontend (`apps/web`)

Plain HTML/CSS/JS with **no dependencies and no build step**; the data lives in the
sibling `db/`. Serve this directory and open the page (browsers block `file://` JSON
fetches):

```bash
cd apps/web
python3 -m http.server 8138
# open http://localhost:8138/
```

Or double-click `apps/web/serve.command`. Override the data source with `?data=<path>`.
Text uses the self-hosted **Maple Mono NF CN** font (`apps/web/assets/fonts/`). The
question statement is Chinese-only (English titles are kept).

## Conventions

### Commits

Conventional Commits: `<type>(<scope>): <description>` (see `cliff.toml`, parsed by
`git-cliff`). Types: `feat`, `fix`, `perf`, `refactor`, `docs`, `build`, `ci`,
`test`, `chore`, `style`, `revert`. Examples: `feat(cli): ...`,
`fix(web): ...`, `refactor(cli): ...`, `chore(questions): ...`. Keep messages in
English.

### Adding / editing a solution

- Each language has a single solution file named `solution.<ext>`
  (`solution.c`, `solution.cc`, `solution.go`, `solution.java`, `solution.py`,
  `solution.rs`, `solution.ts`).
- For Java the entry point lives in a `class Main` (the Makefile runs `java Main`).
- Each solution file must be runnable standalone (`main`/entry point with test cases).
- Wrap the solution body in the begin/end markers so the crawler can extract it:
  `// ------------------------------- solution begin -------------------------------`
  and the matching `... solution end ...` (comment style differs per language).
- Shared helpers live in `questions/library/<lang>/`.

### Generated files — do not hand-edit

`README.md`, `README_ZH.md`, per-problem `README*.md`/`Makefile`, `testing/*.makefile`
and `apps/web/db/**` are generated. After adding/changing solutions run
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
- **`apps/web`** is static and build-free: serve it over HTTP (browsers block
  `file://` JSON fetches); its data lives in `apps/web/db` and is generated by the CLI.
- `.editorconfig` uses 2-space indentation for most files; Makefiles use tabs.
