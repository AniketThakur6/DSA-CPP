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

int main()
{
  Node *Head;
  Head = NULL;

  int arr[] = {2, 3, 56, 67, 100};

  // creating linked list
  for (int i = 0; i < 5; i++)
  {
    // adding node at starting
    if (Head == NULL)
    {
      Head = new Node(arr[i]);
    }
    else
    {
      Node *temp; // temp destry automatically becaz it created in static allocation om memory
      temp = new Node(arr[i]);
      temp->next = Head;
      Head = temp;
    }
  }

  // Reading linked list
  Node *temp = Head;
  while (temp) // temp !=Null
  {
    cout << temp->data << " ";
    temp = temp->next;
  } // O/P :- 100 67 56 3 2
}