#include <iostream>
#include <string>

int getNextNumber(const std::string& expr, std::string::iterator& it) {
    std::string s;
    while (std::isdigit(*it)) {
        s += *it;
        it++;
    }
    std::cout << s << std::endl;
    if (s.length() > 0) {
        return std::stoi(s);
    }
    else {
        return -1;
    }
}

void test() {
    std::string str ("Test string");
    for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
        std::cout << *it;
    std::cout << '\n';
}

int main() {
    std::string expr;
    std::getline(std::cin, expr);
    std::cout << expr << std::endl;
    std::string::iterator it = expr.begin();
    std::cout << getNextNumber(expr, it) << std::endl;

    test();
    return 0;
}

