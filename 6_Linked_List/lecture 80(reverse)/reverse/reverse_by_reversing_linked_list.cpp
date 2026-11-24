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

ListNode *CreateLL(int arr[], int index, int size, ListNode *prev)
{
  if (index == size)
    return prev;

  ListNode *temp = new ListNode(arr[index]);
  temp->next = prev;
  return CreateLL(arr, index + 1, size, temp);
}

ListNode *ReverseLL(ListNode *head)
{

  ListNode *curr = head, *prev = NULL, *fut = NULL;

  while (curr)
  {
    fut = curr->next;
    curr->next = prev;
    prev = curr;
    curr = fut;
  }

  return prev;
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10};

  ListNode *head = NULL;
  head = CreateLL(arr, 0, 5, head);

  // print value
  ListNode *temp = head;
  cout << "Before: ";
  while (temp)
  {
    cout << temp->val << " " << temp << endl;
    temp = temp->next;
  }

  // reverse a ll
  head = ReverseLL(head);

  // print value
  temp = head;
  cout << "\nAfter : ";
  while (temp)
  {
    cout << temp->val << " " << temp << endl;
    temp = temp->next;
  }
}