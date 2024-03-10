#include "Shape3D.h"


float Shape3D::GetVolume() const{
    return volume;
}

void Shape3D::SetVolume(float volume_){
    if(volume_ < 0)return;
    volume = volume_;
}

bool Shape3D::operator>(const Shape3D& other) const {
    return GetVolume() > other.GetVolume();
}

bool Shape3D::operator<(const Shape3D& other) const {
    return GetVolume() < other.GetVolume();
}

bool Shape3D::operator==(const Shape3D& other) const {
    return GetVolume() == other.GetVolume();
}

