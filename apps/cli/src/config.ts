import { existsSync, readFileSync } from "node:fs";

export interface Config {
  debug: boolean;
  questionDir: string;
  publicDir: string;
  databaseFile: string;
}

function loadYaml(path: string): Record<string, any> {
  try {
    return (Bun.YAML.parse(readFileSync(path, "utf8")) as Record<string, any>) ?? {};
  } catch {
    return {};
  }
}

/**
 * Config resolution mirrors the old Go CLI: `-c/--config` (default
 * ./config.yml), falling back to /etc/leet/config.yml, with env overrides.
 */
export function loadConfig(configPath: string): Config {
  let raw: Record<string, any> = {};
  if (configPath && existsSync(configPath)) {
    raw = loadYaml(configPath);
  } else if (configPath === "./config.yml" && existsSync("/etc/leet/config.yml")) {
    raw = loadYaml("/etc/leet/config.yml");
  } else {
    console.warn("Cannot find the specified config file.");
  }

  return {
    debug: Boolean(raw.Debug ?? false),
    questionDir: process.env.QuestionDir ?? raw.QuestionDir ?? "questions",
    publicDir: process.env.Public ?? raw.Public ?? "apps/web/db",
    databaseFile: process.env.DatabaseFile ?? raw.DatabaseFile ?? raw.Database ?? "6leetcode.db",
  };
}
