#include <iostream>
using namespace std;

// with extra spaces

void printaArray(int arr[], int n)
{
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
}

int main()
{
      int arr[] = {5, 4, 3, 9, 2};
      int n = sizeof(arr) / sizeof(int);
      int newArr[n];

      for (int i = n - 1; i >= 0; i--)
      {
            newArr[n - i - 1] = arr[i];
      }

      printaArray(newArr, n);

      return 0;
}