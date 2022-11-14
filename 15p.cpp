#include <iostream>
using namespace std;

#define PI 3.14

class Circle {
public:
    Circle(int x, int y, double radius) :
        x_(x), y_(y), radius_(radius) {}
    // 가상 함수
    virtual double GetArea() { return PI * radius_ * radius_; }
protected:
    int x_, y_;     // 중심
    double radius_; // 반지름
};
class Sphere : public Circle {
public:
    Sphere(int x, int y, int z, double radius) :
        Circle(x, y, radius), z_(z) {}
    // virtual 선언을 생략해도 가상 함수
    double GetArea() { return 4 * PI * radius_ * radius_; }
private:
    int z_;
};
void OutArea(Circle* p_cir)
{
    cout << p_cir->GetArea() << endl;
}
void OutArea(Circle& r_cir)
{
    cout << r_cir.GetArea() << endl;
}

int main() {
    Circle cir(1, 1, 1);
    Sphere sph(1, 1, 1, 1);

    cout << cir.GetArea() << endl;
    // Circle::GetArea
    cout << sph.GetArea() << endl;
    // Sphere::GetArea

    OutArea(&cir); // Circle::GetArea
    OutArea(&sph); // Sphere::GetArea
    OutArea(cir);  // Circle::GetArea
    OutArea(sph);  // Sphere::GetArea

    return 0;
}
