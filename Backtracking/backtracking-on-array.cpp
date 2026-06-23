#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
}

void changeArray(int arr[], int n, int i)
{
      if (i == n)
      {
            printArr(arr, n);
            return;
      }

      arr[i] = i + 1;
      changeArray(arr, n, i + 1);

      // This Call will Come by backtracking
      arr[i] -= 2;
}

int main()
{
      int arr[5] = {0};
      int n = 5;
      changeArray(arr, n, 0);
      cout << endl;
      printArr(arr, n);

      return 0;
}