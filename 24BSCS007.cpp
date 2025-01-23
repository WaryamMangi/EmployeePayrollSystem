#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    float id,hourly_wage,hours_worked,salary;
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your ID:"<<endl;
    cin>>id;
    cout<<"Enter your total hours worked:"<<endl;
    cin>>hours_worked;
    cout<<"Enter your hourly wage:"<<endl;
    cin>>hourly_wage;
    salary=hours_worked*hourly_wage;

    cout<<"********************"<<endl;
    cout<<"INDUS RESTAURANT HYDERABAD"<<endl;
    cout<<"PAYMENT RECIPT"<<endl;
    cout<<"Name:"<<"\t"<<name<<endl;
    cout<<"Employee ID:"<<"\t"<<id<<endl;
    cout<<"Hours Worked"<<"\t"<<hours_worked<<endl;
    cout<<"Hourly Wage:"<<"\t"<<hourly_wage<<endl;
    cout<<"Salary:"<<"\t"<<salary<<endl;
    cout<<"********************"<<endl;

    ofstream file("EmployeePayroll.txt"); 

    if (file.is_open()) 
    {
        file << "********************" << endl;
        file << "INDUS RESTAURANT HYDERABAD" << endl;
        file << "PAYMENT RECEIPT" << endl;
        file << "Name:\t" << name << endl;
        file << "Employee ID:\t" << id << endl;
        file << "Hours Worked:\t" << hours_worked << endl;
        file << "Hourly Wage:\t" << hourly_wage << endl;
        file << "Salary:\t" << salary << endl;
        file << "********************" << endl;

        file.close(); 
        cout << "Employee data has been saved to EmployeePayroll.txt" << endl;
    } 
    else 
    {
        cout << "Error opening file!" << endl;
    }
    return 0;
  }