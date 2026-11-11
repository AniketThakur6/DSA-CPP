// merge sort decreasing order
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
  vector<int> temp(end - start+1);
  int left = start, right = mid + 1, index = 0;

  // sorting
  while (left <= mid && right <= end)
  {
    if (arr[left] <= arr[right])
    {
      temp[index] = arr[right];
      right++, index++;
    }
    else
    {
      temp[index] = arr[left];
      left++, index++;
    }
  }

  // not empty left
  while (left <= mid)
  {
    temp[index] = arr[left];
    index++, left++;
  }

  // not empty right
  while (right <= end)
  {
    temp[index] = arr[right];
    index++, right++;
  }

  // copy value in arr
  index = 0;
  while (start <= end)
  {
    arr[start] = temp[index];
    start++, index++;
  }
}

void mergeSort(int arr[], int start, int end)
{
  if (start == end)
    return;

  int mid = start + (end - start) / 2;

  // left part
  mergeSort(arr, start, mid);
  // right part
  mergeSort(arr, mid + 1, end);

  // merge array
  merge(arr, start, mid, end);
}

int main()
{
  int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
  int start = 0,end=9;
  mergeSort(arr,start,end);
  for(int i=0;i<10;i++)
  cout<<arr[i]<<" ";
}