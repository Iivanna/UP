# include <iostream>
using namespace std;
bool Rem (int *arr, int n, int &size)
{
	for (int i=0; i<size; ++i)
	{
		cin>>arr[i];
	}
	bool Rem=false;
	for (int i=0; i< size; ++i)
	{
		if (arr[i]==n)
		{
			int j=i;
			while (j<size)
			{
				arr[j]=arr[j+1];
				++j;
			}
			--i;
			--size;
			Rem=true;
		}
	}
	return Rem;
}
int main ()
{
	int arr[size];
	int n;
	cout<<"n"<<endl;
	cin>>n;
	int size;
	cin>>size;
	cout<<Rem(arr,n,size)<<endl;
	for (i=0;i<size;++i)
	{ 
	cout<<arr[i]<<endl;
	}
	
	
	
	return 0;
}
