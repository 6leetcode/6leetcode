function stamp(): string {
  return new Date().toISOString();
}

export const logging = {
  info: (msg: string): void => console.log(`INFO[${stamp()}] ${msg}`),
  warn: (msg: string): void => console.warn(`WARN[${stamp()}] ${msg}`),
  error: (msg: string): void => console.error(`ERRO[${stamp()}] ${msg}`),
};
