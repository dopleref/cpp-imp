#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    int M;
    std::cin >> M;
    int m2 = M/2;
    std::vector<int> v1(m2);
    std::vector<int> v2(m2);
    for (int i = 0; i < m2; i++) {
        v1[i] = i + 1;
        v2[i] = -(i + 1);
    }
    if (M % 2) {
        v2.push_back(0);
    }
    std::sort(v2.begin(), v2.end(), std::less<int>());
    std::vector<int> dst;
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(dst));
    std::copy(dst.begin(), dst.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    return 0;
}

