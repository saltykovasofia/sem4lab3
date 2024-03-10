#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(float radius_) : radius(radius_) {}

void Circle::CalculateArea(){
    SetArea(radius*radius*M_PI);
    // area = radius*radius*M_PI;
    // std::cout<<(side)*(side)<<std::endl;
}

void Circle::Scale(float ScaleFactor){
    radius *= ScaleFactor;
    CalculateArea();
}

void Circle::ShowInfo(){
    std::cout<<"I am "<<GetName()<<" !"<<std::endl;
    std::cout<<"    My area = "<<GetArea()<<std::endl;
    std::cout<<"    My radius = "<<radius<<std::endl;
}

std::string Circle::GetName(){
    return "Circle";
}