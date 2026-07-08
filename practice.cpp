#include <iostream>
using namespace std;

void printDecreasing(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printDecreasing(n - 1);
}

void printIncreasing(int n, int count)
{
    if (count == n)
    {
        cout << count << " ";
        return;
    }
    cout << count << " ";
    printIncreasing(n, count + 1);
}

int main()
{
    int n = 10;
    // printDecreasing(n);
    printIncreasing(n, 1);

    return 0;
}
