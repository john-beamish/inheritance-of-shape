# inheritance-of-shape
COP 3330 Spring 2023 Assignment 5 Inheritance of Shape
Educational Objectives: 
After completing this assignment the student should have the following knowledge, ability, and skills:

Define a class hierarchy using inheritance
Define virtual member functions in a class hierarchy
Implement a class hierarchy using inheritance
Implement virtual member functions in a class hierarchy
Use initialization lists to call parent class constructors for derived class constructors
Operational Objectives: 
Create (define and implement) a base class Shape classes that will inherit this class called Box, Rectangle, Circle, and Triangle

Description:
              

Programming Specifications:
You will have a base class of Shape which will have an area and perimeter of type double. You must also create acceptable Gets and Sets for the private data items.  All of the other classes will inherit this class. 
You will have a class Square which will have just one length of type double. You should create acceptable Gets and Sets for the one data type.  This class will inherit the base class
You will have a class Circle which will have just one length of type double which will be the radius. You should create acceptable Gets and Sets for the one data type.  This class will inherit the base class
You will have a class Rectangle which will have two lengths of type double. You should create acceptable Gets and Sets for the two data types.  This class will inherit the base class
You will have a class Triangle which will have three lengths of type double. You should create acceptable Gets and Sets for the two data types.  This class will inherit the base class
You will have one virtual Member Function for all of the classes (Square, Rectangle, Circle, and Triangle) which will be called PrintData() which will print the details of the shape. All will have the area and perimeter but Circle will have a radius,  Square will have one side, Rectangle will have two, and the Triangle will have three. 
You should have one constructor for each class which accepts all of the private data items for that class.  
All sizes should be positive double floating point numbers at or above 1.00. There is no maximum size.  If a size is entered less than 1.00 it should default to 1.00.
Write your own main routine to test your class. The test case should encompass using both constructors for each class, ensuring default values are properly used,  and calling each method at least once.
Deliverables:
Tar file containing:
shape.h, shape.cpp
square.h, square.cpp
rectangle.h, rectangle.cpp
circle.h circle.cpp
triangle.h, triangle.cpp
main.cpp
makefile
Required Algorithms
 

Square Perimeter: 
4 * side.

Square Area:  
side*side

Rectangle Perimeter: 
Side1*2 +   Side2*2  

Rectangle Area:  
Side1 * Side2

Circle Area:
Pi * Radius*Radius

Circle Perimeter:
Pi * 2*Radiuis

Triangle Area: 
Assume we know three sides (Side1, Side2, Side3) then the area based on Heron’s formula which gives the area in terms of the three sides of the triangle.   First calculate s which is (Side1 + Side2 + Side3)/2.   Then obtain the square root of the absolute value of following formula: s*(s – Side1)*(s – Side2)*(s – Side3).
