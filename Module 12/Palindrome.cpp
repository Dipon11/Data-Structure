#include <bits/stdc++.h>
using namespace std;

class node
{

public:
  int val;
  node *next;
  node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
void insert(node *&head, node *&tail, int val) // 0(N)
{
  node *newNode = new node(val);

  node *temp = head;
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}
bool recursion(node *n, node *&tmp)
{
  if (n == NULL)
    return true;
  bool gg = recursion(n->next, tmp);
  if (n->val != tmp->val)
  {

    return false;
  }
  // cout << n->val << " " << tmp->val << endl;
  tmp = tmp->next;
 
  return gg;
}

void print(node *head) // 0(n)
{
  node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
int main()
{

  node *head = NULL;
  node *tail = NULL;
  while (true)
  {
    int val;
    cin >> val;

    if (val == -1)
      break;
    else
    {
      insert(head, tail, val);
    }
  }

  bool gg = recursion(head, head);
  if (gg == false)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

  return 0;
}
