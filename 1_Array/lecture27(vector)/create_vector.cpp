#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;
int main()
{
    // // create vector
    // vector<int> v;
    // // v1(size of vector,intialization value for whole vector)
    // vector<int> v1(5,1);
    // cout<<"size : "<<v.size()<<endl;
    // cout<<"capacity : "<<v.capacity()<<endl;
    // // input value in vector
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // cout<<"size : "<<v.size()<<endl;
    // cout<<"capacity : "<<v.capacity()<<endl;
    // // remove value from vector
    // v.pop_back();
    // cout<<"size : "<<v.size()<<endl;
    // cout<<"capacity : "<<v.capacity()<<endl;
    // // update
    // v[1]=1;
    // cout<<"size v1 : "<<v1.size()<<endl;
    // cout<<"capacity v1 : "<<v1.capacity()<<endl;
    // v1.push_back(4);
    // cout<<"size v1 : "<<v1.size()<<endl;
    // cout<<"capacity v1 : "<<v1.capacity()<<endl;
    // vector<int> v2={1,2,3,4,5};
    // cout<<"size v2 : "<<v2.size()<<endl;
    // cout<<"capacity v2 : "<<v2.capacity()<<endl;

    // vector<int>v3;
    // v3.push_back(4);
    // v3.push_back(14);
    // v3.push_back(24);
    // v3.push_back(34);
    // v3.push_back(44);
    // v3.push_back(54);
    // v3.push_back(64);
    // cout<<"size v3 : "<<v3.size()<<endl;
    // cout<<"capacity v3 : "<<v3.capacity()<<endl;
    // v3.pop_back();
    // v3.erase(v3.begin()+1);
    // cout<<"size v3 : "<<v3.size()<<endl;
    // cout<<"capacity v3 : "<<v3.capacity()<<endl;
    // for(int i=0;i<v3.size();i++)
    // cout<<" "<<v3[i];
    // cout<<endl;
    // //v3.insert(were you want to insert value , value to insert)
    // v3.insert(v3.begin()+1,50);
    // for(int i=0;i<v3.size();i++)
    // cout<<" "<<v3[i];
    // cout<<endl;
    // //clear only delete element from vector it don't delete vector
    // v3.clear();
    // cout<<"size v3 : "<<v3.size()<<endl;
    // cout<<"capacity v3 : "<<v3.capacity()<<endl;

    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(42);
    // arr.push_back(25);
    // arr.push_back(67);
    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;

    // // copy one vector to other vector
    // vector<int>a;
    // a=arr;
    // cout<<a.size()<<endl;

    // //print array
    // for(auto i=arr.begin();i!=arr.end();i++)
    // cout<<*i<<" ";

    // cout<<endl;
    // for(auto i: a)
    // cout<<i<<" ";

    vector<int>s;
    s.push_back(3245);
    s.push_back(62);
    s.push_back(726);
    s.push_back(34);
    s.push_back(89);

    // sort in increasing order
    sort(s.begin(),s.end());
    for(auto i: s)
    cout<<i<<" ";
    cout<<endl;
    // // sort in decreasing order
    // sort(s.begin(),s.end(),greater<int>());
    // for(auto i: s)
    // cout<<i<<" ";
    // cout<<endl;
    // // sort in decreasing order
    // sort(s.rbegin(),s.rend());
    // for(auto i: s)
    // cout<<i<<" ";
    // cout<<endl;

    // binary search
    cout<<binary_search(s.begin(),s.end(),726)<<endl;
    // return index of search element
    cout<<find(s.begin(),s.end(),89)-s.end()<<endl;
    auto i=find(s.begin(),s.end(),89);

    int coun = count (s.begin(),s.end(),726);







}