#include <cmath>
#include <iostream>

struct dpoint {
    double x;
    double y;
    double z;
};

struct spoint {
    double r;
    double fi;
    double t;
};

// декартовы в сферические
spoint descToSph(const dpoint& dp) {
    spoint sp;
    sp.r = std::pow((dp.x*dp.x + dp.y*dp.y + dp.z*dp.z), 0.5);
    sp.t = std::atan(std::pow((dp.x * dp.x + dp.y * dp.y), 0.5) / dp.z);
    sp.fi = std::atan(dp.y / dp.x);
    return sp;
}

// сферическая в декартову
dpoint sphToDesc(const spoint& sp) {
    dpoint dp;
    dp.x = sp.r * std::sin(sp.t) * std::cos(sp.fi);
    dp.y = sp.r * std::sin(sp.t) * std::sin(sp.fi);
    dp.z = sp.r * std::cos(sp.t);
    return dp;
}

int main() {
    dpoint a;
    spoint b;
    a.x = 3;
    a.y = 4;
    a.z = 8;
    std::cout << "a: " << a.x << ", " << a.y << ", " << a.z << std::endl;
    b = descToSph(a);
    std::cout << "b: " << b.r << ", " << b.fi << ", " << b.t << std::endl;
    a = sphToDesc(b);
    std::cout << "a: " << a.x << ", " << a.y  << ", " << a.z << std::endl;
    return 0;
}

