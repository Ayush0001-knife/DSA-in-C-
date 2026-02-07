#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;
}

void countingSort(int arr[], int n)
{

      int freeqArr[100] = {0}; // frequency array

      for (int i = 0; i < n; i++)
      {
            freeqArr[arr[i]]++;
      }
      for (int i = 0; i < n; i++)
      {
      }

      printArray(arr, n);
}

int main()
{
      int arr[] = {5, 4, 1, 3, 2};
      int n = sizeof(arr) / sizeof(int);

      countingSort(arr, n);

      return 0;
}