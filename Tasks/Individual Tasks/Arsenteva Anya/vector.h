const int INCREASE_SIZE = 5;
struct Vector {
	int vSize; //������ �������
	int currentSize; //���������� ���������
	unsigned int *v; //��������� �� ������
};

void init(Vector& a); //������������� �������
int insert(Vector& a, int index, int element); //���������� �������� �� ������ �������
int del(Vector& a, int index); //�������� �������� � ������ �������
int get(Vector& a, int index); //��������� �������� �� �������
void print(Vector& a); //������ �������
int length(Vector& a); //����������� ����� ������������ �������