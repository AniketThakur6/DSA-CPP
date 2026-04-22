#include <iostream>
using namespace std;
int cubeRoot(int n) {
        
    if(n<2)
    return n;
    
    
    int start=0,end=n,mid,ans=1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        
        int cube=mid*mid*mid;
        if(cube==n)
        {
            return mid;
        }
        else if(cube<n)
        {
            ans=mid;
            start=mid+1;
        }
        
        else 
        end=mid-1;
        
    }
    
    return ans;
}
int main()
{
    cout<<cubeRoot(18486);
}