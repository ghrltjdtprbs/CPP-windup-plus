#include <iostream>
using namespace std;

class MyException { // base 클래스, 추상 클래스
public:
    virtual void What() = 0; // 순수 가상 함수
};

class DivideZero : public MyException {
public:
    void What() {
        cout << "0으로 나눌 수는 없습니다." << endl;
    }
};

class NegativeNumber : public MyException {
public:
    void What() {
        cout << "음수 값은 허용되지 않습니다." << endl;
    }
};
int main() {
    int num1, num2;

    cout << "2개의 정수 입력 : ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) // DivideZero 임시 객체 전달
            throw DivideZero();
        if (num1 < 0 || num2 < 0) // NegativeNumber 임시 객체 전달
            throw NegativeNumber();

        cout << "+ : " << num1 + num2 << endl;
        cout << "- : " << num1 - num2 << endl;
        cout << "* : " << num1 * num2 << endl;
        cout << "/ : " << num1 / num2 << endl;
    }
    catch (MyException& ex) { // base 클래스로 예외 처리
        ex.What();  // DivideZero, NegativeNumber 모두 처리
    }
    catch (...) {
        cout << "기타 예외 발생" << endl;
    }

    cout << "사칙연산 종료" << endl;

    return 0;
}
