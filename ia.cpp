#include <vector>
#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
    vector<double> array(10);
    vector<double> index(10);
    for(int k = 0; k < array.size(); ++k){
        array[k] = (rand()%100+0)/1000.0;
        index[k] = k/10.0;
        cout << array[k] << endl;
    }
 
    cout << endl;
 
    for(int i = 0; i < array.size(); ++i)
        cout << array[index[i]*10] << endl;

    return 0;
}

