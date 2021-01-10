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
  Square s(length);
  cout << "\nSquare with length " << length << "'s area is " << s.area();
  cout << endl;
  cout << "\nPress any key to continue: ";
  getch();
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
  Rectangle r(length, width);
  cout << "\nRectangle with length " << length << " and width ";
  cout << width << "'s area is " << r.area() << endl;
  cout << "\nPress any key to continue: ";
  getch();
}

void CircleInterface() {
  system("cls");
  cout << "What would you like to make your circle's radius?: ";
  double radius;
  cin >> radius;
  while(cin.fail()) {
    radius = ErrorHandling();
  }
  Circle c(radius);
  cout << "\nCircle with radius " << radius << " and diameter ";
  cout << c.diameter() << "'s circumference is " << c.circumference();
  cout << " and area is " << c.area() << endl;
  cout << "\nPress any key to continue: ";
  getch();
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
  Triangle t(a, b, c);
  cout << "\nTriangle with side a " << a << ", side b ";
  cout << b << " and side c " << c <<"'s area is ";
  cout << t.area() << endl;
  cout << "\nPress any key to continue: ";
  getch();
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
  RightTriangle rt(base, height);
  cout << "\nRight Triangle with base " << base << ", height ";
  cout << height << ", and hypotenuse " << rt.hypotenuse();
  cout << "'s area is " << rt.area() << endl;
  cout << "\nPress any key to continue: ";
  getch();
}

void CubeInterface() {
  system("cls");
  cout << "What length would you like to make your cube's edges?: ";
  double length;
  cin >> length;
  while(cin.fail()) {
    length = ErrorHandling();
  }
  Cube c(length);
  cout << "\nCube with length " << length << ", width ";
  cout << c.width() << ", and height " << c.height();
  cout << "'s side areas are ";
  vector<double> sides = c.side_areas();
  for (const double &each: sides) {
    cout << each << ", ";
  }
  cout << "surface area " << c.surface_area() << ", and volume ";
  cout << c.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
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
  RectangularPrism r(length, width, height);
  cout << "\nRectangular Prism with length " << length << ", width ";
  cout << width << ", and height " << height << "'s side areas are ";
  vector<double> sides = r.side_areas();
  for (const double &each: sides) {
    cout << each << ", ";
  }
  cout << "surface area " << r.surface_area() << ", and volume ";
  cout << r.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
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
  TriangularPrism t(a, b, c, depth);
  cout << "\nTriangular Prism with side a " << a << ", side b ";
  cout << b << ", side c " << c << ", and depth " << depth;
  cout << "'s side areas are ";
  vector<double> sides = t.side_areas();
  for (const double &each: sides) {
    cout << each << ", ";
  }
  cout << "surface area " << t.surface_area() << ", and volume ";
  cout << t.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
}

void SphereInterface() {
  system("cls");
  cout << "What would you like to make the radius of your sphere?: ";
  double radius;
  cin >> radius;
  while(cin.fail()) {
    radius = ErrorHandling();
  }
  Sphere sp(radius);
  cout << "\nSphere with radius " << sp.radius() << " and diameter ";
  cout << sp.diameter() << "'s surface area is " << sp.surface_area();
  cout << " and volume is " << sp.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
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
  Cylinder c(radius, height);
  cout << "\nCylinder with radius " << radius << ", height ";
  cout << height << ", and diameter " << c.diameter();
  cout << "'s circumference is " << c.circumference() << ", side areas are ";
  vector<double> sides = c.side_areas();
  for (const double &each: sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << c.surface_area() << ", and volume is ";
  cout << c.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
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
  Cone c(radius, height);
  cout << "\nCone with radius " << radius << ", height ";
  cout << height << ", and diameter " << c.diameter();
  cout << "'s base circumference is " << c.circumference();
  cout << ", angle with base is " << c.base_angle();
  cout << " degrees, side areas are ";
  vector<double> sides = c.side_areas();
  for (const double &each: sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << c.surface_area() << ", and volume is ";
  cout << c.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
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
  SquarePyramid p(length, height);
  cout << "\nSquare Pyramid with length " << length << ", height ";
  cout << height << "'s angle with base is " << p.base_angle();
  cout << " degrees, side areas are ";
  vector<double> sides = p.side_areas();
  for (const double &each: sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << p.surface_area() << ", and volume is ";
  cout << p.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
}

void TriangularPyramidInterface() {
  system("cls");
  cout << "What length would you like to make your pyramid bases's side a?: ";
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
  TriangularPyramid p(a, b, c, height);
  cout << "\nTriangular Pyramid with side a " << a << ", side b ";
  cout << b << ", side c " << c << ", and height " << height;
  cout << "'s side areas are ";
  vector<double> sides = p.side_areas();
  for (const double &each: sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << p.surface_area() << ", and volume is ";
  cout << p.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
}

void EquilateralTriangularPyramidInterface() {
  system("cls");
  cout << "What length would you like to make your pyramid bases's side?: ";
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
  EquilateralTriangularPyramid p(length, height);
  cout << "\nEquilateral Triangular Pyramid with length " << length;
  cout << " and height " << height << "'s angle with it's base is ";
  cout << p.base_angle() << " degrees, side areas are ";
  vector<double> sides = p.side_areas();
  for (const double &each: sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << p.surface_area() << ", and volume is ";
  cout << p.volume() << endl;
  cout << "\nPress any key to continue: ";
  getch();
}

void RepeatInterface() {
  system("cls");
  cout << "Would you like to repeat computations? Enter y if so: ";
  char repeat;
  cin >> repeat;
  if(cin.fail()) {
    cin.clear();
    cin.ignore();
  }
  else if(repeat == 'y' || repeat == 'Y') {
    Interface();
  }
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