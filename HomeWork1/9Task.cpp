# include <iostream>
using namespace std;
int main ()
{
	//9 Task

	int number;
	cin >> number;
	int digitCount = 0;

	while (number < 10 && number >30000) {
		digitCount++;
		number /= 10;
	}
	cout << digitCount << endl;

	system("pause"); 

	
	
	return 0;
}
