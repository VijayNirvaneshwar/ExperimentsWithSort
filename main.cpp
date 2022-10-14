#include <iostream>
#include <cstdlib>
#include <chrono>

#define NUM_INT 100000
#define MAX_INT 100

using namespace std;
using namespace chrono;

void selectionSort(int *, int); // forward declaration of function in sorts.cpp
void insertionSort(int *, int);
void bubbleSort(int *array, int n);
void mergeSort(int *array, int firstIndex, int lastIndex);

int main() {

  srand(time(0));

  time_point<high_resolution_clock> start, end;
  duration<double> elapsedSeconds;

  int array[NUM_INT];

  /*  SELECTION SORT  */

  cout << "Selection sort!" << endl;

  for (int ii=0; ii<NUM_INT; ii++) array[ii] = rand() / MAX_INT;

  // cout << "input data: ";
  // for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  // cout << endl;

  start = high_resolution_clock::now();

  selectionSort(array, NUM_INT);

  end = high_resolution_clock::now();
  elapsedSeconds = (end - start) * 1000;

  // cout << "sorted data: ";
  // for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  // cout << endl;
  cout << "elapsed time: " << elapsedSeconds.count() << "ms" << endl;
  cout << endl;

  /*  INSERTION SORT  */

  cout << "Insertion sort!" << endl;

  for (int ii=0; ii<NUM_INT; ii++) array[ii] = rand() / MAX_INT;

  // cout << "input data: ";
  // for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  // cout << endl;

  start = high_resolution_clock::now();

  insertionSort(array, NUM_INT);

  end = high_resolution_clock::now();
  elapsedSeconds = (end - start) * 1000;

  // cout << "sorted data: ";
  // for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  // cout << endl;
  cout << "elapsed time: " << elapsedSeconds.count() << "ms" << endl;
  cout << endl;

  /*  BUBBLE SORT  */

  cout << "Bubble sort!" << endl;

  for (int ii=0; ii<NUM_INT; ii++) array[ii] = rand() / MAX_INT;

  // cout << "input data: ";
  // for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  // cout << endl;

  start = high_resolution_clock::now();

  bubbleSort(array, NUM_INT);

  end = high_resolution_clock::now();
  elapsedSeconds = (end - start) * 1000;

  // cout << "sorted data: ";
  // for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  // cout << endl;
  cout << "elapsed time: " << elapsedSeconds.count() << "ms" << endl;
  cout << endl;

  /* MERGE SORT */
  cout << "Merge sort!" << endl;

  for (int ii=0; ii<NUM_INT; ii++) array[ii] = rand() / MAX_INT;

  // cout << "input data: ";
  // for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  // cout << endl;

  start = high_resolution_clock::now();

  mergeSort(array, 0, (NUM_INT-1)); 

  end = high_resolution_clock::now();
  elapsedSeconds = (end - start) * 1000;

  // cout << "sorted data: ";
  // for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  // cout << endl;
  cout << "elapsed time: " << elapsedSeconds.count() << "ms" << endl;
  cout << endl;

  return 0;
}

