#include <iostream>
using namespace std;
class Shape {
public:
	Shape(double type=1,int len=0 ) :
		type_(type), len_(len), PI(3.14) {
		if (type == 1)
			r_count_++;
		else c_count_++;
	}
	
	~Shape() {
		r_count_--;
		c_count_;
	}
	double GetArea() {
		if (type_ == 1)
			return (len_ * len_);
		else
			return (len_*len_*PI );
	}
	static int GetRectCount() { return r_count_; }
	static int GetCircleCount() { return c_count_; }

private: 

	double len_;
    int type_;
	const double PI;
	static int r_count_,c_count_;

};
int Shape::r_count_ = 0;
int Shape::c_count_ = 0;
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