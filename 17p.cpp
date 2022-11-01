#include <iostream>
using namespace std;

#define PI 3.14

class Circle {
public:
    Circle(int x, int y, double radius) :
        x_(x), y_(y), radius_(radius) {}
    double GetArea() { return PI * radius_ * radius_; }
private:
    int x_, y_;         // 중심
    double radius_;     // 반지름
};

class Sphere : public Circle {
public:
    Sphere(int x, int y, int z, double radius) :
        Circle(x, y, radius), z_(z) {}
    double GetArea() { return 4 *Circle::GetArea(); }
    
private:
    int z_;
};
int main() {
    Sphere sph(1, 1, 1, 1);

    cout << sph.GetArea() << endl;
    

    return 0;
}
