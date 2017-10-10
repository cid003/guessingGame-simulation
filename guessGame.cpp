/***********************************************************************
Mariah Cid
cs 111
guessGame.cpp
3/8/2017

this program will generate a number from 1 to 100 and will ask the user 
to guess what the number is.
***********************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0)); 

    int num; 
    int guess;
    num = rand() % 100 + 1; //num gets some random number between 1 and 100

    cout << "Guess a number between 1 and 100. Enter your guess: ";

   do 
     {
       
       cout << "Enter your guess: ";
       cin >> guess; //stored in here
       
       if(num > guess)
	 {
	   cout << " Too low, try again." <<endl;
	   cout << "Enter your guess: "; //gives user another try
	 }
       else if(num < guess)
	 {
	   cout << " Too high, try again." <<endl;
	   cout << "Enter your guess: "; //give user another try
	 }
       else
	 {
	   cout << "You guessed it right!" <<endl; //game ends?
	 }


     }while(guess != num);


  return 0;

}
