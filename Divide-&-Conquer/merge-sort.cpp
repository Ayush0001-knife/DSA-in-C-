#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int n, int st, int end, int mid) // O(n)
{
      vector<int> temp;
      int i = st, j = mid + 1;
      while (i <= mid && j <= end)
      {
            if (arr[i] < arr[j])
            {
                  temp.push_back(arr[i]);
                  i++;
            }
            else
            {
                  temp.push_back(arr[j]);
                  j++;
            }
      }

      while (i <= mid)
      {
            temp.push_back(arr[i]);
            i++;
      }
      while (j <= end)
      {
            temp.push_back(arr[j]);
            j++;
      }

      for (int i = st; i <= end; i++)
      {
            arr[i] = temp[i - st];
      }
}

void mergeSort(int arr[], int n, int st, int end) // O(nlogn)
{
      if (st >= end)
            return;

      int mid = st + (end - st) / 2;
      mergeSort(arr, n, st, mid);
      mergeSort(arr, n, mid + 1, end);

      merge(arr, n, st, end, mid);
}

int main()
{
      int arr[] = {6, 3, 7, 5, 2, 4};
      int n = sizeof(arr) / sizeof(arr[0]);

      mergeSort(arr, n, 0, n - 1);

      cout << "Sorted array: ";
      for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
      cout << endl;

      return 0;
}