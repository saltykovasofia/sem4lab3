#include "Shape3D.h"
#include "Circle.h"

class Cylinder : public Shape3D {
private:
    float height;
    Circle base3D;
public:
    Cylinder(float height_,Circle base3D_);
    void CalculateVolume() override;
    void Scale(float ScaleFactor) override;
    void ShowInfo() override;
    std::string GetName() override;
};