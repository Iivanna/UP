# include <iostream>
using namespace std;
int main ()
{ 
//11 Task

int num, count =0, sum=0;
do { 
cout<<"Vyvedete chislo:";
cin>>num;

if (num >=10 && num<= 99)
{
	 count ++;
	 sum+=num;
}
if (count ==5 || sum>= 234)
{ break;
}
} while (true);
cout<<"ima"<<count<<"chisla sys sbor"<<sum;
bool dontStop= true;
if (count ==5|| sum>=234)
{ dontStop= false;
}

while (dontStop);



return 0;
}
