#include <iostream>
#include <vector>
using namespace std;
int major_element(vector<int> arr) // lc
{
    int n=arr.size();// time complexity = O(n^2)
                     // space complexity =O(1)

    int count=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
                count++;
                if(count>n/2)
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr={3,3,2,3,1,3,2,2,1,3,3};

    cout<<major_element(arr);

}
