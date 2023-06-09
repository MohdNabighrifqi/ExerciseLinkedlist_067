#include <iostream>
#include <string>
using namespace std;
class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};
class CircularLinkedList {
private:
	Node* LAST;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void addNode();
	bool search(int rollno, Node** Rifqi, Node** Mohd);
	bool listEmpty();
	bool delNode();
	void traverse();
};
void CircularLinkedList::addNode() { //write your answer here
	int rollNumber;
	string name;
	Node* newnode = new Node();
	cout << "Enter the roll Number";
	cin >> rollNumber;
	cout << "Enter the Name";
	cin >> name;
	newnode->rollNumber;
	newnode->name;

	if (LAST == NULL || rollNumber <= LAST->rollNumber) {
		if (LAST != NULL && rollNumber == LAST->rollNumber)
		{
			cout << "Roll Number is already" << endl;
			return;
		}
		newnode->next = LAST;
		LAST = newnode;
		return;
}
	bool CircularLinkedList::search(int rollno, Node** Rifqi, Node** Mohd)
	{
	*Rifqi = LAST;
	*Mohd = LAST;
	while (*Mohd != LAST) {
		if (rollno == (*Mohd)->rollNumber) {
			cout << "No accpeted";
			return true;
		}
		*Rifqi = *Mohd;
		*Mohd = (*Mohd)->next;
	}
	if (rollno == LAST->rollNumber) {
		return true;
	}
	else {
		return false;
	}
}
bool CircularLinkedList::listEmpty() { 
	if (LAST == NULL)
		return true;
	else
		return false;
	return LAST == NULL;
}
bool CircularLinkedList::delNode() { //write your answer here
	Node* Mohd = START;
	Node* Rifqi = START;
	if (search(nim, previous, current) == false)
		return false;
	previous->next = current->next;
	if (current == START)
		START = current->next;
	return true;
}
void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* currentNode = LAST->next;
		while (currentNode != LAST) {
			cout << currentNode->rollNumber << " " << currentNode->name << endl;
			currentNode = currentNode->next;
		}
		cout << LAST->rollNumber << " " << LAST->name << endl;
	}
}
int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";
			char ch;
			cin >> ch;
			switch (ch) {
			case '1': {
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}