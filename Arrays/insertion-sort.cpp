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

void insertionSort(int arr[], int n)
{
      for (int i = 1; i < n; i++)
      {
            int curr = arr[i]; // store value
            int prev = i - 1;

            while (prev >= 0 && arr[prev] > curr)
            {
                  arr[prev + 1] = arr[prev];
                  prev--;
            }

            // insert at correct place
            arr[prev + 1] = curr;
      }
      printArray(arr, n);
}

int main()
{
      int arr[] = {5, 4, 1, 3, 2};
      int n = sizeof(arr) / sizeof(int);

      insertionSort(arr, n);

      return 0;
}
