#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // ���� ������
	Circle(int r); //Ÿ�� ������
	double getArea();
};

Circle::Circle() : Circle(1){ }

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; //�Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); //�Ű� ���� �ִ� ������ ȣ��
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}