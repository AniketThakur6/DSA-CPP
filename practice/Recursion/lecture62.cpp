// permutation
// distinct number
// #include <iostream>
// #include <vector>
// using namespace std;

// void permutation(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, vector<int> &visited)
// {
//   // base case
//   if (visited.size() == temp.size())
//   {
//     ans.push_back(temp);
//     return;
//   }

//   for (int i = 0; i < visited.size(); i++)
//   {
//     if (visited[i] == 0)
//     {
//       visited[i] = 1;
//       temp.push_back(arr[i]);
//       permutation(arr, ans, temp, visited);
//       temp.pop_back();
//       visited[i] = 0;
//     }
//   }
// }

// void permut(vector<int> &arr, int index, vector<vector<int>> &ans)
// {
//   if (index == arr.size())
//   {
//     ans.push_back(arr);
//     return;
//   }

//   for (int i = index; i < arr.size(); i++)
//   {
//     swap(arr[i], arr[index]);
//     permut(arr, index + 1, ans);
//     swap(arr[i], arr[index]);
//   }
// }

// int main()
// {
//   vector<int> arr = {1, 2, 3};
//   vector<vector<int>> ans;
//   vector<int> temp;
//   vector<int> visited(arr.size(), 0);
//   // permutation(arr, ans, temp, visited);
//   permut(arr,0,ans);
//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << "[" << " ";
//     for (int j = 0; j < ans[0].size(); j++)
//       cout << ans[i][j] << " ";
//     cout << "]" << endl;
//   }
// }

// element can repeat in  array -10<=nums<=10;
// #include <iostream>
// #include <vector>
// using namespace std;

// void permut(vector<int> &arr, int index, vector<vector<int>> &ans)
// {
//   if(index==arr.size()){
//     ans.push_back(arr);
//     return;
//   }

//   vector<bool> use(21, 0);
//   for (int i = index; i < arr.size(); i++)
//   {
//     if (use[arr[i] + 10] == 0)
//     {
//       swap(arr[i], arr[index]);
//       permut(arr, index+1, ans);
//       swap(arr[i], arr[index]);
//       use[arr[i] + 10] = 1;
//     }
//   }
// }

// int main()
// {
//   vector<int> arr = {1, 1, 2};
//   vector<vector<int>> ans;
//   permut(arr, 0, ans);
//   for(int val:arr)
//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << "[" << " ";
//     for (int j = 0; j < ans[0].size(); j++)
//       cout << ans[i][j] << " ";
//     cout << "]" << endl;
//   }
//   return 0;
// }

// Ways to Sum N
#include <iostream>
#include <vector>
using namespace std;

int waySum(vector<int> &arr, int sum)
{
  if (sum == 0)
    return 1;
  if (sum < 0)
    return 0;

  int ans = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    ans += waySum(arr, sum - arr[i]);
  }
  return ans;
}

int main()
{
  vector<int> arr = {1,2,3};
  int sum = 4;
  cout << waySum(arr, sum);
  return 0;
}