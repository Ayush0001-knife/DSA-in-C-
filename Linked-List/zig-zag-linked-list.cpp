#include <iostream>
using namespace std;

// By using this class we can create many Nodes but we want to create collection of Nodes which is called Linked List.
class Node
{
public:
      int data;   // Data part of a node
      Node *next; // Address part of a node

      Node(int val) // To create a node we will recieve a value
      {
            data = val;
            next = NULL;
      }

      ~Node()
      {
            if (next != NULL)
            {
                  delete next;
                  next = NULL;
            }
      }
};

class List
{
public:
      Node *head; // It will point towards the first node
      Node *tail; // It will point towards the last node

      List()
      {
            head = NULL;
            tail = NULL;
      }

      ~List()
      {
            if (head != NULL)
            {
                  delete head;
                  head = NULL;
            }
      }

      void push_front(int val)
      {
            Node *newNode = new Node(val); // dynamic memory allocation
            // Node *newNode(val);            // static memory allocation (We do not use this because when exiting this function the newNode will be deleted)

            if (head == NULL)
            {
                  head = tail = newNode;
            }
            else
            {
                  newNode->next = head;
                  head = newNode;
            }
      }

      void push_back(int val)
      {
            Node *newNode = new Node(val); // dynamic memory allocation
            // Node *newNode(val);            // static memory allocation (We do not use this because when exiting this function the newNode will be deleted)

            if (head == NULL)
            {
                  head = tail = newNode;
                  tail->next = NULL;
            }
            else
            {
                  tail->next = newNode;
                  tail = newNode;
            }
      }

      void popFront()
      {
            if (head == NULL)
            {
                  cout << "List is empty";
                  return;
            }
            else
            {
                  Node *temp = head;
                  head = head->next;
                  temp->next = NULL;
                  delete temp;
            }
      }
};

void print_list(Node *head)
{
      Node *temp = head;
      while (temp != NULL)
      {
            cout << temp->data << " -> ";
            temp = temp->next;
      }
      cout << "NULL" << endl;
}

Node *splitAtMid(Node *head)
{
      Node *slow = head;
      Node *fast = head;
      Node *prev = NULL;

      while (fast != NULL || fast->next != NULL)
      {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
      }

      if (prev != NULL)
      {
            prev->next = NULL;
      }
      return slow;
}

Node *zigZag(Node *head, Node *tail)
{
      Node *rightHead = splitAtMid(head);
      Node *temp = rightHead;
      rightHead = tail;
      tail = rightHead;

      List ans;

      Node *ptr1 = head;
      Node *ptr2 = rightHead;

      while (ptr1->next != NULL || ptr2->next != NULL)
      {
            ans.push_back(ptr1->data);
            ans.push_back(ptr2->data);

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
      }
      if (ptr1->next == NULL && ptr2->next != NULL)
      {
            while (ptr2->next != NULL)
            {
                  ans.push_back(ptr2->data);
            }
      }
      if (ptr2->next == NULL && ptr1->next != NULL)
      {
            while (ptr1->next != NULL)
            {
                  ans.push_back(ptr1->data);
            }
      }

      return ans.head;
}

int main()
{

      List ll;

      ll.push_front(1);
      ll.push_front(2);
      ll.push_front(3);
      ll.push_front(4);
      ll.push_front(5); // List: 5 -> 4 -> 3 -> 2 -> 1 -> NULL

      print_list(zigZag(ll.head, ll.tail));

      return 0;
}