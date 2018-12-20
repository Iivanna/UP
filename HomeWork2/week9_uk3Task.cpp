# include <iostream>
using namespace std;
void MergeSequances (int * a1, int size1, int *a2, int size2, int *c, int size)
{
	int i1=0;
	int i2=size2-1;
	int i3=0;
	while (i1<size1 && i2>=0)
	{
		if (a1[i1]<a2[i2])
		{
			c[i3]=a1[i1];
			i1++;
		}
		else
		{
			c[i3]=a2[i2];
			i2--;
		}
		i3++;
	}
	if (i1==size1)
	{
		while (i2>=0)
		{
			c[i3]=a2[i2];
			i3++;
			i2--;
		}
	}
	else 
	{
		while (i1<size1)
		{
			c[i3]=a1[i1];
			i3++;
			i1++;
		}
	}
}
int main ()
{
	
	return 0;
}
