#include <iostream>
using namespace std;

int partition(int arr[], int st, int end)
{
      int i = st - 1, pivot = arr[end];
      for (int j = st; j < end; j++)
      {
            // if (arr[j] >= pivot)  // Descending Order
            if (arr[j] <= pivot) // Asscending Order
            {
                  i += 1;
                  swap(arr[i], arr[j]);
            }
      }
      i += 1;
      swap(arr[i], arr[end]);
      return i;
}

void quickSort(int arr[], int st, int end)
{
      if (st >= end)
      {
            return;
      }
      int pivotIdx = partition(arr, st, end);

      quickSort(arr, st, pivotIdx - 1);  // left half
      quickSort(arr, pivotIdx + 1, end); // right half
}

int main()
{
      int arr[] = {6, 3, 7, 5, 2, 4};
      int n = sizeof(arr) / sizeof(arr[0]);

      quickSort(arr, 0, n - 1);

      for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

      cout << endl;

      return 0;
}