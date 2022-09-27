#include <iostream>
using namespace std;
class Point {
public:
	Point &SetX(int a) { a_ = a; return(*this); }
	Point& SetY(int b) { b_ = b; return(*this); }
	void Print() { cout << "(" << a_ << ", " << b_ << ")" << endl; }
private:
	int a_;
	int b_;

};
int main() {
	Point pt1;

	pt1.SetX(3).SetY(4);
	pt1.Print();

	pt1.SetY(6).SetX(5);
	pt1.Print();

	return 0;
}
