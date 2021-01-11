#include <iostream>
using std::cout, std::endl, std::cin;
#include <conio.h>

#include "interface.h"
#include "geometric_calc.h"

double ErrorHandling() { // Handles Input Errors
  double value;
  while(cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << endl << "Please re-enter a valid number: ";
    cin >> value;
  }
  return value;
}

void SquareInterface() {
  system("cls");
  cout << "What length would you like to make your square's edge?: ";
  double length;
  cin >> length;
  while(cin.fail()) {
    length = ErrorHandling();
  }
  system("cls");
  Square s(length);
  cout << "Square:\nLength: " << s.length() << "\nPerimeter: ";
  cout << s.perimeter() << "\nArea: " << s.area() << endl;
}

void RectangleInterface() {
  system("cls");
  cout << "What length would you like to make your rectangle's edge?: ";
  double length;
  cin >> length;
  while(cin.fail()) {
    length = ErrorHandling();
  }
  cout << "What width would you like to make your rectangle's edge?: ";
  double width;
  cin >> width;
  while(cin.fail()) {
    width = ErrorHandling();
  }
  system("cls");
  Rectangle r(length, width);
  cout << "Rectangle:\nLength: " << r.length() << "\nWidth: " << r.width();
  cout << "\nPerimeter: " << r.perimeter() << "\nArea: " << r.area() << endl;
}

void CircleInterface() {
  system("cls");
  cout << "What would you like to make your circle's radius?: ";
  double radius;
  cin >> radius;
  while(cin.fail()) {
    radius = ErrorHandling();
  }
  system("cls");
  Circle c(radius);
  cout << "Circle:\nRadius: " << c.radius() << "\nDiameter: " << c.diameter();
  cout << "\nCircumference: " << c.circumference() << "\nArea: " << c.area();
  cout << endl;
}

void TriangleInterface() {
  system("cls");
  cout << "What length would you like to make your triangle's side a?: ";
  double a;
  cin >> a;
  while(cin.fail()) {
    a = ErrorHandling();
  }
  cout << "What length would you like to make your triangle's side b?: ";
  double b;
  cin >> b;
  while(cin.fail()) {
    b = ErrorHandling();
  }
  cout << "What length would you like to make your triangle's side c?: ";
  double c;
  cin >> c;
  while(cin.fail()) {
    c = ErrorHandling();
  }
  system("cls");
  Triangle t(a, b, c);
  cout << "Triangle:\nSide a: " << t.a() << "\nSide b: " << t.b();
  cout << "\nSide c: " << t.c() << "\nPerimeter: " << t.perimeter();
  cout << "\nArea: " << t.area() << endl;
}

void RightTriangleInterface() {
  system("cls");
  cout << "What length would you like to make your (right) triangle's base?: ";
  double base;
  cin >> base;
  while(cin.fail()) {
    base = ErrorHandling();
  }
  cout << "What height would you like to make your (right) triangle?: ";
  double height;
  cin >> height;
  while(cin.fail()) {
    height = ErrorHandling();
  }
  system("cls");
  RightTriangle t(base, height);
  cout << "Right Triangle:\nBase: " << t.base() << "\nHeight: " << t.height();
  cout << "\nHypotenuse: " << t.hypotenuse() << "\nPerimeter: ";
  cout << t.perimeter() << "\nArea: " << t.area() << endl;
}

void CubeInterface() {
  system("cls");
  cout << "What length would you like to make your cube's edges?: ";
  double length;
  cin >> length;
  while(cin.fail()) {
    length = ErrorHandling();
  }
  system("cls");
  Cube c(length);
  cout << "Cube:\nLength: " << c.length() << "\nWidth: " << c.width();
  cout << "\nHeight: " << c.height() << "\nSide Areas: ";
  vector<double> sides = c.side_areas();
  for (int i = 0; i < static_cast<int>(sides.size()); ++i) {
    if (i > 0) {
      cout << ", " << sides[i];
    }
    else {
      cout << sides[i];
    }
  }
  cout << "\nSurface area: " << c.surface_area() << "\nVolume: " << c.volume();
  cout << endl;
}

void RectangularPrismInterface() {
  system("cls");
  cout << "What length would you like to make your rectangular prism's ";
  cout << "edge?: ";
  double length;
  cin >> length;
  while(cin.fail()) {
    length = ErrorHandling();
  }
  cout << "What width would you like to make your rectangular prism's ";
  cout << "edge?: ";
  double width;
  cin >> width;
  while(cin.fail()) {
    width = ErrorHandling();
  }
  cout << "What height would you like to make your rectangular prism's ";
  cout << "edge?: ";
  double height;
  cin >> height;
  while(cin.fail()) {
    height = ErrorHandling();
  }
  system("cls");
  RectangularPrism r(length, width, height);
  cout << "Rectangular Prism:\nLength: " << r.length() << "\nWidth: ";
  cout << r.width() << "\nHeight: " << r.height() << "\nSide Areas: ";
  vector<double> sides = r.side_areas();
  for (int i = 0; i < static_cast<int>(sides.size()); ++i) {
    if (i > 0) {
      cout << ", " << sides[i];
    }
    else {
      cout << sides[i];
    }
  }
  cout << "\nSurface Area: " << r.surface_area() << "\nVolume: " << r.volume();
  cout << endl;
}

