#include <iostream>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle(double pLength, double pWidth){
  length = pLength;
  width = pWidth;
}

double Rectangle::area(){
  double a;
  a = length * width;
  return a;
}