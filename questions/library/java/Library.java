class Library {
  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      if (i == 0) {
        res += Integer.toString(arr[i]);
      } else {
        res += ", " + Integer.toString(arr[i]);
      }
    }
    res += "]";
    return res;
  }

  public static String ArrayShowString(String[] arr) {
    String res = "[";
    for (Integer i = 0; i < arr.length; i++) {
      if (i == 0) {
        res += arr[i];
      } else {
        res += ", " + arr[i];
      }
    }
    res += "]";
    return res;
  }

  public static String matrixShowInteger(int[][] matrix) {
    String res = "[";
    for (int i = 0; i < matrix.length; i++) {
      res += "[";
      for (int j = 0; j < matrix[i].length; j++) {
        if (j == 0) {
          res += matrix[i];
        } else {
          res += ", " + matrix[i];
        }
      }
      if (i != matrix.length - 1) {
        res += "], ";
      } else {
        res += "]";
      }
    }
    res += "]";
    return res;
  }

  public static void main(String[] args) {
    int[] test1 = { 1, 2, 3 };
    System.out.printf("array integer show: %s\n", ArrayShowInteger(test1));
    String[] test2 = { "1", "2", "3" };
    System.out.printf("array integer show: %s\n", ArrayShowString(test2));
    int[][] test3 = { { 1, 2 }, { 3, 4 } };
    System.out.printf("array integer show: %s\n", matrixShowInteger(test3));
  }
}
