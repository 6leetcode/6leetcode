module.exports = {
  show: function (array) {
    let res = "[";
    for (let index in array) {
      if (index == 0) {
        res += array[index].toString();
      } else {
        res += ", " + array[index].toString();
      }
    }
    res += "]";
    return res;
  }
}
