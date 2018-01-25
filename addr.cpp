#include <iostream>
#include <cstring>

using namespace std;

class Addr {
public:
    Addr(const char* name, const char* street, int num) : num_(num) {
        name_ = new char[std::strlen(name) + 1];
        std::strcpy(name_, name);
        street_ = new char[std::strlen(street) + 1];
        std::strcpy(street_, street);
    };
    friend ostream& operator<<(ostream& os, const Addr& addr);

private:
    char* name_;
    char* street_;
    int num_;

};

ostream& operator<<(ostream& os, const Addr& addr) {
    os << "Name: " << addr.name_ << ", Street: " 
        << addr.street_ << ", Number: " << addr.num_ << endl;
}

int main() {

    Addr a1("John Snow", "Winterfell", 1);
    Addr a2("Daenerys Targaryen", "Dragonstone", 3);

    std::cout << a1 << a2;
    
    return 0;
}

