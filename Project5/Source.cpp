#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
	int amount;
	int i, j = 0;
	int bills[]{ 50,20,10,5,1 };
	int withDraw;
	char entry;
	do
	{
		while (true)
		{
			cout << "Enter withdrawal amount: " << endl;
			cin >> amount;
			if (amount > 300) {
				cout << " Sorry the maximum amount you can withdral is $300" << endl;
			}
			else if (amount < 1) {
				cout << " Sorry the minimum amount you can withdraw if $1" << endl;
			}
			else
			{
				for (i = 0; i < 5; i++)
				{
					j = 0;
					if (amount >= bills[i]) {
						do
						{
							amount = amount - bills[i];
							j++;
						} while (amount >= bills[i]);
						cout << j << " $" << bills[i] << " bill" << endl;
					}
				}
				cout << "Another withdrawal?  please enter y to continue" << endl;
				cin >> entry;
				break;
			}
		}
	} while (entry == 'y');
}
