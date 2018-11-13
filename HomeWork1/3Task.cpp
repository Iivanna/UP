# include <iostream>
#include <cmath>
using namespace std;
int main ()

{
		//3 Task
	 
	 int number;
    int br = 1;
    cin >> number;
    int n = number;
    int sum = 0;

    while (n /= 10) {
        br++;
    }

    int correction = number;
    for (int i = 0; i < br; i++, correction /= 10) {
        sum += pow((correction % 10), br);
    }
    if  (sum == number && number != 0)
    {cout<<"True";
    }
    else cout<<"False";
	
    
	
	return 0;
}
