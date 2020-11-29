var largestPerimeter = function (A) {
  A.sort((a, b) => a - b);
  for (let i = A.length - 1; i >= 2; --i) {
    if (A[i - 2] + A[i - 1] > A[i]) {
      return A[i - 2] + A[i - 1] + A[i];
    }
  }
  return 0;
};

let input = [3, 6, 2, 3];
console.log("Input:  ", input);
console.log("Output: ", largestPerimeter(input))
