// Subsequence
// #include <iostream>
// #include <vector>
// using namespace std;

// void subSeq(int arr[], int index, int size, vector<vector<int>> &ans, vector<int> temp)
// {
//   // base case
//   if (index == size)
//   {
//     ans.push_back(temp);
//     return;
//   }

//   // not included
//   subSeq(arr, index + 1, size, ans, temp);

//   // included
//   temp.push_back(arr[index]);
//   subSeq(arr, index + 1, size, ans, temp);
// }

// int main()
// {
//   int arr[] = {1, 2, 3, 4};
//   vector<vector<int>> ans;
//   vector<int> temp;

//   subSeq(arr, 0, 4, ans, temp);
//   for (auto v : ans)
//   {
//     cout << "{" << " ";
//     for (int val : v)
//       cout << val << " ";

//     cout << "}" << endl;
//   }
//   return 0;
// }

// Generate valid parentheses
// #include <iostream>
// #include <vector>
// using namespace std;

// void parenthese(int n, int left, int right, vector<string> &ans, string &temp)
// {
//   // base case
//   if (left + right == 2 * n)
//   {
//     ans.push_back(temp);
//     return;
//   }

//   // left
//   if (left < n)
//   {
//     temp.push_back('(');
//     parenthese(n, left + 1, right, ans, temp);
//     temp.pop_back();
//   }

//   // right
//   if (right < left)
//   {
//     temp.push_back(')');
//     parenthese(n, left, right + 1, ans, temp);
//     temp.pop_back();
//   }
// }

// int main()
// {
//   int n = 6;
//   vector<string> ans;
//   string temp = "";
//   parenthese(n, 0, 0, ans, temp);
//   for (auto val : ans)
//   {
//     cout << '[' << " ";
//     cout <<val<< " ";
//     cout << "]" << endl;
//   }
//   return 0;
// }

// subSet sum
// #include <iostream>
// #include <vector>
// using namespace std;

// void subSeq(int arr[], int index, int size, vector<int> &ans, vector<int> &temp, vector<vector<int>> &subset)
// {
//   // base case
//   if (index == size)
//   {
//     int sum = 0;
//     for (int i = 0; i < temp.size(); i++)
//       sum += temp[i];
//     ans.push_back(sum);
//     subset.push_back(temp);
//     return;
//   }

//   // not include;
//   subSeq(arr, index + 1, size, ans, temp, subset);

//   // include
//   temp.push_back(arr[index]);
//   subSeq(arr, index + 1, size, ans, temp, subset);
//   temp.pop_back();
// }

// int main()
// {
//   int arr[] = {3, 4, 5};
//   vector<int> ans;
//   vector<vector<int>> subset;
//   vector<int> temp;
//   subSeq(arr, 0, 3, ans, temp, subset);
//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << "{";

//     for (int j = 0; j < subset[i].size(); j++)
//     {
//       cout << subset[i][j];

//       if (j != subset[i].size() - 1)
//         cout << ",";
//     }

//     cout << "} - " << ans[i] << endl;
//   }
//   return 0;
// }

// Target Sum
// #include <iostream>
// using namespace std;

// bool find(int arr[],int index,int size,int target){
//   if(target==0)
//   return 1;

//   if(index==size || target<0)
//   return 0;

//   return find(arr,index+1,size,target) || find(arr,index+1,size,target-arr[index]);

// }

// int main(){
//   int arr[] = {2,4,1,8,7};
//   int target = 19;
//   cout<<find(arr,0,5,target)<<" ";
//   return 0;
// }

// leacture 62
// perfect sum
// #include <iostream>
// using namespace std;

// int subSet(int arr[],int index,int size,int sum){

//   if(index == size)
//   return sum == 0;

//   return subSet(arr,index+1,size,sum) + subSet(arr,index+1,size,sum-arr[index]);
// }

// int main(){
//   int arr[]={2,5,6,1};
//   int sum = 8;
//   cout<<subSet(arr,0,4,sum);
//   return 0;
// }

// target sum with repeatition
#include <iostream>
using namespace std;

int subSum(int arr[], int index, int size, int sum)
{

  if (sum == 0)
    return 1;
  if (sum < 0 || index == size)
    return 0;

  return subSum(arr, index + 1, size, sum) + subSum(arr, index, size, sum - arr[index]);
}

int main()
{
  int arr[] = {2, 3, 4};
  int sum = 6;
  cout << subSum(arr, 0, 3, sum);
  return 0;
}

