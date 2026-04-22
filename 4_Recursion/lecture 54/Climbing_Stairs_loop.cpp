#include <iostream> 
using namespace std;  // leetcode

int main()
{
    int n;
    cout<<"Enter a stair no: ";
    cin>>n;

    // stair for n=0, O/P=1 And n=1, O/P=1
 
    if(n==0 || n==1)
    {
        cout<<1;
        return 0;
    }
    
    int i=1, j=1;
    int next=0;
    for(int k=2;k<=n;k++)
    {
        next = i+j;
        i=j;
        j=next;
    }

    cout<<next;

}