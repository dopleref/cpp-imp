#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

//функция выводит массив на экран
void printArray(vector<vector<float>>& matrix){
    for (vector<vector<float>>::const_iterator i = matrix.begin(); i != matrix.end(); i++) {
        std::copy(i->begin(), i->end(), std::ostream_iterator<float>(cout, "\t"));
        cout << endl;
    }
}

int main()
{
    int row;
    int column;

    cout << "Enter matrix size: ";
    cin >> row;
    column = row;

    // заполняем массив рандомными значениями
    srand(time(NULL));
    vector<vector<float>> matrix(row, vector<float>(column));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            matrix[i][j] = 10 + rand() % 21;
        }
    }
    printArray(matrix);

    // считаем длинну искомого массива
    int length = (row * row - row) / 2;
    vector<float> value(length);
    // получаем центральный элементы матрицы
    float central = matrix[row / 2][row / 2];
    
    // расчитываем искомый массив
    int index = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            if (j < row - i - 1) {
                value[index] = matrix[i][j] / central;
                index++;

            }
        }
    }
    // выводим полученный массив
    for (int i = 0; i < value.size(); i++) {
        cout << value[i] << " ";
    }
    cout << endl;

    return 0;
}

