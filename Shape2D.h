#include "Shape.h"

#ifndef SHAPE2D_H
#define SHAPE2D_H

class Shape2D : public Shape {
private:
    virtual void CalculateArea() = 0; 
    float area = 0;
public:
    float GetArea() const;
    void SetArea(float area_);
    bool operator>(const Shape2D& other) const;
    bool operator<(const Shape2D& other) const;
    bool operator==(const Shape2D& other) const;
};

#endif
