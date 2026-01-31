#include <iostream>
using namespace std;

// Three loops will be required to print all subarrays of an array

int main()
{
      int arr[] = {1, 2, 3, 4, 5};
      int n = sizeof(arr) / sizeof(arr[0]);

      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  cout << "{ ";
                  for (int k = i; k <= j; k++)
                  {
                        cout << arr[k] << " ";
                  }
                  cout << "} ";
            }
            cout << endl;
      }

      return 0;
}