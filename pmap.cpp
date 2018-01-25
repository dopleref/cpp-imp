#include <iostream>
#include <string>
#include <map>
#include <sstream>

int main() {
    std::map<std::string, int> m;
    std::string s = "Вася Петя Саша Коля";
    std::istringstream iss(s);
    std::string v;
    while(iss >> v) {
        m.insert(std::pair<std::string, int>(v, 0));
    }
    for (auto t : m) {
        std::cout << t.first << ": " << t.second << std::endl;
    }
    return 0;
}
