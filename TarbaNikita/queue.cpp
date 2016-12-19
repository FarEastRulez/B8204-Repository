#include "stdafx.h"
#include <iostream>
using namespace std;

class queue 
{
	int sizeA;
	int *data;
public :
	friend ostream& operator<<(ostream& cout, queue& queue);

	queue ()
	{
		sizeA = 0;
		data = new int [sizeA];
	}


	void push (int a)
	{
		sizeA++;
		int *tmp = new int [sizeA];
		for (int i = 0; i < sizeA - 1; ++i)
		{
			tmp[i]=data[i];
		}
		tmp[sizeA-1] = a;
		delete[] data;
		data = new int [sizeA];
		memcpy(data,tmp,sizeof (int) * sizeA);
		delete[] tmp;
		
	}


	int pop ()
	{
		if (sizeA == 0 ) 
		{
			return -1;
		}
		else 
		{
			sizeA--;
			data++;
		}

	}

};

 ostream& operator<<(ostream& cout,queue& queue )
	{
   for (int i=0; i<queue.sizeA; i++ )
		{
			cout<<queue.data[i]<<' ';
		}
    return cout;
	}


int main()
{
	queue q1;
	int x =6;
	q1.push(x);
	cout<<q1;
	cout<<endl;
	q1.push(x);
	cout<<q1;
	cout<<endl;
	q1.pop();
	cout<<q1;
	cout<<endl;
	system ("pause");

}

