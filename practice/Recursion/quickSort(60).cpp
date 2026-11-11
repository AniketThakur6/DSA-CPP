// Quick Sort
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{

  int pos = start;

  for (int i = start; i <= end; i++)
  {
    if (arr[i] <= arr[end])
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }

  return pos - 1;
}

void quickSort(vector<int> &arr, int start, int end)
{
  if (start >= end)
    return;

  int pivot = partition(arr, start, end);
  // left
  quickSort(arr, start, pivot - 1);
  // right
  quickSort(arr, pivot+1, end);
}

int main()
{
  vector<int> arr = {6, 4, 2, 8, 13, 7, 11, 9, 3, 6};
  int start = 0, end = arr.size() - 1;
  quickSort(arr, start, end);
  for (int val : arr)
    cout << val << " ";
}