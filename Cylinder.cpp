#include "Cylinder.h"
#include <iostream>


Cylinder::Cylinder(float height_,Circle base3D_) : height(height_) , base3D(base3D_) {}


void Cylinder::CalculateVolume(){
    base3D.CalculateArea();
    SetVolume(base3D.GetArea()*height);
}



void Cylinder::Scale(float ScaleFactor){
    height*=ScaleFactor;
    base3D.Scale(ScaleFactor);
    CalculateVolume();
}

void Cylinder::ShowInfo(){
    std::cout<<"I am "<<GetName()<<" !"<<std::endl;
    std::cout<<"    My Volume = "<<GetVolume()<<std::endl;
    std::cout<<"    My base3D area = "<<base3D.GetArea()<<std::endl;
    std::cout<<"    My height = "<<height<<std::endl;
}


std::string Cylinder::GetName(){
    return "Cylinder";
}