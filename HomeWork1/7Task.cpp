# include <iostream>
using namespace std;
int main ()
{
	// 7 Task

int month, year;
cout<<"month";
cin>>month;
cout<<"year";
cin>>year;
switch (month)
{
    case 4: cout<<"Април"; 
	case 6:cout<<"Юни";
	case 9:cout<<"Септември";
	case 11:cout<<"Ноември";
    	cout<<30<<endl;break;
	
	case 1:cout<<"Януари";
	case 3:cout<<"Март";
	case 5:cout<<"Май";
	case 7:cout<<"Юли";
	case 8:cout<<"Август";
	case 10:cout<<"Октомври";
	case 12:cout<<"Декември";
		cout<<31<<endl;break;
		
	case 2 : cout<<"Февруари";
		if (year%100!=0 || year %4==0 || year %400==0)
		{ cout<<"29 дни"<<endl;
		}
		else cout<<"28 дни"<<endl;
	
		
} 


	
	return 0;
}
