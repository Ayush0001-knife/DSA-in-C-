#include <iostream>
using namespace std;

int main()
{
      int row, col;

      cout << "Enter The number of rows : ";
      cin >> row;
      cout << "Enter The number of columns : ";
      cin >> col;

      // Dynamically allocate a 2D array memory
      int **matrix = new int *[row];
      for (int i = 0; i < row; i++)
      {
            matrix[i] = new int[col];
      }

      // Now we can use the matrix as a 2D array
      cout << "Enter the elements of the matrix:" << endl;
      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < col; j++)
            {
                  cout << "Enter element [" << i << "][" << j << "] : ";
                  cin >> matrix[i][j];
            }
      }

      return 0;
}