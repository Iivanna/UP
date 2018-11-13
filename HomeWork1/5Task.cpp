# include <iostream>
using namespace std;
int main ()
{
		//5 Task 

	int start, end;
	cout<<"Nachalo";
	cin>>end;
	bool Isprime;
	int sum=0,count =0;
	for (int num = start; num<=end ; num++)
	{
		for (int del=2; del<num ;num++){
		
	if (num %del==0)
	{ sum+=del;
	}
	}
	for (int j=2; j<sum; j++)
	{if (sum%j==0)
	{Isprime=false;
	}
	}
	if (Isprime)
	{count ++;
	}
	Isprime = true;
	sum=0;
}
cout<<"V intervala ima "<<count<<"chisla , na koito cboryt na delitelite e prosto chislo";

	
	return 0;
}

