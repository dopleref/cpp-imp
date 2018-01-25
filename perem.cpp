#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 3;
    int mas[n];
    for (int i = 0; i < n; i++) {
        mas[i] = i;
    }

    while (std::next_permutation(mas, mas + n)) {
        for (int i = 0; i < n; i++) {
            std::cout << mas[i] << ' ';
        }
        std::cout << '\n';
    }

    /*
const int n = 9;
int mas[n];
for (int i = 0; i < n; i++)
cin >> mas[i];

do
{
for (int i = 0; i < 3; i++)
cout << mas[i];
cout << "\t";
} while (next_permutation(mas, mas + 9));
*/
} 

