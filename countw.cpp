#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string s;
    char c;
    std::getline(std::cin, s);
    std::cin >> c;
    std::cout << s << ": " << c << std::endl;
    std::istringstream iss(s);
    int count = 0;
    std::string v;
    while(iss >> v) {
        if (v.size() > 0 && v[0] == c) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
