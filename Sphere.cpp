#include "Sphere.h"
#include <cmath>
#include <iostream>

Sphere::Sphere(float radius_) : radius(radius_) {}

void Sphere::CalculateVolume(){
    SetVolume((4*M_PI*radius*radius*radius)/3);
}

void Sphere::Scale(float ScaleFactor){
    radius*=ScaleFactor;
    CalculateVolume();
}

void Sphere::ShowInfo(){
    std::cout<<"I am "<<GetName()<<" !"<<std::endl;
    std::cout<<"    My Volume = "<<GetVolume()<<std::endl;
    std::cout<<"    My Radius = "<<radius<<std::endl;
}


std::string Sphere::GetName(){
    return "Sphere";
}