void TriangularPrismInterface() {
  system("cls");
  cout << "What length would you like to make your triangular prism ";
  cout << "base's side a?: ";
  double a;
  cin >> a;
  while(cin.fail()) {
    a = ErrorHandling();
  }
  cout << "What length would you like to make your triangular prism ";
  cout << "base's side b?: ";
  double b;
  cin >> b;
  while(cin.fail()) {
    b = ErrorHandling();
  }
  cout << "What length would you like to make your triangular prism ";
  cout << "base's side c?: ";
  double c;
  cin >> c;
  while(cin.fail()) {
    c = ErrorHandling();
  }
  cout << "What depth would you like to make your triangular prism?: ";
  double depth;
  cin >> depth;
  while(cin.fail()) {
    depth = ErrorHandling();
  }
  system("cls");
  TriangularPrism t(a, b, c, depth);
  cout << "Triangular Prism:\nBase Side a: " << t.a() << "\nBase Side b: ";
  cout << t.b() << "\nBase Side c: " << t.c() << "\nDepth: " << depth;
  cout << "\nSide Areas: ";
  vector<double> sides = t.side_areas();
  for (int i = 0; i < static_cast<int>(sides.size()); ++i) {
    if (i > 0) {
      cout << ", " << sides[i];
    }
    else {
      cout << sides[i];
    }
  }
  cout << "\nSurface Area: " << t.surface_area() << "\nVolume: " << t.volume();
  cout << endl;
}

void SphereInterface() {
  system("cls");
  cout << "What would you like to make the radius of your sphere?: ";
  double radius;
  cin >> radius;
  while(cin.fail()) {
    radius = ErrorHandling();
  }
  system("cls");
  Sphere s(radius);
  cout << "Sphere:\nRadius: " << s.radius() << "\nDiameter: ";
  cout << s.diameter() << "\nSurface Area: " << s.surface_area();
  cout << "\nVolume: " << s.volume() << endl;
}

void CylinderInterface() {
  system("cls");
  cout << "What would you like the radius of your cylinder's base to be?: ";
  double radius;
  cin >> radius;
  while(cin.fail()) {
    radius = ErrorHandling();
  }
  cout << "What height would you like to make your cylinder?: ";
  double height;
  cin >> height;
  while(cin.fail()) {
    height = ErrorHandling();
  }
  system("cls");
  Cylinder c(radius, height);
  cout << "Cylinder:\nBase Radius: " << c.radius() << "\nHeight: ";
  cout << c.height() << "\nBase Diameter: " << c.diameter();
  cout << "\nCircumference: " << c.circumference() << "\nSide Areas: ";
  vector<double> sides = c.side_areas();
  for (int i = 0; i < static_cast<int>(sides.size()); ++i) {
    if (i > 0) {
      cout << ", " << sides[i];
    }
    else {
      cout << sides[i];
    }
  }
  cout << "\nSurface Area: " << c.surface_area() << "\nVolume: " << c.volume();
  cout << endl;
}

void ConeInterface() {
  system("cls");
  cout << "What would you like the radius of your cone's base to be?: ";
  double radius;
  cin >> radius;
  while(cin.fail()) {
    radius = ErrorHandling();
  }
  cout << "What height would you like to make your cone?: ";
  double height;
  cin >> height;
  while(cin.fail()) {
    height = ErrorHandling();
  }
  system("cls");
  Cone c(radius, height);
  cout << "Cone:\nBase Radius: " << c.radius() << "\nHeight: " << c.height();
  cout << "\nBase Diameter: " << c.diameter() << "\nBase Circumference: ";
  cout << c.circumference() << "\nAngle with Base: " << c.base_angle();
  cout << " degrees\nSide Areas: ";
  vector<double> sides = c.side_areas();
  for (int i = 0; i < static_cast<int>(sides.size()); ++i) {
    if (i > 0) {
      cout << ", " << sides[i];
    }
    else {
      cout << sides[i];
    }
  }
  cout << "\nSurface Area: " << c.surface_area() << "\nVolume: " << c.volume();
  cout << endl;
}

void SquarePyramidInterface() {
  system("cls");
  cout << "What would you like the length of your pyramid's base to be?: ";
  double length;
  cin >> length;
  while(cin.fail()) {
    length = ErrorHandling();
  }
  cout << "What height would you like to make your pyramid?: ";
  double height;
  cin >> height;
  while(cin.fail()) {
    height = ErrorHandling();
  }
  system("cls");
  SquarePyramid p(length, height);
  cout << "Square Pyramid:\nBase Side Length: " << p.length() << "\nHeight: ";
  cout << p.height() << "\nAngle with Base: " << p.base_angle() << " degrees";
  cout << "\nSide Areas: ";
  vector<double> sides = p.side_areas();
  for (int i = 0; i < static_cast<int>(sides.size()); ++i) {
    if (i > 0) {
      cout << ", " << sides[i];
    }
    else {
      cout << sides[i];
    }
  }
  cout << "\nSurface Area: " << p.surface_area() << "\nVolume: " << p.volume();
  cout << endl;
}

