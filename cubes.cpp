#include <iostream>
#include <cstdlib>
//#include <conio.h>
#include <ctime>
using namespace std;
int P_array[10] = {};
int C_array[10] = {};
void Intro()
{
    cout << "\nWellcome to the game cubes";
    cout << "\nHere you must throw 2 cubes";
    cout << "\nAnd then win or loose!";
    cout << "\nLet`s start?";
    cout << "\nPress any bottom";
}
bool Who_turns()
{
    int Void = 0;
    Void = rand() % 2;
    return Void;
}
void swipe(int a)
{
    switch (a)
    {
    case 1:
        cout << "\n11111";
        cout << "\n11111";
        cout << "\n11111" << endl;
        break;
    case 2:
        cout << "\n22222";
        cout << "\n22222";
        cout << "\n22222" << endl;
        break;
    case 3:
        cout << "\n33333";
        cout << "\n33333";
        cout << "\n33333" << endl;
        break;
    case 4:
        cout << "\n44444";
        cout << "\n44444";
        cout << "\n44444" << endl;
        break;
    case 5:
        cout << "\n55555";
        cout << "\n55555";
        cout << "\n55555" << endl;
        break;
    case 6:
        cout << "\n66666";
        cout << "\n66666";
        cout << "\n66666" << endl;
        break;
    }
}
void RecursionShow(int y);
void RecursionShow1(int y);
int Turn(int t);
int main()
{
    Intro();
    srand(time(NULL));
    int He_turns = Who_turns();
    int P_count = 0;
    int C_count = 0;
    for (int v = 1; v < 11; ++v)
    {
        //_getch();
        for (int g = 0; g < 2; g++)
        {
            int TurnTurn = Turn(He_turns);
            if (He_turns)
            {
                if (v % 2 == 1)
                {
                    P_array[v - 1 + g] = TurnTurn;
                }
                else
                {
                    P_array[v - 2 + g] = TurnTurn;
                }
                P_count += TurnTurn;
            }
            else
            {
                if (v % 2 == 1)
                {
                    C_array[v - 1 + g] = TurnTurn;
                }
                else 
                {
                    C_array[v - 2 + g] = TurnTurn;
                }
                C_count += TurnTurn;
            }
        }
        He_turns = !He_turns;
    }
    cout << "\nComputers count: "<< C_count;
    RecursionShow(0);
    cout << "\nPlayers count: "<< P_count;
    RecursionShow1(0);
    cout << "\n\nShow results?";
    //_getch();
    if (C_count > P_count)
    {
        cout << "\n----------------";
        cout << "\nComputer win   |";
        cout << "\n----------------";
    }
    else if (C_count == P_count)
    {
        cout << "\n----------------";
        cout << "\nDraw           |";
        cout << "\n----------------";
    }
    else
    {
        cout << "\n----------------";
        cout << "\nYou won        |";
        cout << "\n----------------";
    }
            //_getch();
    return 0;
}
int Turn(int t)
{
    if (t)
    {
        cout << "\nYour turn";
        int v = 1 + rand() % 6;
        swipe(v);
        return v;
    }
    else
    {
        cout << "\nComputers turn";
    
        int v = 1 + rand() % 6;
        swipe(v);
        return v;
    }
}
    void RecursionShow(int y)
    {
        if (y < 10) 
        {
            cout <<endl<<"Array # "<<y+1 <<"  -  "<<C_array[y];
            RecursionShow(y + 1);
        }
        
    }
    void RecursionShow1(int y)
    {
        if (y < 10)
        {
            cout << endl<< "Array # " << y+1<< "  -  " << P_array[y];
            RecursionShow(y + 1);
        }
 
    }

