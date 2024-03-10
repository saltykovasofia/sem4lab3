#include "Shape2D.h"
#ifndef CIRCLE
#define CIRCLE

class Circle : public Shape2D {
private:
    float radius;
public:
    Circle(float radius);
    void CalculateArea() override;
    void Scale(float ScaleFactor) override;
    void ShowInfo() override;
    std::string GetName() override;
};

#endif