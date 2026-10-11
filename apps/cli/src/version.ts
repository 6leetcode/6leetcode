declare const LEET_VERSION: string | undefined;
declare const LEET_BUILD_STAMP: string | undefined;
declare const LEET_GIT_HASH: string | undefined;

const fallback = "no provided";

// Values are injected at build time via `bun build --define` (see Makefile);
// they fall back to env vars / "no provided" in development.
export const Version = typeof LEET_VERSION === "undefined" ? (process.env.LEET_VERSION ?? fallback) : LEET_VERSION;
export const BuildStamp =
  typeof LEET_BUILD_STAMP === "undefined" ? (process.env.LEET_BUILD_STAMP ?? fallback) : LEET_BUILD_STAMP;
export const GitHash = typeof LEET_GIT_HASH === "undefined" ? (process.env.LEET_GIT_HASH ?? fallback) : LEET_GIT_HASH;

export function printVersion(): void {
  console.log(`6leetcode ${process.platform}/${process.arch} Bun/${Bun.version}`);
  console.log(`Version: ${Version}`);
  console.log(`BuildDate: ${BuildStamp}`);
  console.log(`BuildHash: ${GitHash}`);
}
