#include <iostream>
#include <vector>
using namespace std; // leetcode

int winner(vector<bool> &person, int n, int index, int person_left, int k)
{

  // base case
  if (person_left == 1)
  {
    for (int i = 0; i < n; i++)
      if (person[i] == 0)
        return i;
  }

  // find to person kill
  int kill = (k - 1) % person_left;

  // find the person to kill
  while (kill--)
  {
    index = (index + 1) % n;
    while (person[index] == 1)
      index = (index + 1) % n;
  }

  // kill the person
  person[index]=1;

  //find the next alive person
  while(person[index]==1)
  index=(index+1)%n;

  return winner(person,n,index,person_left-1,k);
}

int findTheWinner(int n, int k)
{
  vector<bool> person(n, 0);
  return winner(person, n, 0, n, k) + 1; // 1 is added becuz index start from 1 
}

int main()
{
  int n = 5;
  int k = 3;
  cout << findTheWinner(n, k);
  return 0;
}