#include "stdafx.h"
#include <iostream>
using namespace std;

struct Vector
{
	int increase; // ���������� ����
	int size; // ������ ����
	int currentSize;// ����� ��.
	unsigned int *v;// ����. �� ����
	int startPos;// ���. ������
};

void expansion (int el, Vector& vector);
void  push(int el, Vector& vector);
void constriction (Vector& vector);
int pop(Vector& vector);
void create (Vector& name,int size,int increase);
ostream& operator<<(ostream& cout, Vector& vector);