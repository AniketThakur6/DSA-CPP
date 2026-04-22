#include <iostream>
using namespace std;
// a->b , b->c, c->a
void exchange(int &a,int &b,int &c)
{
    int x,y;
    x=a;
    a=c;
    y=b;
    c=b;
    b=x;
}


int main()
{
int a,b,c;
cout<<"enter 3 no : ";
cin>>a>>b>>c;
exchange(a,b,c);
cout<<endl;
cout<<a<<" "<<b<<" "<<c;
}