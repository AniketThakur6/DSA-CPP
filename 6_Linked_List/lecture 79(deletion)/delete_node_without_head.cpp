#include <iostream>
using namespace std;

// gfg

class Node{
  public:
  int data;
  Node *next;

  Node(int val){
    data=val;
    next=NULL;
  }
};

Node* CreateLL(int arr[],int index,int size){
  if(index==size)
  return NULL;

  Node *temp= new Node(arr[index]);
  temp->next= CreateLL(arr,index+1,size);
  return temp;
};

void deleteNode(Node* curr){
  Node *temp=curr->next;
  curr->data = temp->data;
  curr->next = temp->next;
  delete temp;
};

int main(){
  int arr[] = {2,4,6,8,10};

  Node *Head = CreateLL(arr,0,5);

  Node *temp= Head;
  int x=2;
  x--;
  while(x--)
  temp=temp->next;
  
  //delete node without head pointer 
  deleteNode(temp);

  // print 
  temp=Head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}