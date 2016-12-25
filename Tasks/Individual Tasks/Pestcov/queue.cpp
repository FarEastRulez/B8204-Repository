// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "CClass.h"
using namespace std;



int main()
{
	int b;
	cout<<"Inin of an one queue"<<endl;
	queue a(1);
	a.print();
	cout<<"Add some New elements"<<endl;
	for (int i=2; i<10; i++){
		a.push(i);
	}
	a.print();
	cout<<"Now, Delete 3 elements from a head"<<endl;
	for (int i=1; i<4; i++){
		a.pop(&b);
	}
	a.print();
	cout<<"The last value of deleted elemein is"<<endl;
	cout<<b<<endl;
	system("pause");

	return 0;
}