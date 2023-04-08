// Sheet 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
   //std::cout << "Hello World!\n";


    /*
   // Problem 1 & 2
    float bus#1;
    char ch = 'mxyz'
    int 115LLX;
    double sue’s = $155.75;

    char c='d';
    char c=’100’;
    double $x=15.0;
    int ah#1=$155;
    float 112ffx=100;
    */


    /*
    //Problem 5
    int x = 3;
    int y = 4;
    int z = 5;

    std::cout << "floor of " << 3.25 << " = " << (floor(3.25)) << std::endl;
    std::cout << "Ceil of " << 3.25 << " = " << (ceil(3.25)) << std::endl;

    std::cout << "x > y || y < z = " << ((x>y) || (y < z)) << std::endl;
    std::cout << "x% y + z == x + z = " << ((x % y + z) == (x + z)) << std::endl;
    std::cout << "x / y + ++z = " << (x / y + ++z) << std::endl;
    std::cout << "(int)sqrt(floor(fabs(-144.45))) + (int)ceil(48.55) % 7>10 = " << ((int)sqrt(floor(fabs(-144.45))) + (int)ceil(48.55) % 7 > 10) << std::endl;
    std::cout << "(double)(x / y) + z = " << ((double)(x / y) + z) << std::endl;
    std::cout << "!(y <= 2) && x % 2 == 0 = " << (!(y <= 2) && x % 2 == 0) << std::endl;
    */


    /*
    //Problem 6
    double b;
    double c;
    double xd; //angle in degrees
    double xr; // angle in radians
    double Ans;

    const double pi = 3.14159;

    std::cout << "Insert the 2 sides \n";
    std::cin >> b;
    std::cin >> c;

    std::cout << "Insert the angle in degrees\n";
    std::cin >> xd;

    xr = xd * pi / 180;

    Ans = sqrt(b * b + pow(c, 2) - 2 * b * c * cos(xr));
    std::cout << "Answer is " << Ans << std::endl;
    */


    /*
    // Problem 7
    double x = 12.5;
    double y = 9.2;
    int m = 5;
    int n = 2;
    float A;
    double B;

    A = x / m;
    std::cout << "x / m = " << A << std::endl;

    B = (m * n);
    std::cout << "(m * n) = " << B << std::endl;

    A = (m / n) + y;
    std::cout << "(m / n) + y = " << A << std::endl;

    B = n / m + y;
    std::cout << "n / m + y = " << B << std::endl;
    */
    


    /*
   //Problem 8
   double dist_meter;
   double dist_feet;

   std::cout << "Please insert the distance in feet\n";
   std::cin >> dist_feet;

   dist_meter = 0.3048 * dist_feet;

   std::cout << "Distance in meters is " << dist_meter << std::endl;
   */


   /*
   // Problem 9
    int x=10;
    int y=5;
    int z=20;
    int A;

    A = x + y - z / 2;
    std::cout << "A =" << A << std::endl;

    A = x * (y % 2);
    std::cout << "A =" << A << std::endl;

    A = x++ - y++;
    std::cout << "A =" << A << std::endl;

    A = --z + z--;
    std::cout << "A =" << A << std::endl;

    A = --y + ++z - y++ / x++;
    std::cout << "A =" << A << std::endl;
    */

    /*
    // Problem 10
    int x = 15; 
    int y = 2; 
    int z; 
    float r; 
    z = x / y; 
    std::cout << z << std::endl;
    r = x / y; 
    std::cout << r << std::endl; 
    r = x / float(y); 
    std::cout << r << std::endl; 
    r = x / (y * 1.0); 
    std::cout << r << std::endl;
    */

    /*
    //Problem 12
    char ascii_char;

    std::cout << "Insert Ascii character\n";
    std::cin >> ascii_char;

    std::cout << "The character " << ascii_char << " in decimal : " << std::dec << int(ascii_char) << '\n';
    std::cout << "The character " << ascii_char << " in hexadecimal : "
              << std::hex << int(ascii_char) << '\n';
    */


   /*
    // Problem 13
    std::cout << "1990" << std::setw(4) << "135" << "\n";
    std::cout << "1991" << std::setw(5) << "7290" << "\n";
    std::cout << "1992" << std::setw(6) << "11300" << "\n";
    std::cout << "1993" << std::setw(6) << "162000" << "\n";
   */

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
