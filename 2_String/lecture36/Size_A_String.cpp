#include <iostream>
using namespace std;
int main()
{
    string s; 
    getline(cin,s);
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }

    cout<<size; 
} 