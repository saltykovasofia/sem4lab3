#include "Square.h"
#include <iostream>

Square::Square(float side_) : side(side_) {}

void Square::CalculateArea(){
    SetArea(side*side);
    // area = (side)*(side);
    // std::cout<<(side)*(side)<<std::endl;
}

void Square::Scale(float ScaleFactor){
    side *= ScaleFactor;
    CalculateArea();
}

void Square::ShowInfo(){
    std::cout<<"I am "<<GetName()<<" !"<<std::endl;
    std::cout<<"    My area = "<<GetArea()<<std::endl;
    std::cout<<"    My side = "<<side<<std::endl;
}

std::string Square::GetName(){
    return "Square";
}