module.exports = {
  show: function (matrix) {
    let res = "[";
    for (let rowNum in matrix) {
      res += "["
      for (let colNum in matrix[rowNum]) {
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
}
