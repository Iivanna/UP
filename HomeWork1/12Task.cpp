# include <iostream>
using namespace std;
int main ()
{
	//12 Taks

int depth;
do { cout<<"vyvedete dylbochina na kladeneca";
cin>>depth;
}
while (depth<10 || depth >101);
int count =0;
while (depth >0)
{ count ++;
depth --;
}
cout<<"Na jabata i trqbva "<< count<< "denonoshtiq za da izleze ot kladeneca";

	
	
	return 0;
}
