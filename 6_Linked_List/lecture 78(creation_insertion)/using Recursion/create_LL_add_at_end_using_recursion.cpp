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

Node* CreateLinkedList(int arr[],int index,int size){

  //base case
  if(index==size)
  return NULL;

  Node *temp;
  temp=new Node(arr[index]); // create node with arr value
  temp->next=CreateLinkedList(arr,index+1,size); //it return address of next node address to current node
  return temp; // this is to return current node address to previous node 
}

int main(){

  int arr[] = {2,4,6,8,10};

  Node *Head=CreateLinkedList(arr,0,5);

  //print value
  Node *temp=Head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }

}