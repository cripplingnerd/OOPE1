#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Triangle.h"

int main() {
  double totArea;
    
  
  Rectangle r1(7, 14);
  
  Triangle t1(12, 10), t2(18, 18);

  
  r1.area();

 
  t1.area();

  
  t2.area();

  totArea = (r1.area() + t1.area() + t2.area());

  cout << "The area of the rectangle: " << r1.area() << endl;
  cout << "The area of the triangle t1: " << t1.area() << endl;
  cout <<"The area of the triangle t2: " << t2.area() << endl;
  cout << "The total area of the composite figure: " << totArea << endl;
}