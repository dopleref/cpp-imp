#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> myFirstMap = {{"Mother", 37},
                                   {"Father", 40},
                                   {"Brother", 15},
                                   {"Sister", 20}};

    if (myFirstMap.find("Boris") != myFirstMap.end())
        cout << "find Boris" << endl;

    if (myFirstMap.find("Father") != myFirstMap.end())
        cout << "find Father" << endl;

    cout << "undef val: " << myFirstMap["Boris"] << endl;

    for (auto it = myFirstMap.begin(); it != myFirstMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    char c;
    map<char, int> mySecondMap;
    for (int i = 0, c = 'a'; i < 5; ++i, ++c) {
        mySecondMap.insert(pair<char, int>(c, i));
    }

    for (auto it = mySecondMap.begin(); it != mySecondMap.end(); ++it) {
        cout << (*it).first << " : " << (*it).second << endl;
    }

    return 0;
}