void TriangularPyramidInterface() {
  system("cls");
  cout << "What length would you like to make your pyramid base's side a?: ";
  double a;
  cin >> a;
  while(cin.fail()) {
    a = ErrorHandling();
  }
  cout << "What length would you like to make your pyramid base's side b?: ";
  double b;
  cin >> b;
  while(cin.fail()) {
    b = ErrorHandling();
  }
  cout << "What length would you like to make your pyramid bases's side c?: ";
  double c;
  cin >> c;
  while(cin.fail()) {
    c = ErrorHandling();
  }
  cout << "What height would you like to make your pyramid?: ";
  double height;
  cin >> height;
  while(cin.fail()) {
    height = ErrorHandling();
  }
  system("cls");
  TriangularPyramid p(a, b, c, height);
  cout << "Triangular Pyramid:\nBase Side a: " << p.a() << "\nBase Side b: ";
  cout << p.b() << "\nBase Side c: " << p.c() << "\nHeight: " << p.height();
  cout << "\nSide Areas: ";
  vector<double> sides = p.side_areas();
  for (int i = 0; i < static_cast<int>(sides.size()); ++i) {
    if (i > 0) {
      cout << ", " << sides[i];
    }
    else {
      cout << sides[i];
    }
  }
  cout << "\nSurface Area: " << p.surface_area() << "\nVolume: ";
  cout << p.volume() << endl;
}

void EquilateralTriangularPyramidInterface() {
  system("cls");
  cout << "What length would you like to make your pyramid base's side?: ";
  double length;
  cin >> length;
  while(cin.fail()) {
    length = ErrorHandling();
  }
  cout << "What height would you like to make your pyramid?: ";
  double height;
  cin >> height;
  while(cin.fail()) {
    height = ErrorHandling();
  }
  system("cls");
  EquilateralTriangularPyramid p(length, height);
  cout << "Equilateral Triangular Pyramid:\nBase Side Length: " << p.length();
  cout << "\nHeight: " << p.height() << "\nAngle with Base: ";
  cout << p.base_angle() << " degrees\nSide Areas: ";
  vector<double> sides = p.side_areas();
  for (int i = 0; i < static_cast<int>(sides.size()); ++i) {
    if (i > 0) {
      cout << ", " << sides[i];
    }
    else {
      cout << sides[i];
    }
  }
  cout << "\nSurface Area: " << p.surface_area() << "\nVolume: ";
  cout << p.volume() << endl;
}

void RepeatInterface() {
  cout << "\nPress any key to continue: ";
  getch();
  Interface();
}

// Interface Function, exceeds standard function length due to
// a multitude of options.
void Interface() {
  system("cls");
  cout << "Welcome to the Geometric Calculator, enter the designated number ";
  cout << "for the shape you would like to perform computations.\n";
  cout << endl << "\t1 - Square\n\t2 - Rectangle\n\t3 - Circle\n\t4 - ";
  cout << "Triangle\n\t5 - Right Triangle\n\t6 - Cube\n\t7 - Rectangular ";
  cout << "Prism\n\t8 - Triangular Prism\n\t9 - Sphere\n\t10 - Cylinder\n\t";
  cout << "11 - Cone\n\t12 - Square Pyramid\n\t13 - Triangular Pyramid\n\t";
  cout << "14 - Equilateral Triangular Pyramid\n\t15 - Exit\n\n";
  cout << "Enter Here: ";
  int selection;
  cin >> selection;
  while (cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << "Please enter a valid integer: ";
    cin >> selection;
  }
  switch(selection) {
    case 1:
      SquareInterface();
      RepeatInterface();
      break;
    case 2:
      RectangleInterface();
      RepeatInterface();
      break;
    case 3:
      CircleInterface();
      RepeatInterface();
      break;
    case 4:
      TriangleInterface();
      RepeatInterface();
      break;
    case 5:
      RightTriangleInterface();
      RepeatInterface();
      break;
    case 6:
      CubeInterface();
      RepeatInterface();
      break;  
    case 7:
      RectangularPrismInterface();
      RepeatInterface();
      break;
    case 8:
      TriangularPrismInterface();
      RepeatInterface();
      break;
    case 9:
      SphereInterface();
      RepeatInterface();
      break;
    case 10:
      CylinderInterface();
      RepeatInterface();
      break;
    case 11:
      ConeInterface();
      RepeatInterface();
      break;
    case 12:
      SquarePyramidInterface();
      RepeatInterface();
      break;
    case 13:
      TriangularPyramidInterface();
      RepeatInterface();
      break;
    case 14:
      EquilateralTriangularPyramidInterface();
      RepeatInterface();
      break;
    case 15:
      break;
    default:
      cout << "Invalid Option!";
      RepeatInterface();
      break;
  }
}