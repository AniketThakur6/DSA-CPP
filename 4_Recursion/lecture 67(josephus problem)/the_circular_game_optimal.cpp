#include <iostream>
using namespace std;

int findTheWinner(int n, int k)
{

  // base case
  if (n == 1)
    return 0;

  return (findTheWinner(n - 1, k) + k) % n;
}

int main()
{
  int n = 5;
  int k = 3;
  cout << findTheWinner(n, k) + 1;
  return 0;
}