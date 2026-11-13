#include <iostream>
using namespace std;

void toh(int n, string sour, string help, string dest, int &move)
{
  if (n == 1)
  {
    move++;
    cout << "move disk " << n << " from rod " << sour << " to rod " << dest << endl;
    return;
  }

  toh(n - 1, sour, dest, help, move);
  cout << "move disk " << n << " from rod " << sour << " to rod " << dest << endl;
  toh(n - 1, help, sour, dest, move);
}

int main()
{
  int no_of_disk = 4;
  int no_of_moves = 0;
  string sour = "Source";
  string help = "Helper";
  string dest = "Destin";
  toh(no_of_disk, sour, help, dest, no_of_moves);

  cout << "Total no of moves: " << no_of_moves;
  return 0;
}