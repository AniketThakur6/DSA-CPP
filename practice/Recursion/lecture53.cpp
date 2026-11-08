// Nth stairs climbing
// #include <iostream>
// using namespace std;

// int climbStairs(int n){
//   int curr=1,prev=1,next=0;

//   if(n==1 || n==0)
//   return 1;

//   for(int i=1;i<n;i++){
//     next=curr+prev;
//     prev=curr;
//     curr=next;
//   }
//   return next;
// }

// int main(){
//   int n = 45;
//   cout<<climbStairs(n);
//   return 0;
// }

// sum all element in array
// #include <iostream>
// using namespace std;

// int sumAll(int arr[],int size){
//   if(size<0)
//   return 0;

//   return arr[size]+sumAll(arr,size-1);
// }

// int main(){
//   int arr[] = {1,2,3,4,5,6,7};
//   int size = sizeof(arr)/sizeof(arr[0]);

//   cout<<sumAll(arr,size-1);
//   return 0;
// }

// minimum Element
// #include <iostream>
// using namespace std;

// int minElement(int arr[], int size)
// {
//   if (size < 1)
//     return arr[size];

//   return min(arr[size], minElement(arr, size - 1));
// }

// int main()
// {
//   int arr[] = {7, 2, 4, 10, 6};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   cout << minElement(arr, size - 1);
//   return 0;
// }

// panlidrome
// #include <iostream>
// using namespace std;

// bool checkpal(string str, int start, int end)
// {
//   if (start >= end)
//     return 1;

//   if (str[start] != str[end])
//     return 0;

//   else
//     return checkpal(str, start + 1, end - 1);
// }

// int main()
// {
//   string str = "naman";
//   cout << checkpal(str, 0, 4) << endl;
//   return 0;
// }

// count vowels
// #include <iostream>
// using namespace std;

// int count(string str, int index)
// {

//   if (index < 0)
//     return 0;

//   if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
//     return 1 + count(str, index - 1);
//   else
//     return count(str, index - 1);
// }

// int main()
// {
//   string str = "aeiou";

//   cout << count(str, 4) << endl;
//   return 0;
// }

// reverse string
// #include <iostream>
// using namespace std;

// void rev(string &str, int start, int end)
// {
//   if (start >= end)
//     return;

//   char c = str[start];
//   str[start] = str[end];
//   str[end] = c;

//   rev(str, start + 1, end - 1);
// }

// int main()
// {
//   string str = "aniket";

//   rev(str, 0, str.size() - 1);
//   cout << str << endl;
// }

// lowerCase to upperCase
// #include <iostream>
// using namespace std;

// void toUpperCase(string &str, int index)
// {
//   if (index < 0)
//     return;

//   char c = 'A' + str[index] - 'a';
//   str[index] = c;

//   toUpperCase(str, index - 1);
// }

// int main()
// {
//   string str = "aniket";
//   toUpperCase(str, str.size() - 1);
//   cout << str << endl;
// }

// linaer search
// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int index, int key)
// {
//   if (index < 0)
//     return -1;

//   if (arr[index] == key)
//     return index;
//   else
//     return linearSearch(arr, index - 1, key);
// }

// int main()
// {
//   int arr[] = {10, 4, 2, 56, 3, 1};
//   int key = 2;
//   int size = sizeof(arr) / sizeof(arr[0]);
//   cout <<"Index: "<<linearSearch(arr, size - 1, key);
//   return 0;
// }

// binary search
#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int x)
{
  if (start > end)
    return 0;

  int mid = start + (end - start) / 2;

  if (arr[mid] == x)
    return 1;
  else if (arr[mid] < x)
    return binarySearch(arr, mid+1, end, x);
  else
    return binarySearch(arr, start, mid-1, x);
}

int main()
{
  int arr[] = {2,4,6,8,10,12,14};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<binarySearch(arr,0,size-1,122);
  return 0;
}