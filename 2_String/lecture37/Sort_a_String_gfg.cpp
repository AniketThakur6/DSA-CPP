#include <iostream>
using namespace std;
void sort_string(string &s) // gfg
{
    // bubble sort
    int n=s.size();
    // for(int i=0;i<n;i++)
    // {
    //     int swapped=0;
    //     for(int j=n-1;j>i;j--)
    //     if(s[j]<s[j-1])
    //     {
    //         swap(s[j-1],s[j]);
    //         swapped=1;
    //     }

    //     if(swapped==0)
    //     break;
    // }

    //insertion sort
    // for(int i=n-2;i>=0;i--)
    // {
    //     for(int j=i;j<n-1;j++)
    //     {
    //         if(s[j]>s[j+1])
    //         swap(s[j],s[j+1]);

    //         else
    //         break;
    //     }
    // }

    // selection sort
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        if(s[index]>s[j])
        index=j;

        swap(s[index],s[i]);
    }

}
int main()
{
    string s="eabcabd";

    sort_string(s);
     
    cout<<"Sorted String : "<<s;

    return 0;
}