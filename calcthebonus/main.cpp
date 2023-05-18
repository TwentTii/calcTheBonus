/******************************************************************************
A company decided to give a bonus of 5% to each regular employee if his/her years 
of service is more than 5 years and a 10% bonus if it is more than 10 years. Management 
(Managers and executives) are compensated with a different scale. Contract workers get
a $100 bonus. 
Ask the user for their salary, years of service, and if they are a regular employee 
R, management M or a contract worker C. Calculate and print the net bonus amount for 
regular employees, $100 bonus for Contract workers or print a “Use the management bonus key”
message if someone says they are management.. 
*******************************************************************************/
#include <iostream>

using namespace std;

void calcTheBonus(double s, double y, char p, char a); // salary, years, position

double bonus;

int main()
{
    
    double x, y = 0; //Declaration of arguments
    char z, a = ' '; //Declaration of arguments 
    calcTheBonus(x, y, z, a);

    return 0;
}

void calcTheBonus(double s, double y, char p, char a)
{
    cout << "Hello! Welcome to the Company Calculate the Bonus Program. In order to get started,\nplease enter your salary as a whole number without any commas: ";
    cin >> s;
    cout << "\nThank you, now enter the amount of years you've been working with us: ";
    cin >> y;
    cout << "\nThank you, now enter your position, for regular employee, type 'R', for management, type 'M', and for contract, type 'C': ";
    cin >> p;
    
    if (y > 10)
    {
        bonus = (s * 0.1);
    }
    else if (y > 5 && y <= 10)  // Checks the amount of years input by the user. If greater than 10, apply a 10% bonus. Else, if the amount of years is greater than five and less than or equal to 10, apply a 5% bonus. If neither are true, no bonus will be applied.
    {
        bonus = (s * 0.05);
    }
    
    if (p == 'C' || p == 'c')
    {
        bonus = bonus  + 100;
        cout << "\nYour bonus is: " << bonus;
    }
    if (p == 'M'|| p == 'm')
    {
        cout << "\nUse the management bonus key";
    }
    if (p == 'r' || p == 'R')
    {
        cout << "\nYour bonus is: " << bonus;
    }
    else
    {
        cout << "\nOops! That wasn't a letter we asked for. Would you like to try again? Y for Yes, N for No.\n";
        cin >> a;
        if (a == 'y' || a == 'Y')
        {
            calcTheBonus(s,y,p,a);
        }
        else
        {
            return;
        }
    }
    
}




