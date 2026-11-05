#include <iostream>
using namespace std;

class Node
{
public:
      int data;
      Node *next;
      Node *prev;

      Node(int val)
      {
            data = val;
            next = NULL;
            prev = NULL;
      }
};

class Doubly_List
{
public:
      Node *head;
      Node *tail;

      Doubly_List()
      {
            head = NULL;
            tail = NULL;
      }
      ~Doubly_List()
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

            if (head == NULL)
            {
                  head = tail = newNode;
            }
            else
            {
                  newNode->next = head;
                  head->prev = newNode;
                  head = newNode;
            }
      }

      void pop_front(int val)
      {
            if (head == NULL)
            {
                  cout << "List is empty" << endl;
                  return;
            }
            else
            {
                  Node *temp = head;
                  head = head->next;
                  head->prev = NULL;
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
            cout << temp->data << " <=> ";
            temp = temp->next;
      }
      cout << "NULL" << endl;
}

int main()
{
      Doubly_List dl1;

      dl1.push_front(4);
      dl1.push_front(3);
      dl1.push_front(2);
      dl1.push_front(1);

      print_list(dl1.head);

      return 0;
}