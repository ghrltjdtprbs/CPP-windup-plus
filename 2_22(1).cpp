#include <iostream>
using namespace std;
double GetArea(double l, double w)
{
	return(l * w);
}
double GetArea(double r)
{
	return(r*r*3.141592);
}
int main(){
	double a;
	double b;
	int areaType;

	cout << "���� ���� �Է� (1:���簢��, 2:��): ";
	cin >> areaType;

	if (areaType == 1) {
		cout << "����, ���� �Է�: ";
		cin >> a >> b;
		cout << "���簢�� ����: " << GetArea(a, b);
	}
	else if (areaType == 2) {
		cout << "������ �Է�: ";
		cin >> a;
		cout << "�� ����: " << GetArea(a);
	}
	else
		cout << "�Է� ����!";

}