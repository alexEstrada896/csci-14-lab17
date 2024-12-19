/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;

int prompt ();
int amountdays(int);
double  avgAbsentdays(double , double );


int main()
{
	int numEmploye = prompt();
	int daysabsent = amountdays(numEmploye);
    double total = avgAbsentdays(numEmploye , daysabsent);
	
	cout << fixed << setprecision(2)<< "The average number of days this company's employees are absent during the past year is " << total;

	return 0;
}
//function to ask how many employees the compony has
int prompt ()
{
    int employees;

	cout <<"How many employees does the company have (enter a number at least 1): " << endl;
	cin >> employees;
	
	while(employees <=1)
	{
	    cout << "Invalid input. Please enter a number at least 1"<<endl;
	    cin >> employees;
	}
	return employees;
}

//function for user to enter how many employes are in the compony and prompts them how many days they missed
//promts how many missed days for each worker
int amountdays(int amountemployes)
{
 int temp = 0;
 int totalAbsence = 0 ;
 for (int i = 1 ; i <= amountemployes ; i++)  
 {
     cout << "How many days did enployee "<<i<<" miss: "<<endl;
     cin >> temp;
     
//validates input
while (temp < 0)
 {
 
 
     cout << "Invalid input. Please enter a non-negative number: "<<endl;
     cin >> temp;
     

 
 }

totalAbsence = totalAbsence + temp;
 }
 return  totalAbsence;
}



//calculates total average 
double avgAbsentdays(double employes , double daysabsent ){
    
    return (daysabsent / employes) ; 
    
    
    
}
