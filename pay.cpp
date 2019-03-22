#include "person.cpp"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

void readData(vector<Person>&employees);
void writeData(vector<Person>&employees);


int main()
{
  vector<Person> employees;

  readData(employees);

  writeData(employees);

  return 0;
}

void readData(vector<Person>&employees)
{
  ifstream inData;
  string firstName, lastName;
  float payRate, hoursWorked;
  string name;

  inData.open("input.txt");

while(!inData.eof())
{
    inData>>firstName;
    cin.clear();
    inData>>lastName;
    cin.clear();
    inData>>hoursWorked>>payRate;

employees.emplace_back(firstName, lastName, payRate, hoursWorked);
}
  inData.close();

}

void writeData(vector<Person>&employees)
{
  ofstream outData;
  string fullName;
  float totalPay;
outData.open("output.txt");
outData<<fixed;
outData<<setprecision(2);

  for(int i=0; i<employees.size()-1; i++)
  {
    fullName=employees.at(i).fullName();
    totalPay=employees.at(i).totalPay();
    outData<<fullName<<" "<<totalPay<<endl;
  }
outData.close();
}
