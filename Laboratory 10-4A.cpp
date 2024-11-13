/*
* Program: Laboratory 10-4A.cpp
* Author: Aanika Mishra
* Date: 11-13-2024
* Description: Program reads in a card number as an integer, 
* puts it in an array and determines if it is valid or not
*/

#include <iostream>

using namespace std;
bool isCardValid(int digits[], int size);

int main()
{
    int card_num;
    int digit;
    int count = 0;
    int sum1 = 0;
    int sum2 = 0;

    cout << "Please enter 8-digit card number: ";
    cin >> card_num;

    while (card_num != 0)
    {
        digit = card_num % 10;
        count++;
        card_num /= 10;

        if (count % 2 != 0)
        {
            sum1 = sum1 + digit;
        }
        else
        {
            sum2 = sum2 + ((digit * 2) / 10) + ((digit * 2) % 10);
        }
    }
    int total = sum1 + sum2;
    if (total % 10 == 0)
    {
        cout << "Card is valid." << endl;
    }
    else
    {
        cout << "Card is invalid." << endl;
    }
}

bool isCardValid(int digits[], int size)
{

}