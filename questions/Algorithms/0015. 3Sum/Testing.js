const matrix = require("../../library/javascript/matrix");
const array = require("../../library/javascript/array");

// ------------------------------- solution begin -------------------------------
var threeSum = function (array) {
  array.sort((a, b) => a - b);
  const triplets = [];

  for (let i = 0; i < array.length - 2; i++) {
    if (array[i] != array[i - 1]) { // making sure our solution set does not contain duplicate triplets
      let left = i + 1;
      let right = array.length - 1;

      while (left < right) {
        const currentSum = array[i] + array[left] + array[right];
        if (currentSum === 0) {
          triplets.push([array[i], array[left], array[right]]);
          while (array[left] == array[left + 1]) left++
          while (array[right] == array[right - 1]) right-- // making sure our solution set does not contain duplicate triplets
          left++;
          right--;
        } else if (currentSum < 0) {
          left++
        } else if (currentSum > 0) {
          right--
        }
      }
    }
  }
  return triplets
};
// ------------------------------- solution end ---------------------------------

let input = [4, -10, -11, -12, -8, -12, -14, -11, -6, 2, -4, 2, 3, 12, -3, -12, -14, -12, -8, -9, -6, -3, 10, 2, 14, 10, 7, -7, -9, 0, -9, 10, -2, -5, 14, 5, -9, 7, 9, 0, -14, 12, 10, 4, 9, -8, 8, 11, -5, -15, -13, -3, -11, 4, 14, 11, -1, -2, -11, 5, 14, -4, -8, -3, 6, -9, 9, 12, 6, 3, -10, 7, 0, -15, -3, -13, -8, 12, 13, -5, 12, -15, 7, 8, -4, -2, 4, 2, 3, 9, -8, 2, -10, -1, 6, 3, -2, 0, -7, 11, -12, -2, 3, -4, -2, 7, -2, -3, 4, -12, -1, 1, 10, 13, -5, -9, -12, 6, 8, 7, 0, 7, -6, 5, 13, 8, -14, -12];
console.log("Input:  ", array.show(input));
console.log("Output: ", matrix.show(threeSum(input)));
