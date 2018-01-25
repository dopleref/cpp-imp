#include <iostream>

using namespace std;

class Parser;

class FSM {
public:
    explicit FSM(Parser* parser) : parser_(parser) {}
    void setState(void (Parser::*state)(char ch)) {
        state_ = state;
    }

    void update(char ch) {
        if (state_ != nullptr) {
            (parser_->*state_)(ch);
        }
    }

private:
    void (Parser::*state_)(char ch);
    Parser* parser_;

};


class Parser {
public:
    Parser() {}
    int proc(const string& str) {
        str_ = str;
        fsm_.setState(&Parser::getNum);
        for (int i = 0; i < str.length(); i++) {
            fsm_.update(str[i]);
        }
        return 0;
    }

    void getNum(char ch) {
    };

private:
    FSM fsm_ { this };
    string str_;

};

int main() {
    return 0;
}
