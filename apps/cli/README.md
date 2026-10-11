# leet

LeetCode crawler / generator CLI, written with the [Bun](https://bun.sh) standard
library only (no third-party dependencies).

## Commands

```bash
leet all       # crawl leetcode.cn, write per-question README/Makefile, then generate
leet gen       # regenerate README*/testing makefiles/web JSON from the local database
leet version
```

Config is resolved from `-c/--config` (default `./config.yml`), falling back to
`/etc/leet/config.yml`, with `QuestionDir` / `Public` / `DatabaseFile` env overrides.

## Build

```bash
make build     # bun build --compile -> bin/leet
make install   # PREFIX=/usr/local by default
```

`bun run src/index.ts <command>` runs it directly without compiling.

## Notes

- `leetcode.cn` sits behind Cloudflare. Requests pass with Bun's **default**
  User-Agent plus a same-origin `referer`; setting a spoofed browser UA is
  answered with a 403 challenge. See `src/leetcode.ts`.
- SQLite (`bun:sqlite`) stores questions/solutions in `6leetcode.db`.
