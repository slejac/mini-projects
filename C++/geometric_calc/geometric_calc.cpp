#include <cmath>
using std::pow, std::atan;
#include <vector>
using std::vector;

#include "geometric_calc.h"

double TriangleArea(double a, double b, double c) {
  double s = a + b + c;
  s /= 2;
  double temp = s * (s - a) * (s - b) * (s - c);
  double area = pow(temp, .5);
  return area;
}

double CircleCircumference(double r) {
  const double PI = 3.14159265359;
  double c = 2 * PI * r;
  return c;
}

double CircleArea(double r) {
  const double PI = 3.14159265359;
  double a = PI * pow(r, 2);
  return a;
}

double AngleCalc(double a, double b) {
  const double PI = 3.14159265359;
  double factor = a/b;
  double radians = atan(factor);
  double degrees = 180 * radians;
  degrees /= PI;
  return degrees;
}

double Square::area() {
  double a = pow(length_, 2);
  return a;
}

double Rectangle::area() {
  double a = length_ * width_;
  return a;
}

double Circle::diameter() {
  double d = radius_ * 2;
  return d;
}

double Circle::circumference() {
  return CircleCircumference(radius_);
}

double Circle::area() {
  return CircleArea(radius_);
}

double Triangle::area() {
  return TriangleArea(a_, b_, c_);
}

double RightTriangle::hypotenuse() {
  double h_squared = pow(a_ , 2) + pow(b_ , 2);
  double h = pow(h_squared, .5);
  return h;
}

double RightTriangle::area() {
  double a = (a_ * b_)/2;
  return a;
}

vector<double> Cube::side_areas() {
  double a = pow(length_, 2);
  vector<double> sides(6, a);
  return sides;
}

double Cube::surface_area() {
  double a = pow(length_, 2) * 6;
  return a;
}

double Cube::volume() {
  double v = pow(length_, 3);
  return v;
}

vector<double> RectangularPrism::side_areas() {
  vector<double> sides;
  sides.push_back(length_ * width_);
  sides.push_back(length_ * width_);
  sides.push_back(length_ * height_);
  sides.push_back(length_ * height_);
  sides.push_back(width_ * height_);
  sides.push_back(width_ * height_);
  return sides;
}

double RectangularPrism::surface_area() {
  double area = length_ * width_;
  area += length_ * height_;
  area += width_ * height_;
  area *= 2;
  return area;
}

double RectangularPrism::volume() {
  double volume = length_ * width_ * height_;
  return volume;
}

vector<double> TriangularPrism::side_areas() {
  double end = TriangleArea(a_, b_, c_);
  vector<double> sides(2, end);
  sides.push_back(a_ * depth_);
  sides.push_back(b_ * depth_);
  sides.push_back(c_ * depth_);
  return sides;
}

double TriangularPrism::surface_area() {
  double a = TriangleArea(a_, b_, c_);
  a *= 2;
  a += a_ * depth_;
  a += b_ * depth_;
  a += c_ * depth_;
  return a;
}

double TriangularPrism::volume() {
  double v = TriangleArea(a_, b_, c_);
  v *= depth_;
  return v;
}

double Sphere::diameter() {
  double d = radius_ * 2;
  return d;
}

double Sphere::surface_area() {
  double temp = pow(radius_, 2);
  double a = 4 * PI * temp;
  return a;
}

double Sphere::volume() {
  double temp = pow(radius_, 3);
  double factor = 4;
  factor /= 3;
  double v = factor * PI * temp;
  return v;
}

double Cylinder::diameter() {
  double d = radius_ * 2;
  return d;
}

double Cylinder::circumference() {
  return CircleCircumference(radius_);
}

vector<double> Cylinder::side_areas() {
  double a = CircleArea(radius_);
  vector<double> sides(2, a);
  double c = CircleCircumference(radius_);
  sides.push_back(c * height_);
  return sides;
}

double Cylinder::surface_area() {
  double end = CircleArea(radius_);
  double temp = CircleCircumference(radius_);
  double a = (2 * end) + (temp * height_);
  return a;
}

double Cylinder::volume() {
  double v = CircleArea(radius_);
  v *= height_;
  return v;
}

double Cone::diameter() {
  double d = radius_ * 2;
  return d;
}

double Cone::circumference() {
  return CircleCircumference(radius_);
}

double Cone::base_angle() {
  return AngleCalc(height_, radius_);
}

vector<double> Cone::side_areas() {
  vector<double> sides;
  sides.push_back(CircleArea(radius_));
  double temp = pow(height_, 2) + pow(radius_, 2);
  double other_area = pow(temp, 0.5);
  other_area *= radius_;
  sides.push_back(other_area * PI);
  return sides;
}

double Cone::surface_area() {
  double end = CircleArea(radius_);
  double temp = pow(height_, 2) + pow(radius_, 2);
  double other_area = pow(temp, 0.5);
  other_area *= radius_;
  double a = end + (other_area * PI);
  return a;
}

double Cone::volume() {
  double temp = pow(radius_, 2);
  double v = PI * temp * height_;
  v /= 3;
  return v;
}

double SquarePyramid::base_angle() {
  double half_leg = length_/2;
  return AngleCalc(height_, half_leg);
}

vector<double> SquarePyramid::side_areas() {
  vector<double> sides;
  double base = pow(length_, 2);
  sides.push_back(base);
  double triangle = (length_ * height_)/2;
  for (int i = 0; i < 4; ++i) {
    sides.push_back(triangle);
  }
  return sides;
}

double SquarePyramid::surface_area() {
  double area = pow(length_, 2);
  double side = (length_ * height_)/2;
  area += (4 * side);
  return area;
}

double SquarePyramid::volume() {
  double temp = pow(length_, 2);
  double v = (temp * height_)/3;
  return v;
}

vector<double> TriangularPyramid::side_areas() {
  vector<double> sides;
  sides.push_back(TriangleArea(a_, b_, c_));
  double temp = (a_ * height_)/2;
  sides.push_back(temp);
  temp = (b_ * height_)/2;
  sides.push_back(temp);
  temp = (c_ * height_)/2;
  sides.push_back(temp);
  return sides;
}

double TriangularPyramid::surface_area() {
  double area = TriangleArea(a_, b_, c_);
  area += (a_ * height_)/2;
  area += (b_ * height_)/2;
  area += (c_ * height_)/2;
  return area;
}

double TriangularPyramid::volume() {
  double v = TriangleArea(a_, b_, c_);
  v *= height_;
  v /= 3;
  return v;
}

double EquilateralTriangularPyramid::base_angle() {
  double half_leg = length_/2;
  return AngleCalc(height_, half_leg);
}

vector<double> EquilateralTriangularPyramid::side_areas() {
  vector<double> sides;
  sides.push_back(TriangleArea(length_, length_, length_));
  double temp = (length_ * height_)/2;
  sides.push_back(temp);
  sides.push_back(temp);
  sides.push_back(temp);
  return sides;
}

double EquilateralTriangularPyramid::surface_area() {
  double area = TriangleArea(length_, length_, length_);
  double side = (length_ * height_)/2;
  area += (side * 3);
  return area;
}

double EquilateralTriangularPyramid::volume() {
  double v = TriangleArea(length_, length_, length_);
  v *= height_;
  v /= 3;
  return v;
}