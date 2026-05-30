#include <iostream>
using namespace std;

int firstOccurance(vector<int> arr, int key, int i)
{
      if (i > arr.size() - 1)
      {
            return -1;
      }
      if (arr[i] == key)
      {
            return i;
      }
      return firstOccurance(arr, key, i + 1);
}

int main()
{
      vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 6, 7, 8, 9};
      int key = 3;
      int index = firstOccurance(arr, key, 0);
      if (index != -1)
      {
            cout << "First occurance of " << key << " is at index: " << index << endl;
      }
      else
      {
            cout << key << " is not present in the array." << endl;
      }

      return 0;
}