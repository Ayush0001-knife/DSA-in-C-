#include <iostream>
using namespace std;

int lastOccurance(vector<int> arr, int key, int i)
{
      if (i < 0)
      {
            return -1;
      }
      if (arr[i] == key)
      {
            return i;
      }
      return lastOccurance(arr, key, i - 1);
}

int main()
{
      vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 6, 7, 8, 9};
      int key = 3;
      int i = arr.size() - 1;
      int index = lastOccurance(arr, key, i);
      if (index != -1)
      {
            cout << "Last occurance of " << key << " is at index: " << index << endl;
      }
      else
      {
            cout << key << " is not present in the array." << endl;
      }

      return 0;
}