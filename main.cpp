#include <iostream>

#define NUM_INT 11
#define MAX_INT 100

using namespace std;

void selectionSort(int *, int); // forward declaration of function in sorts.cpp

int main() {

  int array[NUM_INT];

  for (int ii=0; ii<NUM_INT; ii++) array[ii] = NUM_INT - ii;

  cout << "input data: ";
  for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  cout << endl;

  selectionSort(array, NUM_INT); cout << "Selection sort!" << endl;

  cout << "sorted data: ";
  for (int ii=0; ii<NUM_INT; ii++) cout << array[ii] << " ";
  cout << endl;

  return 0;
}

