#include "stdafx.h" 
#include "matrix.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Matrix a, b, c, d, e;
	ifstream fin;
	fin.open("matrix.txt");
	a = Read(fin);
	if (a.x > 9 || a.x <= 0 || a.y > 9 || a.y <= 0)
	{
		cout << "���������� �������� � ����� ������ ������� � �������� �� 1 �� 9\n";
		cout << "�������� ������ �������� �����\n";
	}
	else
	{
		cout << "������� A:\n";
		Print(a);
		if (a.x == a.y)
		{
			cout << "������������ ������� A = " << Det(a, a.x);
			cout << "\n\n";
		}
		else {
			cout << "��� �������� ������������ ������� ������ ���� ����������";
		}
		b = Read(fin);
		if (b.x > 9 || b.x <= 0 || b.y > 9 || b.y <= 0)
		{
			cout << "\n���������� �������� � ����� ������ ������� � �������� �� 1 �� 9\n";
			cout << "�������� ������ �������� ����� ";
		}
		else
		{
			cout << "\n";
			cout << "������� B:\n";
			Print(b);
			fin.close();
			if (b.x == b.y)
			{
				cout << "������������ ������� B = " << Det(b, b.x);
				cout << "\n";
			}
			else {
				cout << "��� �������� ������������ ������� ������ ���� ����������";
			}
			if (a.x == b.x && a.y == b.y)
			{
				c = Sum(a, b);
				Print(c);
				d = Razn(a, b);
				Print(d);
				delete[] d.masMat;
			}
			else
			{
				cout << "\n��� �������� � ��������� ������� ������ ���� ����� �����������\n";
			}
			if (a.y == b.x) {
				e = Umnozh(a, b);
				//cout << "\n";
				Print(e);
				delete[] e.masMat;
			}
			else
			{
				cout << "\n��� ��������� ���������� �������� ������ ������� ������ ��������� � ����������� ����� ������\n";
			}
			delete[] b.masMat;
		}
	}
	delete[] a.masMat;
	system("pause");
	return 0;
}