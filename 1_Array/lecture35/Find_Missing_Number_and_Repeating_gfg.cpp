#include <iostream>
#include <vector>
using namespace std;
int repeat(vector<int> arr)
{
    int n=arr.size();   // time complexity = O(n^2)
                        // space complexity = O(1)
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            count++;
        }
        if(count>=2)
        return i;
    }
    return 0;
}

int missing(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int count=0;
        i+=1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            count++;
        }
        if(count==0)
        return i;
    }
    return 1;
    
}
int main()
{
    vector<int> arr={4,3,2,1,2,7,6};
    int n=arr.size();

    int r=repeat(arr);
    int m=missing(arr);
    cout<<"Repeated no: "<<r<<endl;
    cout<<"Missing no: "<<m<<endl;
}