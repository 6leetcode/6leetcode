// ------------------------------- solution begin -------------------------------
const hanota = (A: number[], B: number[], C: number[]): void => {
  const hanoi = (src: number[], aux: number[], dst: number[], n: number) => {
    if (n === 0) return;
    hanoi(src, dst, aux, n - 1);
    dst.push(src.pop()!);
    hanoi(aux, src, dst, n - 1);
  };
  hanoi(A, B, C, A.length);
};
// ------------------------------- solution end ---------------------------------

const A = [2, 1, 0];
const B: number[] = [];
const C: number[] = [];
console.log(`Input:  A = [2, 1, 0], B = [], C = []`);
hanota(A, B, C);
console.log(`Output: C = [${C.join(', ')}]`);
