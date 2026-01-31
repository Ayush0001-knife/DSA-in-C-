#include <iostream>
using namespace std;

// Binary Search is for only sorted arrays

int binarySearch(int arr[], int n, int key)
{
      int start = 0, end = n - 1;

      while (start <= end)
      {
            int mid = (start + end) / 2;

            if (arr[mid] == key)
            {
                  return mid;
            }
            else if (arr[mid] < key)
            {
                  start = mid + 1;
            }
            else
            {
                  end = mid - 1;
            }
      }
}

int main()
{
      int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
      int n = sizeof(arr) / sizeof(arr[0]);
      int key;
      cout << "Enter the element to be searched: ";
      cin >> key;

      int idx = binarySearch(arr, n, key);

      cout << "Key found at index " << idx;

      return 0;
}