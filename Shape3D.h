#include "Shape.h"

#ifndef SHAPE3D_H
#define SHAPE3D_H

class Shape3D : public Shape {
private:
    virtual void CalculateVolume() = 0; 
    float volume = 0;
public:
    float GetVolume() const;
    void SetVolume(float volume_);
    bool operator>(const Shape3D& other) const;
    bool operator<(const Shape3D& other) const;
    bool operator==(const Shape3D& other) const;
};

#endif
