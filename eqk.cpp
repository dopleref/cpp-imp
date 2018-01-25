#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
void Print(int n, int m, int *a)
{
    cout << "Матрица:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << left << setw(10) << a[i * n + j];
        }
        cout << endl;
    }
}
 
int main()
{
    setlocale(LC_ALL, "Rus");
    
    const int N = 3;
    const int M = 3;
    
    int c = 0;
    int k = 0;
    
    int a[N * M];
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            a[i * M + j] = rand() % 10;
        }
    }
    
    Print(N, M, a);

    int sum[N];
    for (int i = 0; i < N; i++) {
        sum[i] = std::accumulate(a + i*N, a + i*N + M, 1, std::multiplies<int>());
        std::cout << i << " : " << sum[i] << std::endl;
    }
    std::sort(sum, sum + N);

    int min_n = 0;
    for (int i = 1; i < N; i++) {
        if (sum[i] < sum[min_n]) min_n = i;
    }

    std::cout << "column with min mul: " << min_n << std::endl;
    
    return 0;
}

