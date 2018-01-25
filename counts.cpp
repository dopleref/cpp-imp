#include <iostream>
#include <sstream>
#include <string> 
#include <stdio.h>
 
using namespace std;

int main()
{
    char buf[100];
    sprintf_s(buf, "%d", 1);
    cout << buf << endl;
    return 0;
}

