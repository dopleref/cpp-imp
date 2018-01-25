#include <iostream>

using namespace std;

class type {
private:
    int i_;
    int j_;
public:
    type(int i, int j) : i_(i), j_(j) {};
    void print() {
        cout << "hello, object (" << i_ << ", " << j_ << ")\n";
    }
};

struct point {
    int i;
    int j;
};

class A {
private:
    type*** data;
    int N = 2;
    int M = 3;
public:
    A() { 
        data = new type**[N];
        for (int i = 0; i < N; i++) {
            data[i] = new type*[M];
            for (int j = 0; j < M; j++) {
                data[i][j] = new type(i, j);
            }
        }
    }
    type* operator[](const point& v) {
        // нужна проверка, что элемент существует
        return data[v.i][v.j];
    }
};


int main() {
    A a;
    a[{1,2}]->print();
    return 0;
}

