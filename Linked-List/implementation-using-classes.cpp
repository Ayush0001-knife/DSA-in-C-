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

// collection of nodes
class List
{
      Node *head; // It will point towards the first node
      Node *tail; // It will point towards the last node

public:
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
            Node *newNode = new Node(val);

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

      void print_list()
      {
            Node *temp = head;
            while (temp != NULL)
            {
                  cout << temp->data << " -> ";
                  temp = temp->next;
            }
      }

      void insert(int val, int pos)
      {
            Node *newNode = new Node(val);
            Node *temp = head;

            if (pos == 0)
            {
                  newNode->next = head;
                  head = newNode;
            }
            for (int i = 0; i < pos - 1; i++)
            {
                  if (temp == NULL)
                  {
                        cout << "Invalid Position";
                        return;
                  }
                  temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
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

      void popback()
      {
            if (head == NULL)
            {
                  cout << "List is empty";
                  return;
            }
            else
            {
                  Node *temp = head;
                  while (temp->next != tail)
                  {
                        temp = temp->next;
                  }
                  temp->next = NULL;
                  delete tail;
                  tail = temp;
            }
      }

      void searchItr(int key)
      {
            Node *temp = head;
            int count = 0;
            while (temp != NULL)
            {
                  if (temp->data == key)
                  {
                        cout << "Index : " << count << endl;
                        return;
                  }
                  temp = temp->next;
                  count += 1;
            }
      }

      void SearchRec(Node *temp, int key, int count)
      {
            if (temp == NULL)
            {
                  return;
            }
            if (temp->data == key)
            {
                  cout << "Index : " << count << endl;
                  return;
            }
            count += 1;
            SearchRec(temp->next, key, count);
      }

      void reverseLL()
      {
            Node *curr = head;
            Node *prev = NULL;

            while (curr != NULL)
            {
                  Node *next = curr->next;
                  curr->next = prev;
                  prev = curr;
                  curr = next;
            }
            head = prev;
      }

      void removeNthNode(int n)
      {
            int count = 0;
            Node *current = head;

            while (current != NULL)
            {
                  count++;
                  current = current->next; // Move to the next node
            }
            Node *prev = head;
            for (int i = 1; i < (count - n); i++)
            {
                  prev = prev->next;
            }
            prev->next = prev->next->next;
      }
};

int main()
{
      List l1;

      l1.push_front(10);
      l1.push_front(20);
      l1.push_front(30);
      // l1.print_list();
      // 30->20->10

      l1.push_front(40);
      l1.push_front(50);
      l1.push_front(60);
      // l1.print_list();
      // 30->20->10->40->50->60

      l1.insert(100, 3);
      l1.print_list();

      return 0;
}