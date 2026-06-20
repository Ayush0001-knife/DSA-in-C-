#include <iostream>
#include <vector>
using namespace std;

// Pass true for ascending, false for descending
void merge(int arr[], int st, int mid, int end, bool ascending)
{
      vector<int> temp;

      int i = st;
      int j = mid + 1;

      while (i <= mid && j <= end)
      {
            if (ascending)
            {
                  if (arr[i] <= arr[j])
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
            else
            {
                  if (arr[i] >= arr[j])
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

      for (int k = st; k <= end; k++)
      {
            arr[k] = temp[k - st];
      }
}

void mergeSort(int arr[], int st, int end, bool ascending)
{
      if (st >= end)
            return;

      int mid = st + (end - st) / 2;

      mergeSort(arr, st, mid, ascending);
      mergeSort(arr, mid + 1, end, ascending);

      merge(arr, st, mid, end, ascending);
}

int main()
{
      int arr[] = {6, 3, 7, 5, 2, 4};
      int n = sizeof(arr) / sizeof(arr[0]);

      // true  -> Ascending
      // false -> Descending
      bool ascending = true;

      mergeSort(arr, 0, n - 1, ascending);

      if (ascending)
            cout << "Ascending Order: ";
      else
            cout << "Descending Order: ";

      for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

      cout << endl;

      return 0;
}