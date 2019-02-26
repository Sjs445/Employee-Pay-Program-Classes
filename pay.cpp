#include "person.cpp"
#include <fstream>
#include <iomanip>
#include <iostream>

int readData(Person employees[], int size);
void writeData(Person employees[], int size);


int main()
{
  Person employees[19];
  int count=readData(employees, 19);

  writeData(employees, count);

  return 0;
}

int readData(Person employees[], int size)
{
  ifstream inData;
  string filename="input.txt";
  string firstName, lastName;
  float payRate, hoursWorked;
  string name;
  inData.open(filename);
  int count=0;
  for(int i=0; i<size; i++)
  {
    inData>>firstName;
    cin.clear();
    employees[i].setFirstName(firstName);
    inData>>lastName;
    cin.clear();
    employees[i].setLastName(lastName);
    inData>>hoursWorked>>payRate;
    employees[i].setHoursWorked(hoursWorked);
    employees[i].setPayRate(payRate);

    if(inData.eof())
    break;
    count++;
  }
  inData.close();
  return count;
}

void writeData(Person employees[], int size)
{
  ofstream outData;
  string fullName;
  float totalPay;
outData.open("output.txt");

  for(int i=0; i<size; i++)
  {
    fullName=employees[i].fullName();
    totalPay=employees[i].totalPay();
    outData<<fullName<<" "<<totalPay<<endl;
  }
outData.close();
}
