export default function (matrix: number[][]) {
  let res = "[";
  for (let rowNum = 0; rowNum < matrix.length; rowNum++) {
    res += "["
    for (let colNum = 0; colNum < matrix[rowNum].length; colNum++) {
      if (colNum == 0) {
        res += matrix[rowNum][colNum].toString();
      } else {
        res += ", " + matrix[rowNum][colNum].toString();
      }
    }
    if (rowNum != matrix.length - 1) {
      res += "], ";
    } else {
      res += "]";
    }
  }
  res += "]"
  return res;
}

