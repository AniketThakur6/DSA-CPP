#include <iostream>
#include <vector>
using namespace std;
int firstMissingPositive(vector<int>& nums)
{
    // int n=arr.size();

    // int ele=0;
    // for(int i=0;i<n;i++)
    // ele=max(ele,arr[i]);

    // for(int i=1;i<=ele;i++)
    // {
    //     bool find=0;
    //     for(int j=0;j<n;j++)
    //     {
    //         if(arr[j]==i)
    //         {
    //             find=1;
    //         }
    //     }

    //     if(find==0)
    //     return i;
    // }
    // return ele+1;

    int n = nums.size();
    for (int i = 0; i < n; ++i) // cyclic sorting
    {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
        swap(nums[i], nums[nums[i] - 1]);

    }

    for (int i = 0; i < n; ++i) {
        if (nums[i] != i + 1) return i + 1;
    }

    return n + 1;

}
int main()
{
    vector<int> arr={1,2,0};

    cout<<firstMissingPositive(arr);

    return 0;
}