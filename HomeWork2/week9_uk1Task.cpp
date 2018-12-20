# include <iostream>
using namespace std;
void swop (int *left, int *right)
{
	int temp= *left;
	*left= *right;
	*right= temp;
}
int main ()
{
	int q=10, p=54;
	swop (&q,&p);
	cout<<q<<endl<<p<<endl;
	return 0;
}
