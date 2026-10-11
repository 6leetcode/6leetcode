const commonRegex = /^\d{1,4}$/;

/** Zero-pads numeric ids to 4 digits (1 -> 0001); leaves LCP/LCR/short ids as-is. */
export function questionId(id: string): string {
  if (commonRegex.test(id)) {
    return String(Number(id)).padStart(4, "0");
  }
  return id;
}
