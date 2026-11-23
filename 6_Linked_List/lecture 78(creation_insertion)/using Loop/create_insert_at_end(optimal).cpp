#include <iostream>
using namespace std;

// this make linked list in same order as array
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

int main()
{

  int arr[] = {2, 4, 6, 8, 10};

  Node *Head, *Tail;
  Head = Tail = NULL;

  for (int i = 0; i < 5; i++)
  {
    if (Head == NULL){ // if ll is already not present
      Head = new Node(arr[i]);
      Tail=Head;
    }  
    else
    {                                // if ll is already present
      Tail->next = new Node(arr[i]); // shortform
      Tail=Tail->next;
    }
  }

  // print value
  Node *temp = Head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}