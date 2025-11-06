#include <iostream>
#include<cmath>
using namespace std;
const int π = 3.14;
class Circle {
private:
    double radius;
public:
    Circle(double rad) {
        radius = rad;
    }
    double getRadius() {
        return radius;
    }
    void printCircleInfo(Circle c) {
        double rad = c.getRadius();
        double area = π * pow(rad,rad);
        cout << "Radius: " << rad << endl;
        cout << "Area: " << area;


    }
    
};


int main()
{
    Circle circle(3.1);
    circle.printCircleInfo(circle);

    return 0;
}

