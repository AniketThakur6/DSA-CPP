#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr,int x)
{
    static int i=0;

    if(i==arr.size()){
        i=0;
        return -1;
    }

    if(arr[i]==x){
        int ans = i;
        i=0;
        return ans;
    }

    i++;

    return search(arr,x);

}
int main()
{
    vector<int> arr ={2,3,7,3,11,8,12};

    int x = 80;
    cout<<search(arr,x);
}