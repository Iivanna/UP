# include <iostream>
using namespace std;
void input (int arr[100], int n)
{
	for (int i=0; i<n; i++)
	{ 
	cin>>arr[i];
	}
}
void output (int arr[100], int n)
{
	for (int i=0; i<n; i++)
	cout<<arr[i]<<endl;
}
void swop (int *a, int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void rev (int arr[100], int n)
{
	for (int i=0; i<n/2; i++)
	{
		swop (&arr[i],&arr[n-i-1]);
	}
}
int main ()
{
	int arr[100],n;
	cin>>n;
	input(arr,n);
	rev (arr,n);
	output(arr,n);
	
	return 0;
}
