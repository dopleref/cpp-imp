#include<iostream>
#include<stdio.h>
#include<cstring>
 
using namespace std;
 
int main()
{
    char symbol[100], s[100], *p, k[100], BANKA[1000];
    int j = 0, i = 0, pos = 0;
 
 
    cout << "Enter text: ";
    cin.getline(symbol, 100);
 
     
 
    while (1)
    {
        cout << "Enter word which your want change: ";
        cin.getline(s, 100);
 
        cout << "Enter word on to which your want his to change: ";
        cin.getline(k, 100);
 
        for (i = 0; symbol[i]; i++)
        {
            for (j = 0; symbol[i + j] && s[j]; j++)
                if (symbol[i + j] != s[j])
                    break;
            if (!s[j])
            {
                i += j-1;
                for (j = 0; k[j]; j++)
                    BANKA[pos++] = k[j];
            }
            else
            {
                BANKA[pos++] = symbol[i];
            }
            BANKA[pos] = NULL;
        }
         
        strcpy(symbol, BANKA);
        memset(BANKA, 0, sizeof(BANKA));
        pos = 0;
                    
        cout << "\nAfter change: " << symbol << endl;

    }
     
         
    system("pause");
}

