#include "Shape3D.h"

class Sphere : public Shape3D {
private:
    float radius;
public:
    Sphere(float radius_);
    void CalculateVolume() override;
    void Scale(float ScaleFactor) override;
    void ShowInfo() override;
    std::string GetName() override;
};