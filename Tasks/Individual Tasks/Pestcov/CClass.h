#include <iostream>
#include <stdlib.h>
using namespace std;

class Queue
{
private:
	struct queue_object
	{
		int value;
		queue_object *address;
	};

	queue_object *head; //голова
	queue_object *tail; //хвост
	int size;

public:
	queue() //создание пустой очереди
	{
		size=0;
	}

	int queue_size()
	{
		return size;
	}

	void push(int elem) //добавление
	{
		if (size==0) {
			head=new queue_object;
			tail=head;
			head->value=elem;
			head->address=0; //следующего элемента пока нет
			//Так как head - указатель, на некий объект
			//то использую -> для указания на поле объекта.
			size=1;
		}
		else {
			size++;
			queue_object *newElem=new queue_object; //новый элемент очереди
			newElem->address=NULL; //новый элемент ни на что не ссылается
			newElem->value=elem;
			tail->address=newElem; //хвост ссылаю на адрес нового элемента
			tail=newElem; //теперь хвост -новый элемент
		}
	}

	int pop()
	{

		if(size == 0)
		{
			cout<<"Epmty queue! I can't delete!"<<endl;
			return 0;
		}
		else 
		{
			int delElem;
			queue_object *newElem=head;
			delElem=head->value;
			head=head->address;
			delete newElem;
			size--;	
			return delElem;
		}

	}

	void print() //печать очереди на экран
	{
		queue_object *newElem; //=new(queue_object)
		newElem=head;
		int i=0;
		do {
			cout<<newElem->value<<"  ";
			newElem=newElem->address;
			i++;
		} while (i<size);
		cout<<"\n"<<endl;
	}

};
