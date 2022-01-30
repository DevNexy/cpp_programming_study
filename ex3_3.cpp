#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // �⺻ ������
	Circle(int r); // �Ű� ���� �ִ� ������
	double getArea();
};

Circle::Circle() {
	radius = 1; // ������ �� �ʱ�ȭ
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r; //������ �� �ʱ�ȭ
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; //�Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); //�Ű� ���� �ִ� ������ ȣ��. 30�� r�� ���޵�
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}