#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int major_element(vector<int> &arr) // LC
{
    int n=arr.size(); // time complexity = O(nlog(n))
                      // sapce complexity =O(1)

    sort(arr.begin(),arr.end());

    int count=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            if(count>=n/2)
            return arr[i];
        }
        else
        count=0;
    }

    return -1;
}
int main()
{
    vector<int> arr={3,3,2,3,1,3,2,2,1,3,3};

    cout<<major_element(arr);
}