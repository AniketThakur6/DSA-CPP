#include <iostream>
using namespace std;
void rotateclockwise(string &s)
{
    char c=s[s.size()-1];

    int index=s.size()-2;
    while(index>=0)
    {
        s[index+1]=s[index];

        index--;
    }

    s[0]=c;
}

void rotateanticlock(string &s)
{
    char c=s[0];

    int index=1;
    while(index<s.size())
    {
        s[index-1]=s[index];
        index++;
    }

    s[s.size()-1]=c;
}
int main()
{
    string str1="amazon" , str2="azonam";

    string clkwise=str1 , anticlkwise=str1;

    for(int i=0;i<2;i++)
    rotateclockwise(clkwise);

    if(clkwise==str2)
    {
        cout<<"found"<<endl;
        return 0;
    }

    for(int i=0;i<2;i++)
    rotateanticlock(anticlkwise);

    if(anticlkwise==str2)
    {
        cout<<"found"<<endl;
        return 0;
    }

    cout<<"not found";
    return 0;
}