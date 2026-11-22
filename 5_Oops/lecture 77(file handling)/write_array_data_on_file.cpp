#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

  vector<int> arr(5);
  cout << "Enter 5 int value: ";
  for (int i = 0; i < arr.size(); i++)
    cin >> arr[i];

  // open file
  ofstream fout;
  fout.open("zero.txt");

  fout<<"Original Data: ";
  for (int i = 0; i < arr.size(); i++)
  {
    fout << arr[i] << " ";
  }

  fout<<"\nSorted Data: ";
  sort(arr.begin(),arr.end());

  for(int i=0;i<arr.size();i++)
  fout<<arr[i]<<" ";

  fout.close();
}