  #include <iostream>
  #include <cmath>
  using namespace std;

  const double PI = 3.1416;

  // Function declarations
  double calcDistance(double x1, double y1, double x2, double y2);
  double calcRadius(double cx, double cy, double px, double py);
  double calcCircumference(double radius);
  double calcArea(double radius);

  int main() {
      double cx, cy, px, py;

      // Get input from user
      cout << "Enter the center coordinates of the circle (cx, cy): ";
      cin >> cx >> cy;
      cout << "Enter the coordinates of a point on the circumference (px, py): ";
      cin >> px >> py;

      // Calculate properties
      double radius = calcRadius(cx, cy, px, py);
      double circumference = calcCircumference(radius);
      double area = calcArea(radius);

      // Output results
      cout << "Radius: " << radius << endl;
      cout << "Circumference: " << circumference << endl;
      cout << "Area: " << area << endl;

      return 0;
  }

  // Function to calculate distance between two points
  double calcDistance(double x1, double y1, double x2, double y2) {
      return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  }

  // Function to calculate radius
  double calcRadius(double cx, double cy, double px, double py) {
      return calcDistance(cx, cy, px, py);
  }

  // Function to calculate circumference
  double calcCircumference(double radius) {
      return 2 * PI * radius;
  }

  // Function to calculate area
  double calcArea(double radius) {
      return PI * pow(radius, 2);
  }
