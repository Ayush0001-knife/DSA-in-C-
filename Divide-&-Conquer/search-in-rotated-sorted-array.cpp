#include <iostream>
using namespace std;

int search(int arr[], int st, int end, int target)
{
      if (st > end)
      {
            return -1;
      }
      int mid = st + (end - st) / 2;
      if (arr[mid] == target)
      {
            return mid;
      }
      if (arr[st] <= arr[mid])
      {
            if (arr[st] <= target && target <= arr[mid])
            {
                  return search(arr, st, mid - 1, target);
            }
            return search(arr, mid + 1, end, target);
      }
      if (arr[mid] <= target && target <= arr[end])
      {
            return search(arr, mid + 1, end, target);
      }
      return search(arr, st, mid - 1, target);
}

int main()
{
      int arr[] = {4, 5, 6, 7, 0, 1, 2};
      int n = sizeof(arr) / sizeof(arr[0]);
      int target = 0;

      cout << search(arr, 0, n - 1, target);

      return 0;
}