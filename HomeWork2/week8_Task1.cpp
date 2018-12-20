# include <iostream>
using namespace std;
int Abs (int n)
{ 
return n* ((2*n+1)%2);
}
double Pow (double k, int s)
{
	int res=1;
	for (int i=0;i<s; i++)
	{
		res*=k;
	}
	return res;
}
double Min (double num1, double num2)
{
	if (num1> num2)
	{
		return num2;
	}
	return num1;
}
double Max (double num1, double num2)
{ 
    if (num1<num2)
    { 
    return num2;
	}
	return num1;
}
double maxOf3 (double num1, double num2, double num3)
{ 
     if (num1>num2 && num2>num3)
     { 
     return num1;
	 }
	 else if (num2>num1 && num2> num3)
	 {
	 	return num2;
	 }
	 else return num3;
}
double minOf3 (double num1, double num2, double num3)
{ 
if (num1<num2 && num1<num3)
{
	return num1;
}
else if (num2<num1 && num2<num3)
{ 
return num2;
}
else return num3;
}
bool isAlpha (char h)
{ 
if ((h>=65 && h<=90) || (h>=97 && h<=122))
{
	return 1;
}
 return 0;
}
int main ()
{
	int n;
	cin>>n;
	cout<<Abs(n);
	double k;
	cin>>k;
	int s;
	cin>>s;
	cout<<Pow (k,s);
	cout<<Min (2.01, 2.00)<<endl;
	cout<<Max (3.02, 4.00)<<endl;
	cout<<maxOf3(4.50, 7.00, 7.40)<<endl;
	cout<<minOf3(3.40,5.44,7.88)<<endl;
	char h;
	cin>>h;
	cout<<isAlpha(h)<<endl;
	
	return 0;
}
