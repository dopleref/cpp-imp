#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void proc(int i) {
    cout << i << "; ";
}

bool comp(int a, int b) {
    return a > b;
}

int main() {
    vector<int> v { 1, 7, 2, 3, 4, 5 };
    for_each(v.begin(), v.end(), proc);
    cout << endl;
    sort(v.begin(), v.end(), comp);
    for_each(v.begin(), v.end(), proc);
    cout << endl;
    return 0;
}

