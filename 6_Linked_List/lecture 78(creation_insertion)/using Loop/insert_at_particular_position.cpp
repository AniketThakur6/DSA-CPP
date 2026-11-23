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
  int arr[] = {2, 4, 6, 8, 10};

  Node *Head, *Tail;
  Head = Tail = NULL;

  // create LL insertion at end
  for (int i = 0; i < 5; i++)
  {
    if (Head == NULL)
    {
      Head = new Node(arr[i]);
      Tail = Head;
    }
    else
    {
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  // before print value
  Node *temp = Head;
  cout << "Before Insertion: ";
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  // insertion at particular position
  int position = 5;
  int value = 1200;

  temp = Head;
  // position--; //for 0 based indexing do incr temp to position-1 & insertion position = position-1 
  position-=2; //for 1 based indexing do incr temp to position-2 & insertion position = position-2 

  while (position--)
    temp = temp->next;

  Node *temp2 = new Node(value); 
  temp2->next = temp->next; 
  temp->next = temp2;

  // print value after insertion
  temp = Head;
  cout << "\nAfter Insertion: ";
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}