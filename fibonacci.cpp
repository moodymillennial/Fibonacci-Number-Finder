////////////////////////////////////////////////////////////////////////////////////
// Name: Joshua Stromberg
// Description: Based on a number user wants, program will use formula
// to find the "Fibonacci Number" that a user wants. Program uses a while
// loop to keep program running over and over as often as user wants, until
// user enters -88 which will stop the loop and allow the user to end the program.
// INPUT: User enters a whole number that they want as fibonacci number
// OUTPUT: The fibonacci requested by user
/////////////////////////////////////////////////////////////////////////////////////
 
 
#include <iostream>
#include <math.h> // this is so we can use exponents in our formula
using namespace std;
 
int main() { // main part of program
     
    std::cout << "The first Fibonacci number is 1" << endl;
     
    std::cout << "The second Fibonacci Number is 1" << endl;
     
    std::cout << "Which other Fibonacci number would you like?  "; // prompt user to enter a number
     
    int userFibNum;
     
    std::cin >> userFibNum; // where our user input is stored the first time
     
    while (userFibNum != -888) // we prompt our user to enter -888 to exit the program, hence this loop
    {
         
        if (userFibNum <= 2 and userFibNum >= 0) // we have already given the first two fibonacci numbers
             
        {
             
            std::cout << "Please enter a number greater than 2" << endl;
             
            std::cout << "Which other Fibonacci number would you like? Enter -888 to exit.  ";
             
            std::cin >> userFibNum; // have the user enter a valid number or exit using "-888"
 
        }
         
        else
             
        {
            std::cout << "The number you requested is " << (((pow(1 + pow(5,0.5),userFibNum))) - ((pow(1 - pow(5,0.5),userFibNum)))) / ((pow(2,userFibNum)) * (pow(5,0.5))) << " " << endl; // this is our formula to calculate a fibonacci number!
             
            std::cout << "Which other Fibonacci number would you like? Enter -888 to exit.   ";
             
            std::cin >> userFibNum;// have the user enter a valid number to calculate or exit using "-888"
        }
    }
     
    return 0;
}
