//#pragma once
//#include <iostream>
//#include"Tree.h"
//using namespace std;
//struct Element
//{
//	char data;
//	Element* next;
//	Element* fox;
//
//};
//class List
//{
//	Element* head;
//	Element* taill;
//	int count;
//
//public:
//	List();
//	~List(){};
//	void Add(char, char);
//	void del();
//	void Print();
//	int GetCount();
//	void dellall();
//
//};
//
//List::List(){
//	head = nullptr;
//	count = 0;
//	taill = nullptr;
//}
//int List::GetCount() {
//	return count;
//};
//void List:: Add(char a, char d){
//	Element* temp = new Element;
//	Element* temp2 = new Element;
//	temp->data = a;
//	if (head != nullptr) {
//		taill->next = temp;
//		taill = temp;
//	}
//	if (taill != nullptr) {
//		head->fox = temp2;
//		head = temp2;
//	}
//	else
//		head = taill = temp;
//		head = taill = temp2;//?
//}
//void List::dellall() {
//	while (head!=nullptr)
//	{
//		del();
//	}
//};
//void List::del() {
//	Element* temp = head;
//	head = head->next;
//	delete temp;
//
//}
//void List::Print() {
//	Element* temp = head;
//	while (temp != nullptr) {
//		cout << temp->next << " ";
//	}
//	
//}