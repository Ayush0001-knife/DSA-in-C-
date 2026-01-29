#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
      for (int i = 0; i < n; i++)
      {
            if (arr[i] == key)
            {
                  return i; // element found
            }
      }
      return -1; // element not found
}

int main()
{
      int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
      int n = sizeof(arr) / sizeof(arr[0]);

      int key;
      cout << "Enter the element to search: ";
      cin >> key;

      int index = linearSearch(arr, n, key);

      if (index != -1)
      {
            cout << "Element found at index " << index << endl;
      }
      else
      {
            cout << "Element not found" << endl;
      }

      return 0;
}