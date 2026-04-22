#include <iostream>
using namespace std;
int trailingzero(int n)
{
    int count=0;
    while(n>=5)
    {
        count+=n/5;
        n/=5;   
    }
    return count;
}

int main()
{
    int num;
    cout<<"enter no: ";
    cin>>num;
    cout<<"no of zero: "<<trailingzero(num);

}