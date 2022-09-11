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

	cout << "도형 선택 입력 (1:직사각형, 2:원): ";
	cin >> areaType;

	if (areaType == 1) {
		cout << "가로, 세로 입력: ";
		cin >> a >> b;
		cout << "직사각형 면적: " << GetArea(a, b);
	}
	else if (areaType == 2) {
		cout << "반지름 입력: ";
		cin >> a;
		cout << "원 면적: " << GetArea(a);
	}
	else
		cout << "입력 오류!";

}