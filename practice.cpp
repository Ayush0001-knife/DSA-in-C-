#include <iostream>
using namespace std;

int *func()
{
      int *ptr = new int;
      *ptr = 1200;

      cout << "ptr points to : " << *ptr << endl;
      return ptr;
}

void funcInt()
{
      int *ptr = new int;
      *ptr = 5;

      cout << *ptr;

      delete ptr;
}

void funcArr()
{
      int size;
      cin >> size;

      int *arr = new int[size];

      int x = 1;
      for (int i = 0; i < size; i++)
      {
            arr[i] = x;
            cout << arr[i] << " ";
            x++;
      }
      cout << endl;

      delete[] arr;
}

int main()
{

      int *x = func();
      cout << *x << endl;

      return 0;
}