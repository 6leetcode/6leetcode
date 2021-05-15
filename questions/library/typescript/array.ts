export default function (array: number[]) {
  let res = "[";
  for (let index = 0; index < array.length; index++) {
    if (index === 0) {
      res += array[index].toString();
    } else {
      res += ", " + array[index].toString();
    }
  }
  res += "]";
  return res;
}

