#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    std::string s = "alsnGenEna";
    std::cout << s << std::endl;

    std::ostringstream ss;
    ss << "alsnGenEna" << setfill('0') << setw(2) << 8;
    std::string rs = ss.str();
    cout << ss.str() << endl;
    return 0;
}

