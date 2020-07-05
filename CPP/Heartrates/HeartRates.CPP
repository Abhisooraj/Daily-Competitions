// A C++ program that prompts for the person’s informations then calculates and prints the person’s age in (years), maximum heart rate and target-heart-rate range.
// iostream header file to perform input and output in the given program
#include<iostream>
// string header file to perform string operations
#include <string>
// using this library a string can be read
#include <sstream>
// program uses names from the std name-space
using namespace std;
// defining a class HeartRates
class HeartRates
{
	// Access modifier
	public:
        // constructor and function declaration
		HeartRates ( string fname, string lname, int mm, int dd, int yy );
		void setFirstName ( string fname);
		string getFirstName ();
		void setLastName (string lname);
		string getLastName ();
		void setMonthOfBirth (int mm);
		int getMonthOfBirth ();
		void setDayOfBirth (int dd);
		int getDayOfBirth ();
		void setYearOfBirth(int yy);
		int getYearOfBirth();
		int getAge();
		int getMaximumHeartRate();
		string getTargetHeartRate();
		int bmi_caluculator();
        // access modifier
	private:
	    // variable declarations
		string firstName;
		string lastName;
		int dayOfBirth;
		int monthOfBirth;
		int yearOfBirth;
};
// In C++ programming templates are used for type casting, templates allows a function or class to work on various data types without being rewritten for each one.
template <typename T>
std::string toString(T val)
{
	std::ostringstream oss;
	oss << val;
	return oss.str();
}
//// Constructor 'scope resolution operator (::) because accessing the class members outside the class'
HeartRates::HeartRates ( string fname, string lname, int mm, int dd, int yy )
{
	setFirstName(fname);
	setLastName(lname);
	setMonthOfBirth(mm);
	setDayOfBirth(dd);
	setYearOfBirth(yy);
}
// set the first name
void HeartRates::setFirstName ( string fname)
{
	firstName = fname;
}
// get the first name
string HeartRates::getFirstName ()
{
	return firstName;
}
// set the last name
void HeartRates::setLastName (string lname)
{
	lastName = lname;
}
// get the last name
string HeartRates::getLastName ()
{
	return lastName;
}
// set the month of the birth
void HeartRates::setMonthOfBirth (int mm)
{
	monthOfBirth = mm;
}
// get the month of the birth
int HeartRates::getMonthOfBirth ()
{
	return monthOfBirth;
}
// set the date of the birth
void HeartRates::setDayOfBirth (int dd)
{
	dayOfBirth = dd;
}
// get the date of the birth
int HeartRates::getDayOfBirth ()
{
	return dayOfBirth;
}
// set the year of the birth
void HeartRates::setYearOfBirth(int yy)
{
	yearOfBirth = yy;
}
// get the year of the birth
int HeartRates::getYearOfBirth()
{
	return yearOfBirth;
}
// evaluate the age of the user
int HeartRates::getAge()
{
	int delta = 0;
	// Accept the current date from the user
	int month, day, year;
	cout << "Enter current date: "<<endl;
	cout<<"Enter month: ";cin>>month;
	cout<<"Enter date: ";cin>>day;
	cout<<"Enter year: ";cin>>year;
	// decide if birthday this year passed
	if (getMonthOfBirth() > month) delta = -1;
	if ((getMonthOfBirth() == month) && (getDayOfBirth() > day)) delta  = -1;
	return (year - getYearOfBirth() + delta);
}
// Evaluate the maximum heart rate for the user
int HeartRates::getMaximumHeartRate()
{
	return (220 - getAge());
}
// Evaluate the target heart rate for the user
string HeartRates::getTargetHeartRate()
{
	int max;
	max = getMaximumHeartRate();
	string lowrate, highrate;
	lowrate = toString(max * 50 / 100);
	highrate = toString(max * 85 / 100);
	return (lowrate + "-" + highrate);
}
// BMI Calculator
int HeartRates :: bmi_caluculator()
{
    // variable declaration
    float mass;
    float height;
    float bmi;

    cout<<endl<<"BMI CALCULATOR"<<endl<<endl;
    cout<<"BMI VALUES: "<<endl;
    cout<<"Underweight:Less than 18.5"<<endl<<"Normal:between 18.5 & 24.9"<<endl;
    cout<<"Overweight: between 25 & 29"<<endl<<"Obese: 30 or greater"<<endl;
    // Accept the mass and weight from the user
    cout<<"Enter the Mass(in Kg): ";cin>>mass;
    cout<<"Enter the Height (in Meter): ";cin>>height;
    // evaluate the BMI
    bmi = mass/(height*height);
    cout<<endl<<"The BMI is: " << bmi<<endl;
}
int main()
{
	// accept the first name, last name and date of birth from the user
	string fname, lname;
	int mm, dd, yy;
	cout<<"Enter first name: ";cin>>fname;
	cout<<"Enter last name: ";cin>>lname;
	cout<<"\nEnter Date of Birth"<<endl;
	cout<<"Enter month: ";cin>>mm;
	cout<<"Enter date: ";cin>>dd;
	cout<<"Enter year: ";cin>>yy;
    // Create an object, and print the values 'name, birthday, age in years, maximum heart rate and target heart rate
	HeartRates person1( fname, lname, mm, dd, yy);
	cout << "Your name is " << person1.getFirstName() << " " << person1.getLastName() <<
		". Your birthday is " << person1.getMonthOfBirth() << "/" << person1.getDayOfBirth() <<
		"/" << person1.getYearOfBirth() << endl;
	cout << "Your age is " << person1.getAge() << " years!" << endl;
	cout << "Your maximum heart rate is " << person1.getMaximumHeartRate() << endl;
	cout << "Your target heart rate is " << person1.getTargetHeartRate() << endl;
	person1.bmi_caluculator();
}
