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

void selectionSort(int arr[], int n)
{
      for (int i = 0; i < n - 1; i++)
      {
            int min_idx = i;
            for (int j = i; j < n; j++)
            {
                  if (arr[j] < arr[min_idx])
                  {
                        min_idx = j;
                  }
            }
            swap(arr[i], arr[min_idx]);
      }
      printArray(arr, n);
}

int main()
{
      int arr[] = {5, 4, 1, 3, 2};
      int n = sizeof(arr) / sizeof(int);

      selectionSort(arr, n);

      return 0;
}