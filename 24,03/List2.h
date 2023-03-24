#pragma once

#include <iostream>
#include"Tree.h"
using namespace std;
struct Element
{
	int data;
	Element* next, * prev;
};
class List2
{
	Element* head, * tail;
	int count;
public:
	List2();
	List2(const List2&);
	int GetCount();
	Element* GetEl(int);
	void Dellall();
	void Del(int);
	void Insert(int);
	void Addteil(int);
	void AddHead(int);
	void Print();
	void PrintEl(int);
	List2& operator=(const List2&);
	List2& operator+(const List2&);
	bool& operator==(const List2&);
	bool& operator!=(const List2&);
	bool& operator>=(const List2&);
	bool& operator<=(const List2&);
	bool& operator>(const List2&);
	bool& operator<(const List2&);
	List2 operator-();
};
