The function avgAbsentdays should have two int parameters instead of two double (-1)

The final output for the average number of days absent should keep just one digit after the decimal point, not two (-0.5)


1. (10 pts) Write a complete program in C++ that calculates and displays the average number of days a company's employees are absent. Your program should have the following functions:

A function called by main that prompts the user for the number of employees in the company. This value should be returned as an int. (This function accepts no arguments.)
A function called by main that accepts one argument: the number of employees in the company. The function should prompt the user for the number of days each employee missed during the past year. The total of these days should be returned as an int. 
A function called by main that accepts two arguments: the number of employees in the company and the total number of days absent for all employees during the year. The function should return, as a double, the average number of days absent. (This function does not perform screen output and does not ask the user for input.)
The final output for the average number of days absent should keep one digit after the decimal point.

Your program must have function prototypes. 

Your program must also implement input validation using loops. It should not accept a number less than 1 for the number of employees. It should also not accept a negative number for the days any employee missed. Input validations need to be inside the relevant functions. 

Sample input and output.

How many employees does the company have (enter a number at least 1): 0
Invalid input. Please enter a number at least 1: 3

How many days did employee 1 miss (enter a non-negative number): -1
Invalid input. Please enter a non-negative number: -2
Invalid input. Please enter a non-negative number: 0
How many days did employee 2 miss (enter a non-negative number): 8
How many days did employee 3 miss (enter a non-negative number): 3

The average number of days this company's employees are absent during the past year is 3.7.
