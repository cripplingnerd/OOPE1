#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Triangle.h"

int main() {
  Rectangle r1(7, 14);
  
  Triangle t1(12, 10), t2(18, 18);

  
  r1.area();

 
  t1.area();

  
  t2.area();

  cout << r1.area() << endl;
  cout << t1.area() << endl;
  cout << t2.area() << endl;
}