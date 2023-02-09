/*
Problem Statement
  Implement a function removeEven( int *& Arr, int size ) which takes an array arr and its size and removes all the even elements from a given array.

Input
  An array with integers and its size

Note: The array passed to the function has been created dynamically.

Output
  An array with only odd integers
*/

#include <cassert>

// The following function should modify the array and return a pointer to the modified array
int *removeEven(int *&Arr, int size) {
  int m = 0;
  for (int i = 0; i < size; i++)
  {
    if (Arr[i] % 2 != 0) // if odd number found
    {
      Arr[m] = Arr[i]; // inserting odd values in array
      ++m;
    }
  }
  int *temp = new int[m];
  for (int i = 0; i < m; i++)
    temp[i] = Arr[i];

  delete[] Arr;
  Arr = temp;
  return Arr; // returning array after removing odd numbers
}

// Create a main function and add 10 test cases for removeEven using assert statements
int main()
{
  int size = 5;
  int *arr = new int[size];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  int *new_arr = removeEven(arr, size);
  assert(new_arr[0] == 1);
  assert(new_arr[1] == 3);
  assert(new_arr[2] == 5);

  int size1 = 5;
  int *arr1 = new int[size1];
  arr1[0] = 2;
  arr1[1] = 2;
  arr1[2] = 4;
  arr1[3] = 4;
  arr1[4] = 6;

  int *new_arr1 = removeEven(arr1, size1);
  assert(new_arr1[0] == 0);

  int size2 = 5;
  int *arr2 = new int[size2];
  arr2[0] = 1;
  arr2[1] = 3;
  arr2[2] = 5;
  arr2[3] = 7;
  arr2[4] = 9;

  int *new_arr2 = removeEven(arr2, size2);
  assert(new_arr2[0] == 1);
  assert(new_arr2[1] == 3);
  assert(new_arr2[2] == 5);
  assert(new_arr2[3] == 7);
  assert(new_arr2[4] == 9);

  int size3 = 5;
  int *arr3 = new int[size3];
  arr3[0] = 2;
  arr3[1] = 4;
  arr3[2] = 6;
  arr3[3] = 8;
  arr3[4] = 10;

  int *new_arr3 = removeEven(arr3, size3);
  assert(new_arr3[0] == 0);

  return 0;
}
