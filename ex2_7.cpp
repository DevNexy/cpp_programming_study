#include <iostream>
#include <string>
using namespace std;

int main() {
	string song("Falling in live with you"); // ���ڿ� song
	string elvis("Elvis Presley"); // ���ڿ� elvis
	string singer; //���ڿ� singer

	cout << song + "�� �θ� ������"; // + �� ���ڿ� ����
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?";// [] ������ ���

	getline(cin, singer); //���ڿ� �Է�
	if (singer == elvis) //���ڿ� ��
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ� " << endl; //���ڿ� ����
}