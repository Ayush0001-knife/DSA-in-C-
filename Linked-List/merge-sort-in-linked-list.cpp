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
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
      }

      if (prev != NULL)
      {
            prev->next = NULL; // split at Middle
      }
      return slow; // slow = rightHead
}

Node *merge(Node *leftHead, Node *rightHead)
{
      List Ans;

      Node *i = leftHead;
      Node *j = rightHead;

      while (i != NULL && j != NULL)
      {
            if (i->data < j->data)
            {
                  Ans.push_back(i->data);
                  i = i->next;
            }
            else
            {
                  Ans.push_back(j->data);
                  j = j->next;
            }
      }

      while (i != NULL)
      {
            Ans.push_back(i->data);
            i = i->next;
      }
      while (j != NULL)
      {
            Ans.push_back(j->data);
            j = j->next;
      }

      return Ans.head;
}

Node *MergeSort(Node *head)
{

      if (head == NULL || head->next == NULL)
      {
            return head;
      }

      Node *rightHead = splitAtMid(head);

      Node *leftHead = MergeSort(head);             // left halve
      Node *rightHeadSorted = MergeSort(rightHead); // right halve

      return merge(leftHead, rightHeadSorted);
}

int main()
{

      List ll;

      ll.push_front(1);
      ll.push_front(2);
      ll.push_front(3);
      ll.push_front(4);
      ll.push_front(5); // List: 5 -> 4 -> 3 -> 2 -> 1 -> NULL

      print_list(ll.head);
      return 0;
}