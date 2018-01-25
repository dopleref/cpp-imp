#include <iostream>
#include <string>

using namespace std;

int main () { 
    string s1 = "invisible sensation";
    string s2;
    string s3;

    cout<<"Введите ваше слово/предложение: "; 
    getline(cin, s2);

    int i = 0;
    int j = 0;
    bool first = true;
    while (i < s1.length() || j < s2.length()) {
        // копируем слово из первой строки
        while (i < s1.length() && s1[i] != ' ') {
            s3 += s1[i];
            i++;
        }
        // копируем слово из второй строки
        while (j < s2.length() && s2[j] != ' ') {
            s3 += s2[j];
            j++;
        }
        // пропускаем пробелы первой строки
        while (i < s1.length() && s1[i] == ' ') {
            i++;
        }
        // пропускаем пробелы второй строки
        while (j < s2.length() && s2[j] == ' ') {
            j++;
        }
    }
    cout << "result string: " << s3 << endl;
}

