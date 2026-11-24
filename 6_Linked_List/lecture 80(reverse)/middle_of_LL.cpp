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

ListNode *MiddleLL(ListNode *head)
{
  int count = 0;
  ListNode *temp = head;

  while (temp)
  {
    count++;
    temp = temp->next;
  }

  count /= 2;
  temp = head;

  while (count--)
    temp = temp->next;

  return temp;
}

int main()
{

  int arr[] = {2, 4, 6, 8, 10};

  ListNode *head = CreateLL(arr, 0, 5);

  // print
  ListNode *temp = head;
  while (temp)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }

  temp = MiddleLL(head);
  cout << "\nMiddle of Linked List: " << temp->val;
}