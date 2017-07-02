#include <iostream>

using namespace std;

class Node
{
	public :
	
	int data;
	Node *next; 
};

class LinkedList
{
	Node *head;
	
	public:

	LinkedList()
	{
		head = NULL;
	}

	Node *createNode(int data)
	{
		Node *nn = new Node;
		nn->data = data;
		nn->next = NULL;
		return nn;	
	}

	//////////////////////////////////////////////////////////////////////

	void addAtBeginning(int data)
	{
		Node *nn = createNode(data);

		if (head == NULL)
			head = nn;
		else
		{
			nn->next = head;
			head = nn;
		}
	}

	void addAtEnd(int data)
	{
		Node *nn = createNode(data);

		if (head == NULL)
			head = nn;
		else
		{
			Node *current = head;

			while (current->next != NULL)
				current = current->next;

			current->next = nn;
		}
	}

	void addAtPosition(int data, int position)
	{
		Node *nn = createNode(data);

		if (position == 1)
		{
			nn->next = head;
			head = nn;
		}
		else
		{
			int pos = 1;
			Node *current = head;

			while (current != NULL && pos < (position - 1))
			{
				current = current->next;
				pos++;
			}

			if (current == NULL)
				cout << "The entered position does not exist" << endl;
			else
			{
				nn->next = current->next;
				current->next = nn;
			}
		}
	}

	//////////////////////////////////////////////////////////////////////

	void deleteAtBeginning()
	{
		if (head == NULL)
			return;
		else
		{
			Node *temp = head;
			head = head->next;
			delete temp;
			temp = NULL;
		}
	}

	void deleteAtEnd()
	{
		if (head == NULL)
			return;
		else if (head->next == NULL)
		{
			delete head;
			head = NULL;
		}
		else
		{
			Node *current = head;

			while (current->next->next != NULL)
				current = current->next;

			Node *temp = current->next;
			current->next = NULL;
			delete temp;
			temp = NULL;
		}
	}

	void deleteAtPosition(int position)
	{
		if (head == NULL)
			return;
		else if (position == 1)
		{
			Node *temp = head;
			head = head->next;
			delete temp;
			temp = NULL;
		}
		else
		{
			Node *current = head;
			int pos = 1;

			while (current != NULL && pos < (position - 1))
			{
				current = current->next;
				pos++;
			}

			Node *temp = current->next;
			current->next = current->next->next;
			delete temp;
			temp = NULL;
		}
	}

	//////////////////////////////////////////////////////////////////////

	void print()
	{
		cout << "Linked List : ";
		if (head == NULL)
			cout << "Empty";
		else
		{
			Node *current = head;

			while (current != NULL)
			{
				cout << current->data << " ";
				current = current->next;
			}
		}
		cout << endl;
	}
};

int main()
{
	LinkedList l;
	int choice, data, position;

	cout << "1. Add at beginning" << endl 
		 << "2. Add at end" << endl 
		 << "3. Add at position" << endl
		 << "4. Delete at beginning" << endl 
		 << "5. Delete at end" << endl 
		 << "6. Delete at position" << endl
		 << "7. Exit" << endl;

	while (1)
	{
		cout << endl << "Enter choice : ";
		cin >> choice;

		switch(choice)
		{
			case(1):
				cout << "Enter data : ";
				cin >> data;
				l.addAtBeginning(data);
				l.print();
				break;

			case(2):
				cout << "Enter data : ";
				cin >> data;
				l.addAtEnd(data);
				l.print();
				break;

			case(3):
				cout << "Enter data and position (Starts at 1) : ";
				cin >> data >> position;
				l.addAtPosition(data, position);
				l.print();
				break;

			case(4):
				l.deleteAtBeginning();
				l.print();
				break;

			case(5):
				l.deleteAtEnd();
				l.print();
				break;

			case(6):
				cout << "Enter position (Starts at 1) : ";
				cin >> position;
				l.deleteAtPosition(position);
				l.print();
				break;

			case(7):
				cout << "Exiting..." << endl;
				exit(1);

			default:
				cout << "Invalid choice : Exiting..." << endl;
				exit(1);
		}
	}
}