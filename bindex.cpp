#include <iostream>

void display(const int a[], size_t n, int operation(int)) {
    for (size_t i = 0; i < n; i++) {
        std::cout << operation(a[i]) << ' ';
    }
    std::cout << std::endl;
}

int main() {
    const size_t N = 10;
    int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    auto doubled = [](int x) { return 2 * x; };
    display(a, N, doubled);
    return 0;
}
