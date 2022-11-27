#include <iostream>
using namespace std;

class MyException { // base Ŭ����, �߻� Ŭ����
public:
    virtual void What() = 0; // ���� ���� �Լ�
};

class DivideZero : public MyException {
public:
    void What() {
        cout << "0���� ���� ���� �����ϴ�." << endl;
    }
};

class NegativeNumber : public MyException {
public:
    void What() {
        cout << "���� ���� ������ �ʽ��ϴ�." << endl;
    }
};
int main() {
    int num1, num2;

    cout << "2���� ���� �Է� : ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) // DivideZero �ӽ� ��ü ����
            throw DivideZero();
        if (num1 < 0 || num2 < 0) // NegativeNumber �ӽ� ��ü ����
            throw NegativeNumber();

        cout << "+ : " << num1 + num2 << endl;
        cout << "- : " << num1 - num2 << endl;
        cout << "* : " << num1 * num2 << endl;
        cout << "/ : " << num1 / num2 << endl;
    }
    catch (MyException& ex) { // base Ŭ������ ���� ó��
        ex.What();  // DivideZero, NegativeNumber ��� ó��
    }
    catch (...) {
        cout << "��Ÿ ���� �߻�" << endl;
    }

    cout << "��Ģ���� ����" << endl;

    return 0;
}
