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
    case 4: cout<<"�����"; 
	case 6:cout<<"���";
	case 9:cout<<"���������";
	case 11:cout<<"�������";
    	cout<<30<<endl;break;
	
	case 1:cout<<"������";
	case 3:cout<<"����";
	case 5:cout<<"���";
	case 7:cout<<"���";
	case 8:cout<<"������";
	case 10:cout<<"��������";
	case 12:cout<<"��������";
		cout<<31<<endl;break;
		
	case 2 : cout<<"��������";
		if (year%100!=0 || year %4==0 || year %400==0)
		{ cout<<"29 ���"<<endl;
		}
		else cout<<"28 ���"<<endl;
	
		
} 


	
	return 0;
}
