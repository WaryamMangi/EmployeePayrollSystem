# Employee Payroll System

This is a simple C++ program designed to manage and calculate employee payroll. The program allows users to input employee details, calculate their salary based on hours worked and hourly wage, and save the payment receipt to a file.

## Features
- Accepts employee details such as name, ID, hours worked, and hourly wage.
- Calculates the total salary based on hours worked and hourly wage.
- Displays the payment receipt in the console.
- Saves the payment receipt to a file (`EmployeePayroll.txt`).

## How It Works
1. The user is prompted to enter their details: name, ID, total hours worked, and hourly wage.
2. The program calculates the salary using the formula:
salary = hours_worked * hourly_wage
3. A payment receipt is generated and displayed in the console.
4. The receipt is saved to a text file named `EmployeePayroll.txt` for record-keeping.

## Example Input/Output

### Input:
Enter your name:
John 
Enter your ID:
123
Enter your total hours worked:
40
Enter your hourly wage:
15

### Output (on console):
INDUS RESTAURANT HYDERABAD
PAYMENT RECEIPT
Name:           John
Employee ID:    123
Hours Worked:   40
Hourly Wage:    15
Salary:         600
Employee data has been saved to EmployeePayroll.txt

### File Output (`EmployeePayroll.txt`):
INDUS RESTAURANT HYDERABAD
PAYMENT RECEIPT
Name:           John 
Employee ID:    123
Hours Worked:   40
Hourly Wage:    15
Salary:         600

Technologies Used
	•	Programming Language: C++
	•	Libraries: iostream for input/output, fstream for file handling.

Future Improvements

Here are some potential enhancements for this program:
	1.	Add input validation to ensure only valid data is entered.
	2.	Extend functionality to manage multiple employees.
	3.	Provide a summary report for all employees.
	4.	Implement a graphical user interface (GUI).

Acknowledgments

This program was created as part of my first semester coursework.
