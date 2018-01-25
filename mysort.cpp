#include <algorithm>
#include <iostream>
#include <iterator>
#include <array>

int main() {
    std::array<int, 10> a = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    auto it = std::partition(a.begin(), a.end(), [](int i) {return i % 2 == 0;});
    std::sort(a.begin(), it, std::greater<int>());
    std::copy(a.begin(), it, std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    return 0;
}

