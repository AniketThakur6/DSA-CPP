#include <iostream>
using namespace std;


//using one parameter
void print(int num,int n=1){
    
    if(n == 10)
    {
        cout<<10*num<<" ";
        return ;
        
    }

    cout<<n*num<<" ";
    print(num,n+1);
}

int main()
{
    int n;
    cout<<"enter a no to print table: ";
    cin>>n;

    if(n<1)
    {
        cout<<"lol";
        return 0;
    }

    print(n);

    return 0;

}