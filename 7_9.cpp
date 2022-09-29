#include <iostream>
using namespace std;
class Shape {
public:
	Shape(int type, double len) :
		type_(type), len_(len), PI(3.14) {}
	~Shape() {}
	double GetArea() {
		if (type_ == 1)
			return (len_ * len_);
		else
			return (len_ * PI);
	}
	int GetRectCount() {}
	int GetCircleCount(){}

private: 

	double len_;
    int type_;
	const double PI;
	 

};

int main() {
	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "사각형 개수   : " << Shape::GetRectCount() << endl;
	cout << "원 개수       : " << Shape::GetCircleCount() << endl;
	cout << "shape1의 면적 : " << shape1.GetArea() << endl;
	delete[] p_rect;
	cout << "사각형 개수   : " << Shape::GetRectCount() << endl;
	cout << "원 개수       : " << Shape::GetCircleCount() << endl;
	cout << "shape1의 면적 : " << shape2.GetArea() << endl;

	return 0;

}