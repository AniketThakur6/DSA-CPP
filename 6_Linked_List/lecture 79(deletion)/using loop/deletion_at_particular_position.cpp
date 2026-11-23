#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

Node *CreateLL(int arr[], int index, int size)
{
  if (index == size)
    return NULL;

  Node *temp = new Node(arr[index]);
  temp->next = CreateLL(arr, index + 1, size);
  return temp;
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10};

  Node *Head = CreateLL(arr, 0, 5);

  // deletion at particular position
  int x = 3;
  Node *curr = Head;
  Node *prev = NULL;
  x--;

  // to reach the deletion position
  while(x--){
    prev=curr;
    curr=curr->next;
  }

  prev->next=curr->next;
  delete curr;


  //print value;
  Node *temp = Head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}