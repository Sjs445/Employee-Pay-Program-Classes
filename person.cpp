#include "person.h"
string Person::getFirstName() {
    return firstName;
}

Person::Person(string firstName, string lastName, float  payRate, float
hoursWorked)
{
  setFirstName(firstName);
  setLastName(lastName);
  setPayRate(payRate);
  setHoursWorked(hoursWorked);
}

string Person::getLastName()
{  return lastName; }

float Person::getPayRate()
{  return payRate; }

float Person::getHoursWorked()
{  return hoursWorked; }

void Person::setPayRate(float rate)
{  payRate=rate; }

void Person::setFirstName(string fName)
{  firstName=fName; }

void Person::setLastName(string lName)
{  lastName=lName; }

void Person::setHoursWorked(float hours)
{ hoursWorked=hours; }

float Person::totalPay()
{
  float total=payRate*hoursWorked;
  return total;
}

string Person::fullName()
{
  string fullName=firstName+" "+lastName;
  return fullName;
}
