#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> factorial(int n)
{
    vector<int> ans(1,1);

    while(n > 1)
    {
        int carry=0,result=0,size=ans.size();

        for(int i=0;i<size;i++)
        {
            result=ans[i]*n+carry;
            ans[i]=result%10;
            carry=result/10;
        }

        while(carry)
        {
            ans.push_back(carry%10);
            carry/=10;
        }

        n--;
    }

    reverse(ans.begin(),ans.end());

    return ans;
}

int main()
{
    int n=999;
    vector<int> ans=factorial(n);

    for(int i:ans)
    cout<<i;
}