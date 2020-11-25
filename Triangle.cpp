#include <iostream>
using namespace std;
#include "Triangle.h"

Triangle::Triangle(double pHeight, double pBase){
  height = pHeight;
  base = pBase;
}

double Triangle::area(){
  double a;
  a = 0.5 * height * base;
  return a;
}