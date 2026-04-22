#include <iostream>
using namespace std;
// bishop total move;
int bishop(int a,int b)
{
    int count=0;
    count= min(8-a,8-b) + min(8-a,b-1) + min(a-1,b-1) + min(a-1,8-b);
    return count;
}
int main()
{
    int a,b;
    cout<<"enetr bishop place: ";
    cin>>a>>b;
    cout<<"total bishop move in borad: "<<bishop(a,b);
    return 0;
}