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

Node *CreateLL(int arr[], int index, int size, Node *prev)
{

  if (index == size)
    return prev;

  Node *temp = new Node(arr[index]);
  temp->next = prev;
  return CreateLL(arr, index + 1, size, temp);
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10};

  Node *Head = NULL;
  Head = CreateLL(arr, 0, 2, Head);

  // deletion at end
  if (Head != NULL)
  {
    if (Head->next == NULL)
    {
      delete Head;
      Head = NULL;
    }
    else
    {
      Node *curr = Head;
      Node *prev = NULL;

      while (curr->next != NULL)
      {
        prev = curr;
        curr = curr->next;
      }

      prev->next = curr->next;
      // prev->next=NULL; // shortform
      delete curr;
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