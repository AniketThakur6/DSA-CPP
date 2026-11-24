#include <iostream>
using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;

  ListNode(int data)
  {
    val = data;
    next = NULL;
  }
};

ListNode *CreateLL(int arr[], int index, int size)
{
  if (index == size)
    return NULL;

  ListNode *temp = new ListNode(arr[index]);
  temp->next = CreateLL(arr, index + 1, size);

  return temp;
}

ListNode *deleteNodeFromLast(ListNode *head, int x)
{
  int count = 0;
  ListNode *temp = head;

  while (temp)
  {
    count++;
    temp = temp->next;
  }

  // delete node no from start
  count -= x;

  // edge case where deleting node it starting node
  if (count == 0)
  {
    temp = head;
    head = head->next;
    delete temp;
    return head;
  }
  else
  { 
    // for rest of case btw,last
    ListNode *curr = head, *prev = NULL;
    while (count--)
    {
      prev = curr;
      curr = curr->next;
    }

    prev->next = curr->next;
    delete curr;

    return head;
  }
}

int main()
{

  int arr[] = {2, 4, 6, 8, 10};

  ListNode *head = CreateLL(arr, 0, 5);

  // remove Nth node from end
  int x = 2;
  head=deleteNodeFromLast(head,x);
  // print
  ListNode *temp = head;
  while (temp)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}