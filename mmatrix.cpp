#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

//функция выводит массив на экран
void printArray(vector<vector<int>>& matrix){
    for (vector<vector<int>>::const_iterator i = matrix.begin(); i != matrix.end(); i++) {
        std::copy(i->begin(), i->end(), std::ostream_iterator<int>(cout, "\t"));
        cout << endl;
    }
}
int main()
{
    int row = 9;
    int column = 9;

    cout << "Enter row number: ";
    cin >> row;
    cout << "Enter column number: ";
    cin >> column;

    srand(time(NULL));
    vector<vector<int>> matrix(row, vector<int>(column));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            matrix[i][j] = 1 + rand() % 100;
        }
    }
    printArray(matrix);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column / 2; j++) {
            matrix[i][j] = matrix[i][column - 1 - j];
        }
    }
    cout << "mirored matrix:\n";
    printArray(matrix);
    return 0;
}

