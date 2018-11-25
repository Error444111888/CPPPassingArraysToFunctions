// Passing arrays to functions

#include <iostream>

using namespace std;

// This is the prototype. You don't have to have this. You can just put the function above the main 
void TotalPrices(int TheArray[], int SizeOfArray);



int main()
{
	int BTCPrices[5] = { 3000,4000,5000,6000,7000 };
	int LTCPrices[4] = { 30,40,50,60 };

	TotalPrices(LTCPrices, 4);

	cin.get();
}


void TotalPrices(int TheArray[], int SizeOfArray)
{
	for (int x = 0; x < SizeOfArray; x++)
	{
		cout << TheArray[x] << endl;
	}
}