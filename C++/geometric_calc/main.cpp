#include "geometric_calc.h"
#include <iostream>
using std::cout, std::endl;

int main() {
  system("cls");
  Square s(6);
  cout << "Square with length " << s.length() << "'s area is " << s.area();
  cout << endl;

  Rectangle r(2, 3);
  cout << "\nRectangle with length " << r.length() << " and width ";
  cout << r.width() << "'s area is " << r.area() << endl;
  
  Circle c(5);
  cout << "\nCircle with radius " << c.radius() << " and diameter ";
  cout << c.diameter() << "'s circumference is " << c.circumference();
  cout << " and area is " << c.area() << endl;
  
  Triangle t(6, 3, 4);
  cout << "\nTriangle with side a " << t.a() << ", side b ";
  cout << t.b() << " and side c " << t.c() <<"'s area is ";
  cout << t.area() << endl;
  
  RightTriangle rt(3, 5);
  cout << "\nRight Triangle with side a " << rt.a() << ", side b ";
  cout << rt.b() << ", and hypotenuse " << rt.hypotenuse();
  cout << "'s area is " << rt.area() << endl;
  
  Cube cu(7);
  cout << "\nCube with length " << cu.length() << ", width ";
  cout << cu.width() << ", and height " << cu.height();
  cout << "'s side areas are ";
  vector<double> cube_sides = cu.side_areas();
  for (const double &each: cube_sides) {
    cout << each << ", ";
  }
  cout << "surface area " << cu.surface_area() << ", and volume ";
  cout << cu.volume() << endl;

  RectangularPrism rp(2, 6, 5);
  cout << "\nRectangular Prism with length " << rp.length() << ", width ";
  cout << rp.width() << ", and height " << rp.height();
  cout << "'s side areas are ";
  vector<double> rectangular_sides = rp.side_areas();
  for (const double &each: rectangular_sides) {
    cout << each << ", ";
  }
  cout << "surface area " << rp.surface_area() << ", and volume ";
  cout << rp.volume() << endl;

  TriangularPrism tp(3, 3, 5, 4);
  cout << "\nTriangular Prism with side a " << tp.a() << ", side b ";
  cout << tp.b() << ", side c " << tp.c() << ", and depth " << tp.depth();
  cout << "'s side areas are ";
  vector<double> triangular_sides = tp.side_areas();
  for (const double &each: triangular_sides) {
    cout << each << ", ";
  }
  cout << "surface area " << tp.surface_area() << ", and volume ";
  cout << tp.volume() << endl;

  Sphere sp(9);
  cout << "\nSphere with radius " << sp.radius() << " and diameter ";
  cout << sp.diameter() << "'s surface area is " << sp.surface_area();
  cout << " and volume is " << sp.volume() << endl;

  Cylinder cy(4, 7);
  cout << "\nCylinder with radius " << cy.radius() << ", height ";
  cout << cy.height() << ", and diameter " << cy.diameter();
  cout << "'s circumference is " << cy.circumference() << ", side areas are ";
  vector<double> cylinder_sides = cy.side_areas();
  for (const double &each: cylinder_sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << cy.surface_area() << ", and volume is ";
  cout << cy.volume() << endl;
  
  Cone co(3, 6);
  cout << "\nCone with radius " << co.radius() << ", height ";
  cout << co.height() << ", and diameter " << co.diameter();
  cout << "'s base circumference is " << co.circumference();
  cout << ", angle with base is " << co.base_angle();
  cout << " degrees, side areas are ";
  vector<double> cone_sides = co.side_areas();
  for (const double &each: cone_sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << co.surface_area() << ", and volume is ";
  cout << co.volume() << endl;

  SquarePyramid sq(6, 5);
  cout << "\nSquare Pyramid with length " << sq.length() << ", height ";
  cout << sq.height() << "'s angle with base is " << sq.base_angle();
  cout << " degrees, side areas are ";
  vector<double> sq_pyramid_sides = sq.side_areas();
  for (const double &each: sq_pyramid_sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << sq.surface_area() << ", and volume is ";
  cout << sq.volume() << endl;

  TriangularPyramid tpy(3, 7, 5, 2);
  cout << "\nTriangular Pyramid with side a " << tpy.a() << ", side b ";
  cout << tpy.b() << ", side c " << tpy.c() << ", and height " << tpy.height();
  cout << "'s side areas are ";
  vector<double> tr_pyramid_sides = tpy.side_areas();
  for (const double &each: tr_pyramid_sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << tpy.surface_area() << ", and volume is ";
  cout << tpy.volume() << endl;

  EquilateralTriangularPyramid etp(4, 8);
  cout << "\nEquilateral Triangular Pyramid with length " << etp.length();
  cout << " and height " << etp.height() << "'s angle with it's base is ";
  cout << etp.base_angle() << " degrees, side areas are ";
  vector<double> eq_tr_pyramid_sides = etp.side_areas();
  for (const double &each: eq_tr_pyramid_sides) {
    cout << each << ", ";
  }
  cout << "surface area is " << etp.surface_area() << ", and volume is ";
  cout << etp.volume() << endl;
}