// A frog jumps either 1, 2, or 3 steps to go to the
// top. In how many ways can it reach the top of 
// nth step.

#include <iostream>
using namespace std;
int Countways(int n)
{
    if(n==0)
    return 1;
    else if(n<=2)
    return n;

    return Countways(n-1)+Countways(n-2)+Countways(n-3);
}
int main()
{
    int n;
    cout<<"enter step no: ";
    cin>>n;

    cout<<"Ways no is: "<<Countways(n);
    return 0;
}