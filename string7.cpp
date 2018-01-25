#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "some string";
    cout << static_cast<size_t>(s[0]) << ", " << static_cast<size_t>(s[s.length() - 1])  << endl;
    return 0;
}
