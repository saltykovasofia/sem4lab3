#include "Shape2D.h"


float Shape2D::GetArea() const{
    return area;
}

void Shape2D::SetArea(float area_){
    if(area_ < 0)return;
    area = area_;
}

bool Shape2D::operator>(const Shape2D& other) const {
    return GetArea() > other.GetArea();
}

bool Shape2D::operator<(const Shape2D& other) const {
    return GetArea() < other.GetArea();
}

bool Shape2D::operator==(const Shape2D& other) const {
    return GetArea() == other.GetArea();
}

