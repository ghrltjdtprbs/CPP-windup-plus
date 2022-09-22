#include <iostream>
using namespace std;

class Point {
public:
    Point(int x, int y) { x_ = x; y_ = y; }     // »ý¼ºÀÚ
    void Print() { cout << "(" << x_ << ", " << y_ << ")" << endl; }
private:
    int x_;
    int y_;
};
int main() {
    Point pt1 = Point(3, 4);
    Point pt2(5, 6);

    pt1.Print();
    pt2.Print();

    return 0;
}
