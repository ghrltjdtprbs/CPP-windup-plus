#include <iostream>
#include <cstring>
using namespace std;
class Student
{
public :
	Student(const char* name = "noname" , int number = 0, int age = 0) {
		name_ = name; number_ = number; age_ = age;
	}
	void SetName(const char* name) { name_ = name; }
	void SetNumbrt(int number) { number_ = number; }
	void SetAge(int age) { age_ = age; }
	void Print() { 
		cout << "이름 : " << name_ << endl;
		cout << "학번 : " << number_ << endl;
		cout << "나이 : " << age_ << endl;
	}
	

private :

	const char* name_;
	int number_;
	int age_;
};

int main() {
	Student st1("홍길동", 11111111, 25);
	Student st2;

	st1.Print();
	st2.Print();

	st2.SetName("이순신");
	st2.SetNumbrt(22222222);
	st2.SetAge(30);

	st2.Print();

	return 0;
}