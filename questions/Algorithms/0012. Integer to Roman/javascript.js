var intToRoman = function (num) {
  let symbol = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"];
  let value = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
  let result = "";
  let index = 0;
  while (num > 0) {
    while (num >= value[index]) {
      num -= value[index];
      result += symbol[index];
    }
    index += 1;
  }
  return result;
};

let input = 3999;
console.log("Input: ", input);
console.log("Output:", intToRoman(input));
