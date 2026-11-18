#include <iostream>
#include <vector>
using namespace std;

void nBitBinary(int N, vector<string> &ans, string &temp, int zero, int one)
{

  // base case
  if (temp.size() == N)
  {
    ans.push_back(temp);
    return;
  }

  temp.push_back('1');
  nBitBinary(N, ans, temp, zero, one + 1);
  temp.pop_back();

  if (zero < one)
  {
    temp.push_back('0');
    nBitBinary(N, ans, temp, zero + 1, one);
    temp.pop_back();
  }
}

int main()
{
  int N = 20;
  vector<string> ans;
  string temp = "";
  nBitBinary(N, ans, temp, 0, 0);
  for (string val : ans)
    cout << val << endl;

  cout << "Total possible outcome: " << ans.size() << endl;

  return 0;
}