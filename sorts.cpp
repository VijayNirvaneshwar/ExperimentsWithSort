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

// Author: Luke Hallum (modified by Vijay Nirvaneshwar)
void insertionSort (int *array, int n) {
  for (int i = 1; i < n; i++) {
    for (int j = i - 1; j >= 0 && (array[j] > array[j+1]); j--) {
      swapTwo(array, j, j + 1);
    }
  }
}

// Author: Vijay Nirvaneshwar
void bubbleSort(int *array, int n) {
  for (int i = 1; i < n;  i++) {
    for (int j = 1; j < n - i + 1; j++) {
      if (array[j] < array[j-1]) {
        swapTwo(array, j, j-1);
      }
    }
  }
}

// Author: Vijay Nirvaneshwar
void mergeSwap(int *array, int firstIndex, int lastIndex) {
  // Find middle index
  int middleIndex = (firstIndex + lastIndex) / 2;

  for (int i = 0; i <= middleIndex; i++) {
    for (int j = (middleIndex + 1); j <= lastIndex; j++) {
      if (array[i] > array[j]) {
        swapTwo(array, i, j);
        break;
      }
    }
  }
}

// Author: Vijay Nirvaneshwar
void mergeSort(int *array, int firstIndex, int lastIndex) {
  if (firstIndex < lastIndex) {
    int middleIndex = (firstIndex + lastIndex) / 2;

    // Recursively call mergesort for first half and second half
    mergeSort(array, firstIndex, middleIndex);
    mergeSort(array, (middleIndex + 1), lastIndex);

    // Merge arrays
    mergeSwap(array, firstIndex, lastIndex);
  }
}

