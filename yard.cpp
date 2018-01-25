#include <iostream>

using namespace std;

double yard_to_dm(double yard) {
    return yard * 9.144;
}

int main() {
    double yard;
    double dm;
    cout << "Enter amount of yard's: ";
    cin >> yard;
    dm = yard_to_dm(yard);
    cout << "amount of dm's: " << dm << endl;
    return 0;
}

