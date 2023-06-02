// C++ program to demonstrate how we will calculate
// the area of shapes USING VIRTUAL FUNCTION
#include <fstream>
#include <iostream>
#include <rclcpp/rclcpp.hpp>

#include <rclcpp_sample/shapes.hpp>

using namespace std;

// Declaration of Base class
void Shape::calculate()
{
  cout << "Area of your Shape ";
}
// usage of virtual Destuctor to avoid memory leak
Shape::~Shape()
{
  cout << "Shape Destuctor Call\n";
}

void Rectangle::calculate()
{
  cout << "Enter Width of Rectangle: ";
  cin >> width;

  cout << "Enter Height of Rectangle: ";
  cin >> height;

  area = height * width;
  cout << "Area of Rectangle: " << area << "\n";
}

Rectangle::~Rectangle()
{
  cout << "Rectangle Destuctor Call\n";
}

void Square::calculate()
{
  cout << "Enter one side your of Square: ";
  cin >> side;

  area = side * side;
  cout << "Area of Square: " << area << "\n";
}

Square::~Square()
{
  cout << "Square Destuctor Call\n";
}
