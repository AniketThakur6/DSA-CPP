#include <iostream>
#include <vector>
using namespace std;
int major_element(vector<int> arr)
{
    int n=arr.size();
    int candidate,count=0;
    // count major element
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            count=1;
            candidate=arr[i];
        }

        else
        {
            if(arr[i]==candidate)
            count++;
            else
            count--;
        }
    }

    //verification
    count=0;
    for(int i=0;i<n;i++)
    if(arr[i]==candidate)
    count++;

    if(count>n/2)
    return candidate;
    else
    return -1;
}
int main()
{
    vector<int> arr={3,3,2,3,1,3,2,2,1,3,3};

    cout<<major_element(arr);
}