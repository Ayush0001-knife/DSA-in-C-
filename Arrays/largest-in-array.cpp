#include <iostream>
using namespace std;

int main()
{
      int arr[5] = {5, 4, 3, 9, 2};
      int largest = arr[0];
      int n = sizeof(arr) / sizeof(arr[0]);

      for (int i = 1; i < n; i++)
      {
            if (arr[i] > largest)
            {
                  largest = arr[i];
            }
      }

      cout << "The largest element in the array is: " << largest << endl;

      return 0;
}