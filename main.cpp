/*
PIC 10A Homework 3, second.cpp
Author: Moris Gomez
UID: 705089833
Discussion Section: 5B
Date: 10/21/2022
*/

//How do we account for singular values?
//How does program know which inputs are smallest or second smallest?
//Case studies ran:
// 1) 0 3 2 -1 Q = 0
// 2) 1 2 1 8 8 9 Q = 2
// 3) -7 -101 0 -2 17 Q = -7
// 4) 1 1 2 2 Q = 2
// 5) 1 Q = 1
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter integers (Q to Quit): ";
    int input, smallest, secondSmallest;
    cin >> input; //same values for first run.
    smallest = input; //same values for first run.
    secondSmallest = input; //same values for first run.

    //runs until input is not an integer (like a String "Q").
    //reassigns input value for every loop to the next number in sequence.
    while (cin >> input)
    {
        if (smallest == secondSmallest) //trajectory 1.
        {
            if (input < smallest) //smallest becomes input.
            {
                smallest = input;
            }
            else
            {
                secondSmallest = input; //reassigns secondSmallest.
            }
        } //closes outer if.
        else //trajectory 2.
        {

            if (input < smallest)
            {
                secondSmallest = smallest; //reassigns secondSmallest.
                smallest = input; //reassigns smallest.
            }
            else if (input > smallest && input < secondSmallest) //input is b/w smallest & second smallest, so it becomes the second smallest.
            {
                secondSmallest = input; //reassigns secondSmallest
            }
        } //closes outer else.
    }//closes while.
    cout << "Second smallest: " << secondSmallest; //prints second smallest after while loop condition = false.
    return 0;
} //closes main function.
