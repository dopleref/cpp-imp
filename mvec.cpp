#include "iostream"
#include <math.h>
using namespace std;
double pi = 3.14159265358979323846;
//создаем класс точка
class Point
{
public:
    double x;
    double y;
    Point();
    ~Point();
 
private:
};
Point::Point()
{
}
 
Point::~Point()
{
}
 
 
double func(Point a, Point b, Point c)
{
//определим кординаты векторов
Point AC;
Point BC;
AC.x = c.x - a.x;
AC.y = c.y - a.y;
BC.x = c.x - b.x;
BC.y = c.y - b.y;
double CosC = (AC.x*BC.x + AC.y*BC.y)/(sqrt(AC.x*AC.x + AC.y*AC.y)*sqrt(BC.x*BC.x + BC.y*BC.y));
//cout « acos(CosC) * 180 / pi« "\n";
return acos( CosC ) * 180 / pi;
}
 
int rez(Point a, Point b, Point c)
{
if (func(a, b, c) > 90 || func(b, c, a) > 90 || func(c, a, b) > 90)
return 1;
else return 0;
}
 
int main()
{
Point a;
Point b;
Point c;
 
cout << "Введите х точки а: ";
cin >> a.x;
cout << "Введите у точки а: ";
cin >> a.y;
cout << "Введите х точки б: ";
cin >> b.x;
cout << "Введите у точки б: ";
cin >> b.y;
cout << "Введите х точки с: ";
cin >> c.x;
cout << "Введите у точки с: ";
cin >> c.y;
 
cout<<"Result: "<<rez( a, b, c)<<"\n";
system("pause");
return 0;
}

