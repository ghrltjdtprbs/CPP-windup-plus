#include <iostream>
using namespace std;

class Point {
public:
    Point(int x, int y) { x_ = x; y_ = y; }   // 생성자1, 2개의 매개변수
    Point(int x) { x_ = x; y_ = 0; }          // 생성자2, 1개의 매개변수
    void Print() { cout << "(" << x_ << ", " << y_ << ")" << endl; }
private:
    int x_;
    int y_;
};
int main() {
    Point pt1(3, 4);   // 생성자1 사용
    Point pt2(5);      // 생성자2 사용
    Point pt3 = 6;     // 6 => Point(6) 변환, 변환 시 생성자2 사용

    pt1.Print();
    pt2.Print();
    pt3.Print();

    return 0;
}
