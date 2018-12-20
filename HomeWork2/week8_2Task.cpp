# include <iostream>
using namespace std;
double F (double x)
{
	return x*x*x -5*x;
}
double F1 (double a, double b, int n)
{ 
double h= (b-a)/n;
double xi=a;
double ans=0;
for (int i=0; i<n-1; i++)
{
	ans+=h/2*(F(xi) + F(xi+h));
	xi+=h;
}
 return ans;
}

int main ()
{
	cout<<F1(1,5,3)<<endl;
	
	
	return 0;
}
