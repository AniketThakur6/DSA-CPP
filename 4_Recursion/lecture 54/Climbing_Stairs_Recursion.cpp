#include <iostream>
using namespace std;   //leetcode

int Climbstairs(int n)
{
    if(n<=1)
    return 1;

    return Climbstairs(n-1)+Climbstairs(n-2);
}

int main()
{
    int n=5;
    cout<<"enter a step number: ";
    cin>>n;

    // A Person can step 1 or 2 step at a time to reach

    cout<<"total no of ways to climb "<<n<<"using 1 and 2  step: "<<Climbstairs(n);

    return 0;


}