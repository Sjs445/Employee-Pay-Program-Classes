//begin person.h
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;
class Person
{
private:
    string lastName;
    string firstName;
    float  payRate;
    float  hoursWorked;
public:
    Person(string firstName, string lastName, float  payRate, float
hoursWorked);
    void setLastName(string lName);
    string getLastName();
    void setFirstName(string fName);
    string getFirstName();
    void setPayRate(float rate);
    float getPayRate();
    void setHoursWorked(float hours);
    float getHoursWorked();
    float totalPay();
    string fullName();
};
#endif // end person.h
