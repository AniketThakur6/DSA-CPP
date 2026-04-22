#include <iostream>
using namespace std;
void cap(char &a)
{int b=a-'a'+'A';
    a=b;

}

int main()
{
    char a;
    cout<<"enter no: ";
    cin>>a;
    cap(a);
    cout<<endl;
    cout<<a;

}