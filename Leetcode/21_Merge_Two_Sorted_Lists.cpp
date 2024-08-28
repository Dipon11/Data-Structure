#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
  int val;
  Solution *next;
  Solution(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
void insert_at_tail(Solution *&head, int val)
{
  Solution *newNode = new Solution(val);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Solution *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

void find_duplicates(Solution *head)
{
  Solution *ptr1 = head;
  while (ptr1 != NULL && ptr1->next != NULL)
  {
    Solution *ptr2 = ptr1;
    while (ptr2->next != NULL)
    {
      if (ptr1->val == ptr2->next->val)
      {
        Solution *deleteNode = ptr2->next;
        ptr2->next = ptr2->next->next;
        delete deleteNode;
      }
      else
      {
        ptr2 = ptr2->next;
      }
    }
    ptr1 = ptr1->next;
  }
}
void print_link_list(Solution *head)
{
  Solution *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}
int main()
{
  int val;
  Solution *head = NULL;
  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, val);
  }

  find_duplicates(head);
  print_link_list(head);
  return 0;
}
