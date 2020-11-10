// ------------------------------- solution begin -------------------------------
/**
 * @param {number} n
 * @return {boolean}
 */
var canWinNim = function(n) {
    return n % 4 ==0;
};
// ------------------------------- solution end ---------------------------------

let input = 4;
console.log("Input: ", input)
console.log("Output:", canWinNim(input))
