#include <iostream>
using namespace std;
void lowtoup(string &str,int index)
{
    if(index==-1)
    return ;

    str[index] = 'A' + str[index] - 'a';

    lowtoup(str,index-1);

}
int main()
{
    string str= "aniket";
    lowtoup(str,5);
    cout<<str;
}