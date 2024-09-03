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
class myQueue
{

public:
    node *head = NULL;
    node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {

        sz--;
        node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail == NULL;
        }
    }
    int front()
    {
        if (head != NULL && tail != NULL)
        {
            return head->val;
        }
        else
        {
            cout << "Queue is empty" << endl;
        }
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
