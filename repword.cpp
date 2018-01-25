#include <iostream>
#include <string>
#include <vector>
#include <sstream>
 
using namespace std;
 
 
int sravn(char word, char word2, int counter)
{
    if (word == word2) counter++;
        return counter;
}
 
 
int main()
{
    string text;
    getline(cin, text);
    cout << text << endl;

    string s;
    istringstream tss(text);
    while (getline(tss, s, '.')) {
        cout << s << endl;
    }




    /*
    vector<string> vs;
    string s;

    while (getline(cin, s, '.')) {
        vs.push_back(s);
    }

    for (auto sentence : vs) {
        cout << sentence << endl;
    }
    */

    /*
    string str;
    char word = '\0', word2 = '\0', sent = '\0', sent2 = '\0';
    int counter = 0;
 
    cout << "Введите текст : ";
    getline(cin, str);
    cout << "Ваш текст : " << str << "\n";
 
    for (int i = 0; i < 80; i++)
    {
        if (str[i] < '.')
        {
            sent += str[i];
            if (sent != ' ') word += sent;
        }
 
        else if (str[i] > '.')
        {
            sent2 += str[i];
            if (sent != ' ') word2 += sent2;
        }
 
        int sravn();
    }
 
    cout << sravn(word,word2,0) << endl;
*/ 
    return 0;
}

