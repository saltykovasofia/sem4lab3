#include "Triangle.h"
#include <iostream>

Triangle::Triangle(float base_,float height_) : base(base_),height(height_) {}

void Triangle::CalculateArea(){
    SetArea((base)*(height)/2);

    // area = (base)*(height)/2;
    // std::cout<<(side)*(side)<<std::endl;
}

void Triangle::Scale(float ScaleFactor){
    height *= ScaleFactor;
    base *= ScaleFactor;
    CalculateArea();
}

void Triangle::ShowInfo(){
    std::cout<<"I am "<<GetName()<<" !"<<std::endl;
    std::cout<<"    My area = "<<GetArea()<<std::endl;
    std::cout<<"    My base = "<<base<<std::endl;
    std::cout<<"    My height = "<<height<<std::endl;
}

std::string Triangle::GetName(){
    return "Triangle";
}