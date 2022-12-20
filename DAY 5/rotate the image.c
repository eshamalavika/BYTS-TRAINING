public void rotateMatrix(int[][] arr, int length, int r, int c) {

     if (r >= length || c >= length || length == 1)
      return;

     int val = arr[r][c];

     if (c == (length - 1))
      rotateMatrix(arr, length, r + 1, 0);
     else
      rotateMatrix(arr, length, r, c + 1);

     arr[c][(length - 1) - r] = val;

     return;
    }
