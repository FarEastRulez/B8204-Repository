#pragma once
struct stek
{
	int value;
	struct stek *next; // ��������� �� ��������� ������� ������ (�����)
};

void push(stek* &NEXT, const int VALUE);
int pop(stek* &NEXT);
int Size(stek* NEXT);