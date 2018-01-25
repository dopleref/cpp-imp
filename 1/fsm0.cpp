#include <iostream>
#include <cctype>

using namespace std;

void findDigit(char ch, size_t& idx);
void getDigit(char ch, size_t& idx);
void getOp(char ch, size_t& idx);
int calc();

void (*state)(char ch, size_t& idx);
string snum_;
char op = 0;
int num = 0;
int res = 0;

void update(char ch, size_t& idx) {
    if (state != nullptr) {
        state(ch, idx);
    }
}

void findDigit(char ch, size_t& idx) {
    if (isdigit(ch)) {
        state = getDigit;
    }
    else {
        idx++;
    }
}

void getDigit(char ch, size_t& idx) {
    if (isdigit(ch)) {
        snum_ += ch;
        idx++;
    }
    else if (snum_.length() != 0) {
        num = std::stoi(snum_);
        if (op == 0) {
            res = num;
        }
        else {
            res = calc();
        }
        snum_.clear();
        state = getOp;
    }
    else {
        cout << "ошибка при получении числа\n";
    }
}

void getOp(char ch, size_t& idx) {
    if (ch == '+' || ch == '-' || ch == '/' || ch == '*') {
        op = ch;
        state = findDigit;
    }
    idx++;
}

int calc() {
    if (op == '+') {
        res += num;
    }
    else if (op == '-') {
        res -= num;
    }
    else if (op == '/')  {
        res /= num;
    }
    else if (op == '*') {
        res *= num;
    }
}

int main() {
    cout << "fsm!\n";
    snum_.clear();
    //string inps = "4 + 2*2  / 12";
    string inps;
    cout << "enter expression: ";
    std::getline(cin, inps);
    inps += ' ';
    //cout << inps << endl;
    size_t idx = 0;
    state = findDigit;
    while (idx < inps.length()) {
        update(inps[idx], idx);
    }
    cout << "res: " << res << endl;
    return 0;
}

