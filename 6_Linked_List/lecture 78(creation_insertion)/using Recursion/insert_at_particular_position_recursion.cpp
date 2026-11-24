// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//   int data;
//   Node *next;

//   Node(int val)
//   {
//     data = val;
//     next = NULL;
//   }
// };

// // insertion at end
// Node *CreateLL(int arr[], int index, int size)
// {
//   // base case
//   if (index == size)
//     return NULL;

//   Node *temp = new Node(arr[index]);
//   temp->next = CreateLL(arr, index + 1, size);
//   return temp;
// }

// int main()
// {

//   int arr[] = {2, 4, 6, 8, 10};
//   Node *Head = NULL;

//   Head = CreateLL(arr, 0, 5);

//   // print LL before insertion
//   Node *temp = Head;
//   cout << "Before insertion: ";
//   while (temp)
//   {
//     cout << temp->data << " ";
//     temp = temp->next;
//   }

//   // Insertion at particular position
//   int value = 100;
//   int position = 4;/*  */

//   temp = Head;
//   position--;

//   while (position--)
//     temp = temp->next;

//   Node *temp2 = new Node(value);
//   temp2->next = temp->next;
//   temp->next = temp2;

//   // print value after insertion
//   temp = Head;
//   cout << "\nAfter Insertion: ";
//   while (temp)
//   {
//     cout << temp->data << " ";
//     temp = temp->next;
//   }
// }

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

// Create linked list using recursion
Node *CreateLL(int arr[], int index, int size)
{
  if (index == size)
    return NULL;

  Node *temp = new Node(arr[index]);

  temp->next = CreateLL(arr, index + 1, size);

  return temp;
}

// Recursive insertion
Node *InsertAtPosition(Node *Head, int value, int position)
{
  if (position == 1) // 1 based indexing
  // if(position == 0 ) // 0 based indexing
  {
    Node *temp = new Node(value);
    temp->next = Head;
    return temp;
  }

  if (Head == NULL) // head is null edge case
    return NULL;

  Head->next = InsertAtPosition(Head->next, value, position - 1);
  return Head;
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10};

  Node *Head = CreateLL(arr, 0, 5);

  cout << "Before insertion: ";

  Node *temp = Head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  int value = 100;
  int position = 4;

  Head = InsertAtPosition(Head, value, position);

  cout << "\nAfter insertion: ";

  temp = Head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}