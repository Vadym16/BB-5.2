#include <iostream>

using namespace std;


class B {
public:
    B() { cout << "B" << endl; }
    virtual void show() { cout << "Клас B" << endl; }
};


class D1 : public B {
public:
    D1() { cout << "D1" << endl; }
    void show() { cout << "Клас D1" << endl; }
};

class D2 : private B {
public:
    D2() { cout << "D2" << endl; }
    void show() { cout << "Клас D2" << endl; }
};

class D3 : private B {
public:
    D3() { cout << "D3" << endl; }
    void show() { cout << "Клас D3" << endl; }
};


class D4 : private D1, public D2 {
public:
    D4() { cout << "D4" << endl; }
    void show() { cout << "Клас D4" << endl; }
};

class D5 : public D2, private D3 {
public:
    D5() { cout << "D5" << endl; }
    void show() { cout << "Клас D5" << endl; }
};

int main() {

    setlocale(LC_ALL, "ukr");

    cout << "Єрархія" << endl;

    B b;
    b.show();
    D1 d1;
    d1.show();
    D2 d2;
    d2.show();
    D3 d3;
    d3.show();
    D4 d4;
    d4.show();
    D5 d5;
    d5.show();
    
}
