#include "stdafx.h"

using namespace std;

class Stack
{
public:
	Stack(int capacity = DEFAULT_STACK_CAPACITY); // ����������� �����
	~Stack(); // ���������� �����
	friend ostream& operator<<(ostream& os, const Stack &stack); // ����� ���������� � ����� �� �����
	int getCapacity() const; // ���������� ������� ���������� �����
	int push(int element); // ��������� ������� � ���� � ���������� �������� ����� ��������
	void pop(); // ������� ������� �����

private:
	static const int DEFAULT_STACK_CAPACITY = 5; // ����������� ������ �����
	int *capacity; // ����������� �����
	int *size; // ������� ���������� ��������� �����
	unsigned int *head; // ��������� �������� ������ �����
	unsigned int *V; // ����
	int getSize() const; // ���������� ������� ���������� ��������� � �����
	int getHead() const; // ���������� ������ ��������� ��������
	int getIndex(int i = 0) const; // ���������� i-�� ������ ����� ������������ ��� ��������� ��������
	void setSize(int n); // ������ �������� ���������� ��������� �����
	void setHead(int n); // ������ �������� ��������� �������� �����
	void setCapacity(int n); // ������ �������� ����������� �����
	bool isEmpty() const; // ��������� ���� �� �������
	bool isFull() const; // ��������� ���� �� �������������
	void circularShiftRight(); // ����������� ����� ����� ������
	void circularShiftLeft(); // ����������� ����� ����� �����
	void expand(); // ����������� ����������� ����� � ��� ����
	void narrow(); // ��������� ����������� ����� � ��� ����
};