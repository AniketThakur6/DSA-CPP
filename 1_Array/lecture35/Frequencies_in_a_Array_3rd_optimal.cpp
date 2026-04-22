#include <iostream>
#include <vector>
using namespace std;
void frequency(vector<int> &arr) // time complexity = O(n)
                                 // space complexity =O(1)
{
    int n=arr.size();

    for(int i=0;i<n;i++) //decreasing value of every element by 1
    arr[i]--;

    for(int i=0;i<n;i++)
    arr[arr[i]%n]+=n;    //storing frequency of number in same array   

}
int main()
{
    vector<int> arr={3,2,5,3,1,2,3,7};

    frequency(arr);

    int n=arr.size();
    for(int i=0;i<n;i++)
    cout<<i+1<<" : "<<arr[i]/n<<endl;
}