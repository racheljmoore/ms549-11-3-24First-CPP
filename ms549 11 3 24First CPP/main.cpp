/*
* this is a 
* multi line
* comment
*/

	//libraries
#include <iostream>
#include <string>

 using namespace std;// allows you to use i/o statements w/o std::
 int main()// code starts running here
 {
	 int number = rand() % 5;// random # between 1 and 5
	 int guess;
	 bool notDone = true;
	 while (notDone)
	{ 

	cout << "please enter a guess 1-5  ";
	cin >> guess;
	if (guess < number)
	{
		 cout << "guess is too low" << endl;
		 {

		 }
		 cout << "guess is too high" << endl;
	 }
	else
	{
		cout << "Correct!" << endl;
		notDone = false;
	}
	

	 }// end of while
	 return 0;
	
 }





