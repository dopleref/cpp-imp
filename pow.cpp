#include <iostream>

using namespace std;

int main() {
    int a, b;
    int pow = 1;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    for (int i = 0; i < b; i++) {
        pow *= a;
    }
    cout << "A pow B: " << pow << endl;
    return 0;
}

