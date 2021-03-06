#include <vector>
#include <iostream>

#include "shape.h"
#include "sphere.h"
#include "cone.h"
#include "cuboid.h"

using namespace std;


int main()
{
    vector<Shape*> shapes;
    shapes.push_back(new Sphere(5, 5, 5, 5));
    shapes.push_back(new Cuboid(-5, 5, -5, 5, 5, 5));
    shapes.push_back(new Cone(5, 5, 5, 5, 5));

    for (unsigned int i = 0; i < shapes.size(); ++i)
        cout << shapes[i] << endl;

    for (unsigned int i = 0; i < shapes.size(); ++i) {
        shapes[i]->move(-5, -10, -5);
        shapes[i]->scale(4);
    }

    for (unsigned int i = 0; i < shapes.size(); ++i)
        cout << shapes[i] << endl;
}