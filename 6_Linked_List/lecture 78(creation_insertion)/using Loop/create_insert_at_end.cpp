#include <iostream>
using namespace std;

// this make linked list in same order as array
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

  int arr[]={2,4,6,8,10};

  Node *Head;
  Head=NULL;

  for(int i=0;i<5;i++){
    if(Head==NULL) //if ll is already not present 
    Head=new Node(arr[i]);
    else{ // if ll is already present
      Node *Tail=Head;

      while(Tail->next != NULL) // find the end of Linked List
      Tail=Tail->next;

      // Node *temp=new Node(arr[i]);
      // Tail->next=temp;

      Tail->next=new Node(arr[i]); // shortform
    }
  }

  Node *temp=Head;

  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }

}