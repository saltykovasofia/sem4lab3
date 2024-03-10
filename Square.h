#include "Shape2D.h"

class Square : public Shape2D {
private:
    float side;
public:
    Square(float side);
    void CalculateArea() override;
    void Scale(float ScaleFactor) override;
    void ShowInfo() override;
    std::string GetName() override;
};