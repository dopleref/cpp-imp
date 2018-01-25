#include <functional>
#include <iostream>
#include <string>
#include <cctype>


class FSM {
public:
    FSM() {}
    void setState(const std::function<void(char)>& func) {
        state_ = func;
    }

    void update(char ch) {
        state_(ch);
    }

private:
    std::function<void(char)> state_;
};

struct Plus {
    int operator() (int n1, int n2) const {
        return n1 + n1;
    }
};

struct Minus {
    int operator() (int n1, int n2) const {
        return n1 - n1;
    }
};

struct Mul {
    int operator() (int n1, int n2) const {
        return n1 * n1;
    }
};

struct Div {
    int operator() (int n1, int n2) const {
        return n1 / n1;
    }
};

struct Test {
    void operator() (char ch) const {
        std::cout << ch;
    }
};

class Parser {
public:
    Parser() {
        fsm_.setState(Test());
    }
 
    /*
    void getNum(char ch) {
        if (std::isdigit(ch)) {
            snum_ += ch;
        }
    }
    */

   

private:
    class GetNum {
    public:
        void operator() (char ch) {
            if (std::isdigit(ch)) {
                somestr_ += ch;
            }
            else {
                n1 = 2;
            }
        }
        
    private:
        std::string somestr_;
    };

    void getOp(char ch) {
        if (ch == '+') {
            op_ = Plus();
        }
        else if (ch == '-') {
            op_ = Minus();
        }
        else if (ch == '*') {
            op_ = Mul();
        }
        else if (ch == '/') {
            op_ = Div();
        }
    }

    FSM fsm_;
    std::string str_;
    //std::string snum_;
    int n1 = 0;
    int n2 = 0;

    std::function<int(int, int)> op_;

};

/*
struct fsm {
    enum states {
        initial = 0,
        state1,
        state_final
    };
};

enum signals {
    sign0,
    sign1,
    signN
};

struct transition {
    fsm::states new_state;
    std::function<fsm::states(char*)>& func;
};
*/
    

/*
struct getNum {
    void operator() (char* ch) {
        std::cout << ch;
    }
};

void proc(char* ch, const std::function<void(char*)>& func) {
    func(ch);
}

int main() {
    std::string s = "abc";
    //proc(&s[0], getNum());
    proc(&s[0], [](char* ch) { std::cout << int(*ch); });
    std::cout << std::endl;
    return 0;
}
*/

int main() {
    return 0;
}

