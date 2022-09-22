#include <iostream>
using namespace std;

class Point {
public:
    Point(int x, int y) { x_ = x; y_ = y; }   // ������1, 2���� �Ű�����
    Point(int x) { x_ = x; y_ = 0; }          // ������2, 1���� �Ű�����
    void Print() { cout << "(" << x_ << ", " << y_ << ")" << endl; }
private:
    int x_;
    int y_;
};
int main() {
    Point pt1(3, 4);   // ������1 ���
    Point pt2(5);      // ������2 ���
    Point pt3 = 6;     // 6 => Point(6) ��ȯ, ��ȯ �� ������2 ���

    pt1.Print();
    pt2.Print();
    pt3.Print();

    return 0;
}
