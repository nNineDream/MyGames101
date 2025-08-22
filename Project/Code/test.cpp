#include <iostream>
#include <cmath>
#include <Eigen/Dense>

int main(){
    float a = 1.0f, b = 2.0f;
    std::cout << "TEST!!!!!!!!!!" << std::endl;
    std::cout << a << std::endl;
    std::cout << a / b << std::endl;
    std::cout << std::sqrt(a) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0 / 180.0 * std::acos(-1)) << std::endl;

    return 0;
}
