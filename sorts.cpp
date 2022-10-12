void swapTwo(int *array, int ix1, int ix2) {
  int tmp;
  tmp = array[ix1];
  array[ix1] = array[ix2];
  array[ix2] = tmp;
}

void selectionSort(int *array, int n) {
// algo from Nasser's lecture notes
  for (int ii=0; ii<(n-1); ii++) {
    int ix_min = ii;
    for (int jj=ii+1; jj<n; jj++) {
      if (array[jj] < array[ix_min]) ix_min = jj;
    } 
    swapTwo(array, ii, ix_min);
  } 
}

