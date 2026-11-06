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

      while (fast->next != NULL && fast->next->next != NULL)
      {
            slow = slow->next;
            fast = fast->next->next;
      }

      Node *rightHead = slow->next;
      slow->next = NULL;

      return rightHead;
}

Node *reverseLL(Node *rightHead)
{
      Node *curr = rightHead;
      Node *prev = NULL;
      Node *next = NULL;

      while (curr != NULL)
      {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
      }
      return prev;
}

// Node *zigZag(Node *head)
// {
//       Node *rightHead = splitAtMid(head);

//       Node *finalRightHead = reverseLL(rightHead);

//       List ans;

//       Node *ptr1 = head;
//       Node *ptr2 = finalRightHead;

//       while (ptr1 != NULL || ptr2 != NULL)
//       {
//             if (ptr1 != NULL)
//             {
//                   ans.push_back(ptr1->data);
//                   ptr1 = ptr1->next;
//             }
//             if (ptr2 != NULL)
//             {
//                   ans.push_back(ptr2->data);
//                   ptr2 = ptr2->next;
//             }
//       }

//       print_list(ans.head);
//       return ans.head;
// }

void zigZag(Node *head)
{
      Node *rightHead = splitAtMid(head);
      Node *ptr1 = head;
      Node *ptr2 = reverseLL(rightHead);

      while (ptr2 != NULL)
      {
            Node *next1 = ptr1->next;
            Node *next2 = ptr2->next;

            ptr1->next = ptr2;
            ptr2->next = next1;

            ptr1 = next1;
            ptr2 = next2;
      }
}

int main()
{

      List ll;

      ll.push_back(1);
      ll.push_back(2);
      ll.push_back(3);
      ll.push_back(4);
      ll.push_back(5);

      zigZag(ll.head);
      print_list(ll.head);

      return 0;
}