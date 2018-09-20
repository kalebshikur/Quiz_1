#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
	int amount;
	int i, j = 0;
	int bills[]{ 50,20,10,5,1 }; // this line will create an array of all the bills that are 
	int withDraw;
	char entry;
	do // this loop encompasses all the code and it gives the user an opportunity to add multiple withdrawals as required
	{
		while (true) // this loop is used to check the entry of the users and it loops until the user enters a valid input
		{
			cout << "Enter withdrawal amount: " << endl;
			cin >> amount;
			// check to see if the user is imputing an amount more than $300
			if (amount > 300) { 
				cout << " Sorry the maximum amount you can withdral is $300" << endl;
			}
			// check to see if the user is imputing an amount less than $1
			else if (amount < 1) {
				cout << " Sorry the minimum amount you can withdraw if $1" << endl;
			}
			else
			{
				/* these loops check the amount of the input and subtract one bill at a time starting from the largest bill that is smaller than 
				the amount entered */

				for (i = 0; i < 5; i++)
				{
					j = 0;
					if (amount >= bills[i]) {
						// subtracting each bill from the amount consecutively until the amount goes to zero
						do
						{
							amount = amount - bills[i];
							j++;
						} while (amount >= bills[i]);
						// prints the type and amount of each bill
						cout << j << " $" << bills[i] << " bill" << endl;
					}
				}
				// after one request is completed the program ask the user if they need another withdrawal
				cout << "Another withdrawal?  please enter y to continue" << endl;
				cin >> entry;
				break;
			}
		}
	} while (entry == 'y');
}
