/*
#include <iostream>
using namespace std;
struct A {
	A(int n = 1) { cout << n << endl; }
};

struct B : virtual A {
	B(int n=3):A(n+1){ cout << n << endl; }
};

struct C :virtual A {
	C(int n=5):A(n+1) { cout << n << endl; }
};

struct D :B, C {
	D(int n = 7) : C(n+1){}
};

int main() {
	D d;
	return 0;
}
*/