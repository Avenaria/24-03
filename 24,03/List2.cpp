#include "List2.h"


List2::List2() {
	head = tail = nullptr;
};
List2::List2(const List2& l) {
	head = tail = nullptr;
	count = 0;
	Element* temp = l.head;
	while (temp!=nullptr)
	{
		Addteil(temp->data);
		temp = temp->next;

	}
};
List2::~List2() {
	Dellall();
}
int GetCount();
Element* GetEl(int);
void Dellall();
void Del(int);
void List2:: Insert(int pos) {
	if (pos<1 || pos>count+1) {
		cout << " Etfr";
		return;
	}
	if (pos == count + 1) {
		int d; cin >> d;
		Addteil(d);
		return;
	}
	else if (pos = 1) {
		int d; cin >> d;
		AddHead(d);
		return;
	}
	int i = 1;
	Element* ins = head;
	while (i<pos)
	{
		ins = ins->next;
		i++;
	}
	Element* previns = ins->prev;
	Element* temp = new Element;
	cout << " Input numbe ";
	cin >> temp->data;
	if (previns != nullptr && count != 1) {
		previns->next = temp;
	}
	temp->next = ins;
	temp->prev = previns;
	ins->prev = temp;
	count++;
};
void List2::Addteil(int n) {
	Element* temp = new Element;
	temp->next = nullptr;
	temp->data = n;
	temp->prev = tail;

	if (tail != nullptr) {
		tail->next = temp;

	}
	if (count == 0) {
		head = tail = temp;

	}
	else tail = temp;
	count++;

};
void List2::AddHead(int n) {
	Element* temp = new Element;
	temp->prev = nullptr;
	temp->data = n;
	temp->next = head; 
	if (head != nullptr) {
		head->prev = temp;
	}
	if (count == 0) {
		head = tail = temp;
	}
	else
		head = temp;
	count++;
};
void Print();
void PrintEl(int);
