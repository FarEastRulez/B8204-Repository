
#include "stdafx.h"
#include"myStack.h"
#include <fstream>
#include <iostream>
using namespace std;

void push(stek* &NEXT, const int VALUE)
{
    stek *MyStack = new stek; // ��������� ����� ������������ ���������� ���� stek
    MyStack->value = VALUE; // ���������� ��������, ������� ���������� � ����
    MyStack->next = NEXT; // ��������� ����� ������� ����� � ����������
    NEXT = MyStack; // ����� ������� ����� ���������� ��� ��������
}

int pop(stek* &NEXT)
{
    int temp = NEXT->value; // ��������� � ���������� temp �������� � ������� �����
    stek *MyStack = NEXT; // ���������� ��������� �� ������� �����, ����� �����
    // ���������� ���������� ��� ���� ������
    NEXT = NEXT->next; // �������� ���������� �������������� top �������
    delete MyStack; // ����������� ������, ��� ����� ������� �������
    return temp; // ���������� ��������, ������� ���� � �������
}

int Size(stek* NEXT)
{
    int temp = 0; 
	
while (NEXT!=NULL)
    { 
		temp ++;
		NEXT = NEXT->next;
    };
    return temp; 
}

void Write(stek* NEXT)
{
	while (NEXT!=NULL)
    { 
      cout <<NEXT->value<<' ';  
      NEXT = NEXT->next; 
	}
	cout<<endl;
}