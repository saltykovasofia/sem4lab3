#include "Shape2D.h"

#ifndef TRIANGLE
#define TRIANGLE

class Triangle : public Shape2D {
private:
    float base;
    float height;
public:
    Triangle(float base,float height);
    void CalculateArea() override;
    void Scale(float ScaleFactor) override;
    void ShowInfo() override;
    std::string GetName() override;
};

#endif