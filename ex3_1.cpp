#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1; // donut ��ü�� �������� 1�� ����
	double area = donut.getArea(); // donut ��ü�� ���� �˾Ƴ���
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30; // pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); // pizza ��ü�� ���� �˾Ƴ���
	cout << "pizza ������ " << area << endl;
}