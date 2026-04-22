#include <iostream>
using namespace std;
int main()
{
    // char arr[10];
    // cin>>arr;
    // arr[6]='\0';
    // cout<<arr;

    // string s="Anikethakur";
    // cin>>s;
    // cout<<s;

    // string s;
    // getline(cin,s);
    // cout<<s;

    string s="A \"good\" boy";
    cout<<s<<endl;
    cout<<s.size()<<endl;

    string s1="Aniket" , s2="Thakur",s3;
    s3=s1+s2;
    s3=s1.append(s2); // same as s1+s2
    cout<<s3<<endl;

    s.push_back('p');
    s+="p";
    cout<<s<<endl;

}