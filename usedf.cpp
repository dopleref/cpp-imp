#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
 
using namespace std;
 
string GetStdoutFromCommand(string cmd) {
    string data;
    FILE * stream;
    const int max_buffer = 256;
    char buffer[max_buffer];
    cmd.append(" 2>&1");

    stream = popen(cmd.c_str(), "r");
    if (stream) {
    while (!feof(stream))
        if (fgets(buffer, max_buffer, stream) != NULL) data.append(buffer);
    pclose(stream);
    }
    return data;
}
 
int main () {
 
    ofstream f("lol.txt");
 
    string ls = GetStdoutFromCommand(" df -h | grep sdb");

    std::string::size_type found = ls.find_last_of(" ");
    std::cout << ls.substr(found + 1) << std::endl;
    f << ls.substr(found + 1);
 
    //cout << "LS: " << ls << endl;
    //f<<ls<<endl;
    //cout<<ls.size();
 
    return 0;
}

