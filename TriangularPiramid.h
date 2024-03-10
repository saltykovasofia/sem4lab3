#include "Shape3D.h"
#include "Triangle.h"

class TriangularPiramid : public Shape3D {
private:
    float height;
    Triangle base3D;
public:
    TriangularPiramid(float height_,Triangle base3D_);
    void CalculateVolume() override;
    void Scale(float ScaleFactor) override;
    void ShowInfo() override;
    std::string GetName() override;
};