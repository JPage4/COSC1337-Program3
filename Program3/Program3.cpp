//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program 3
//
//  File Name:         Program3.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          6/16/2021
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 4 & 5
//
//  Description:
//     Asks for the number of units sold and computes the total
//	   cost of the purchase and the savings due to the discount
//     applied.
//
//***************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

void developerInfo();

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    developerInfo();    // Do not delete this statement

    double retailPrice = 109.00;
    int quantity;
    double discount;
    cout << "Please enter the number of units sold: ";
    cin >> quantity;


    if (quantity >= 10 && quantity <= 39)
    {
        discount = 0.10;
    }

    else if (quantity >= 40 && quantity <= 65)
    {
        discount = 0.18;
    }

    else if (quantity >= 66 && quantity <= 90)
    {
        discount = 0.27;
    }

    else if (quantity >= 91 && quantity <= 120)
    {
        discount = 0.35;
    }

    else if (quantity >= 121 && quantity <= 199)
    {
        discount = 0.42;
    }

    else if (quantity >= 200)
    {
        discount = 0.48;
    }

    else
    {
        discount = 0.0;
    }

    int discountPercant = discount * 100;
    double discountSavings = (retailPrice * quantity) * discount;
    double totalCost = retailPrice * quantity + discountSavings;

    cout << "Number of units purchased is: " << quantity << endl;
    cout << "Discount applied is: " << discountPercant << "%" << endl;
    cout << "Total savings due to discount is: $" << fixed << setprecision(2) << discountSavings << endl;
    cout << "The total cost of the purchase is: $" << fixed << setprecision(2) << totalCost << endl;

    system("PAUSE");
    return 0;
}

//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: Three"
        << endl
        << endl;
} // End of developer
