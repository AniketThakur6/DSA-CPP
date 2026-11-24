#include <iostream>
#include <vector>
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

void ReverseLL(ListNode* head){
  vector<int> ans;
  ListNode* temp=head;

  while(temp){
    ans.push_back(temp->val);
    temp=temp->next;
  }

  int i= ans.size()-1;
  temp=head;

  while(temp){
    temp->val=ans[i];
    i--;
    temp=temp->next;
  }

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
    cout << temp->val << " ";
    temp = temp->next;
  }

  // reverse a ll
  ReverseLL(head);


  // print value
  temp = head;
  cout << "\nAfter : ";
  while (temp)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}