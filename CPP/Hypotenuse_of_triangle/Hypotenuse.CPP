// A C++ program that calculates the hypotenuse of a right triangle when the other two sides are given.
// header file to perform input and output in the given program
#include <iostream>
// to prompt the table
#include <iomanip>
// use the math library functions
#include <cmath>
// program uses names from the std name-space
using namespace std;
// function declaration
double calculateHypotenuse( double, double);
// Global variable declaration
double side1;
double side2;
double hypotenuse;
// the main function begins from here
int main()
{
    // Evaluate the Hypotenuse and print the results
    cout<<"calculates the Hypotenuse of a right triangle "<<endl;
    cout << "Triangle\tSide1\tSide2\tHypotenuse\n";
    cout << "1\t" << "\t3.0" << setprecision( 1 ) << "\t4.0"<< setprecision( 2 ) << "\t" << calculateHypotenuse( 3.0, 4.0 ) << endl;
    cout << "2\t" << "\t5.0" << setprecision( 1 ) << "\t12.0"<< setprecision( 2 ) << "\t" << calculateHypotenuse( 5.0, 12.0 ) << endl;
    cout << "3\t" << "\t8.0" << setprecision( 1 ) << "\t15.0" << setprecision( 2 ) << "\t" << calculateHypotenuse( 8.0, 15.0 ) << endl;

    return 0;
}

//calculate Hypotenuse function
double calculateHypotenuse( double side1, double side2 )
{
    // evaluate the hypotenuse
    hypotenuse = sqrt(side1 * side1 + side2 * side2);
    //return the result
    return hypotenuse;
}
