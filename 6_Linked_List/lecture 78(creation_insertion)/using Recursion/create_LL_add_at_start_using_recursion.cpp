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

Node* CreateLL(int arr[],int index,int size,Node *prev){

  //base case
  if(index == size)
  return prev;

  Node *temp=new Node(arr[index]);
  temp->next=prev;
  return CreateLL(arr,index+1,size,temp);

}

int main(){

  int arr[] = {2,4,5,6,10};

  Node *Head=NULL;

  Head=CreateLL(arr,0,5,Head); // head becuz head value is NULL

  //print 
  Node *temp=Head;
  while(temp->next!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }

}