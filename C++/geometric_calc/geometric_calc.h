#pragma once

#include <vector>
using std::vector;

class Square {
  public:
    Square(double l): length_(l) {};
    double length() const { return length_; }
    double area();
  private:
    double length_;
};

class Rectangle {
  public:
    Rectangle(double l, double w): length_(l), width_(w) {};
    double length() const { return length_; }
    double width() const { return width_; }
    double area();
  private:
    double length_;
    double width_;
};

class Circle {
  public:
    Circle(double r): radius_(r) {};
    double radius() const { return radius_; }
    double diameter();
    double circumference();
    double area();
  private:
    double radius_;
};

class Triangle {
  public:
    Triangle(double a, double b, double c): a_(a), b_(b), c_(c) {};
    double a() const { return a_; }
    double b() const { return b_; }
    double c() const { return c_; }
    double area();
  private:
    double a_;
    double b_;
    double c_;
};

class RightTriangle {
  public:
    RightTriangle(double a, double b): a_(a), b_(b) {};
    double a() const { return a_; }
    double b() const { return b_; }
    double hypotenuse();
    double area();
  private:
    double a_;
    double b_;
};

class Cube {
  public:
    Cube(double l): length_(l) {};
    double length() const { return length_; }
    double width() const { return length_; }
    double height() const { return length_; }
    vector<double> side_areas();
    double surface_area();
    double volume();
  private:
    double length_;
};

class RectangularPrism {
  public:
    RectangularPrism(double l, double w, double h): length_(l), width_(w), height_(h) {};
    double length() const { return length_; }
    double width() const { return width_; }
    double height() const { return height_; }
    vector<double> side_areas();
    double surface_area();
    double volume();
  private:
    double length_;
    double width_;
    double height_;
};

class TriangularPrism {
  public:
    TriangularPrism(double a, double b, double c, double d): a_(a), b_(b), c_(c), depth_(d) {};
    double a() const { return a_; }
    double b() const { return b_; }
    double c() const { return c_; }
    double depth() const { return depth_; }
    vector<double> side_areas();
    double surface_area();
    double volume();
  private:
    double a_;
    double b_;
    double c_;
    double depth_;
};

class Sphere {
  public:
    Sphere(double r): radius_(r) {};
    double radius() const { return radius_; }
    double diameter();
    double surface_area();
    double volume();
  private:
    double radius_;
    const double PI = 3.14159265359;
};

class Cylinder {
  public:
    Cylinder(double r, double h): radius_(r), height_(h) {};
    double radius() const { return radius_; }
    double height() const { return height_; }
    double diameter();
    double circumference();
    vector<double> side_areas();
    double surface_area();
    double volume();
  private:
    double radius_;
    double height_;
};

class Cone {
  public:
    Cone(double r, double h): radius_(r), height_(h) {};
    double radius() const { return radius_; }
    double height() const { return height_; }
    double diameter();
    double circumference();
    double base_angle();
    vector<double> side_areas();
    double surface_area();
    double volume();
  private:
    double radius_;
    double height_;
    const double PI = 3.14159265359;
};

class SquarePyramid {
  public:
    SquarePyramid(double l, double h): length_(l), height_(h) {};
    double length() const { return length_; }
    double height() const { return height_; }
    double base_angle();
    vector<double> side_areas();
    double surface_area();
    double volume();
  private:
    double length_;
    double height_;
};

class TriangularPyramid {
  public:
    TriangularPyramid(double a, double b, double c, double h): a_(a), b_(b), c_(c), height_(h) {};
    double a() const { return a_; }
    double b() const { return b_; }
    double c() const { return c_; }
    double height() const { return height_; }
    vector<double> side_areas();
    double surface_area();
    double volume();
  private:
    double a_;
    double b_;
    double c_;
    double height_;
};

class EquilateralTriangularPyramid {
  public:
    EquilateralTriangularPyramid(double l, double h): length_(l), height_(h) {};
    double length() const { return length_; }
    double height() const { return height_; }
    double base_angle();
    vector<double> side_areas();
    double surface_area();
    double volume();
  private:
    double length_;
    double height_;
};