#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
class vector
{
private:
    int x, y, z;
public:
    vector(): x(0), y(0), z(0) // обычный конструктор
    {}
    vector(int x1, int y1, int z1): x(x1), y(y1), z(z1) // перегруженный конструктор
    {}
 
    void vvod()
    {
        cout << "Введите вектор (x, y, z): ";
        cin >> x >> y >> z;
    }
 
    void vivod()
    {
        cout << "вектор (x, y, z): " << "{" << x << "; " << y << "; " << z << "}" << endl;
    }
 
vector operator + (vector a) // возвращаемый тип_ ключевое слово operator_ операция_ (список аргументов)
    {
    vector k;
    k.x = x + a.x;
    k.y = y + a.y;
    k.z = z + a.z;
    return k;
    }
 
int operator * (vector v1) // возвращаемый тип_ ключевое слово operator_ операция_ (список аргументов)
{
    return x*v1.x + y*v1.y + z*v1.z;
}
};
 
int main()
{
    setlocale(LC_ALL, "rus");
    vector obj;
    obj.vvod();
    obj.vivod();
 
    vector obj1(2, 4, 3);
    cout << "сумма векторов: ";
    vector k = obj + obj1;
    k.vivod();
    cout << endl;
    cout << "скалярное произведние векторов: ";
    int p = obj * obj1;
    cout << p << endl;
 
    return 0;
}
