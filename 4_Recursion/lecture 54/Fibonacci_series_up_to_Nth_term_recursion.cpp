#include <iostream>
#include <vector>
using namespace std;
static const int MOD = 1000000007;

void solve (int n, vector<int>& fib)
{
    //base case
    if(n==0){
        fib.push_back(0);
        return;}

    if (n == 1){
        fib.push_back(0);
        fib.push_back(1);
        return;}

    solve(n-1,fib);

    
    long long next = (fib[n-1]+fib[n-2])%MOD;
    fib.push_back(next);
}

vector<int> fib(int n){
    vector<int> fib;
    solve(n,fib);
    return fib;
}
int main()
{
    int n;
    cout<<"enter two no: ";
    cin>>n;

    vector<int> i=fib(n); 
    for(int y:i)
    cout<<y<<" ";
    return 0;
}