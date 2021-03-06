#include <iostream>
using namespace std;
class circle
{
    double radius;

public:
    circle(double radius)
    {
        this->radius = radius; //to avoid ambiguity we use this->.... It specify that parameter of circle will be assigned to radius variable
        // This keyword is used when parameter var and the var in which parameter is about to be used are same
        //To distinguish ambiguity we use this keyword
    }
    double area();
    double circum();
};
double circle::area()
{
    return 3.14 * radius * radius;
}
double circle::circum()
{
    return 2 * 3.14 * radius;
};

int main()
{
    circle c1(3.14);
    cout << c1.area() << endl;
    cout << c1.circum() << endl;
}