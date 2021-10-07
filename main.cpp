/*
this is a program to loop through 0 through 50 inclusive and print the number as it iterates and print whether the number is odd or even.
input-none

return-number and text indicating odd or even
*/

#include <iostream>

using namespace std;

int main()


{
	int count = 0; //initialize a counter variable

	//while (count < 51 ) //this works the same as the for loop but is not as efficient
	for(int i = 0; i <=50; i++) /*
								Unlike a while loop, a for statement consumes the initialization, 
								condition and increment/decrement in one line thereby providing a shorter, 
								easy to debug structure of looping.
								*/
	{
		if (i % 2 < 1)	//i is the iterator place-holder
		{
			cout << count << " is even" << endl;
		}

		else
		{
			cout << count << " is odd" << endl;
		}
		count++;		//increment the counter
	}

	return 0;
}