#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board)
{
      int n = board.size();

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  cout << board[i][j] << " ";
            }
            cout << endl;
      }
      cout << "-----------" << endl;
}

bool isSafe(vector<vector<char>> board, int rowNumber, int j)
{
      int n = board.size();

      // Horizontal Safety
      for (int k = 0; k < n; k++)
      {
            if (board[rowNumber][k] == 'Q')
            {
                  return false;
            }
      }

      // Vertical Safety
      for (int i = 0; i < rowNumber; i++)
      {
            if (board[i][j] == 'Q')
            {
                  return false;
            }
      }

      // Diagonal Safety -> There are two diagonls diagonal-left,diagonal right
      // diagonal-left
      for (int i = rowNumber, k = j; i >= 0 && k >= 0; i--, k--)
      {
            if (board[i][k] == 'Q')
            {
                  return false;
            }
      }
      // diagonal-right
      for (int i = rowNumber, k = j; i >= 0 && k <= n; i--, k++)
      {
            if (board[i][k] == 'Q')
            {
                  return false;
            }
      }

      return true;
}

int nQueens(vector<vector<char>> board, int rowNumber)
{
      int n = board.size();

      if (rowNumber == n)
      {
            printBoard(board);
            return 1;
      }
      int count = 0;
      for (int j = 0; j < n; j++)
      {
            if (isSafe(board, rowNumber, j))
            {
                  board[rowNumber][j] = 'Q'; // forwarding in recursion to assign queen to new position
                  count += nQueens(board, rowNumber + 1);
                  board[rowNumber][j] = '.'; // using backtracking to remove the queen from the assigned position so that in next iteration queen can sit in another columnof same row
            }
      }
      return count; // No of possible solutions at each level
}

int main()
{
      int n = 4;
      std::vector<vector<char>> board(n, std::vector<char>(n, '.'));

      int count = nQueens(board, 0); // To track total No of possible solutions
      cout << "Count : " << count << endl;

      return 0;
}