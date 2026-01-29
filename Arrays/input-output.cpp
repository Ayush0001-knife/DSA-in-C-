#include <iostream>
using namespace std;

int main()
{
      int n;
      cout << "Enter the number of elements: ";
      cin >> n;
      int arr[n];

      for (int i = 0; i < n; i++)
      {
            cout << "Enter element for index " << i << ": ";
            cin >> arr[i];
      }

      cout << "The elements in the array are: ";
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }

      return 0;
}