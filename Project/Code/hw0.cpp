#include<cmath>
#include"<Eigen/Core>"
#include<Eigen/Dense>
#include<iostream>

int main(){
    Eigen::Vector3f p(2.0, 1.0, 1.0); 
    Eigen::Matrix3f R;
    R << cos(M_PI/4), -sin(M_PI/4), 1.0 ,sin(M_PI/4), cos(M_PI/4), 2.0, 0.0, 0.0, 1.0;
    p = R*p;
    std::cout << p << std::endl;
    return 0;
}