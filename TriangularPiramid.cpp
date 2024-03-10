#include "TriangularPiramid.h"
#include <iostream>

TriangularPiramid::TriangularPiramid(float height_,Triangle base3D_) : height(height_) , base3D(base3D_) {}

void TriangularPiramid::CalculateVolume(){
    base3D.CalculateArea();
    SetVolume(base3D.GetArea()*height/3);
}

void TriangularPiramid::Scale(float ScaleFactor){
    height*=ScaleFactor;
    base3D.Scale(ScaleFactor);
    CalculateVolume();
}

void TriangularPiramid::ShowInfo(){
    std::cout<<"I am "<<GetName()<<" !"<<std::endl;
    std::cout<<"    My Volume = "<<GetVolume()<<std::endl;
    std::cout<<"    My base3D area = "<<base3D.GetArea()<<std::endl;
    std::cout<<"    My height = "<<height<<std::endl;
}


std::string TriangularPiramid::GetName(){
    return "TriangularPiramid";
}

