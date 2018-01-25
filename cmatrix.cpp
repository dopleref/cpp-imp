#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <random>
#include <functional>

int main() {
    // fill the vectors with random numbers
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dis(0, 9);

    int n = 3;
    int m = 3;
    std::vector<std::vector<int>> v(n, std::vector<int>(m));
    for (auto& c : v) {
        std::generate(c.begin(), c.end(), std::bind(dis, std::ref(mt)));
    }
    
    std::cout << "matrix:\n";
    for (auto c : v) {
        std::copy(c.begin(), c.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << '\n';
    }

    int min = -1;
    int mux;
    for (auto c : v) {
        mux = std::accumulate(c.begin(), c.end(), 1, std::multiplies<int>()); 
        std::cout << mux << std::endl;
        if (min == -1 && mux < min) min = i;
    }
    std::cout << "min mux: " << min << std::endl;
    return 0;
}

