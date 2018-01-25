#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>
#include <functional>

struct Calc {
    void operator()(int& n) const {
        // определяем длину
        int i = 1;
        int tmp = n;
        while (tmp /= 10) {
            i++;
        }
        // считаем результат
        tmp = n;
        int sum = 0;
        while (i--) {
            sum += (tmp % 10) * (i + 1);
            tmp /= 10;
        }
        
        n = sum;
    }
};

int main() {
    // создаем вектор заполненый случайными значениями от 1 до 34
    const int N = 4;
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dis(1, 334);
    std::vector<int> v(N);
    std::generate(v.begin(), v.end(), std::bind(dis, std::ref(mt)));

    // выводим полученый вектор
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    // преобразуем вектор
    std::for_each(v.begin(), v.end(), Calc());

    // выводим преобразованый вектор
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    return 0;
}

