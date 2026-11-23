#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;

  Node(int val){
    data=val;
    next=NULL;
  }
};

int main(){
  Node A1(12); // static allocation
  Node *Head;
  Head = new Node(28); // dynamic allocation
  // cout<<(*Head)->data<<endl; // you can write in this way
  cout<<"Data: "<<Head->data<<endl;
  cout<<"Next: "<<Head->next<<endl; // 0 becauz no next pointer NUll
}