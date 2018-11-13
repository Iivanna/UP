# include <iostream>
using namespace std;
int main ()
{
	//8 task

int n,x, por;
cin>>n;
x=0;
por=n;
do
{
	x=x*10 + por%10;
	por=por/10;
	cout<<x<<endl;
}
while (por>0);
 if (x==n)
 { cout<<"chisloto e palindrom";
 }
 else cout<<"vyvedenoto chislo ne e palindrom";
  
	
	return 0;
}
