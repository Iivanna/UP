# include <iostream>
using namespace std;
int main ()
{
	// Task2 
	
	double zaem, mes, pr , a;
	cout<<"Vyvedete stoinostta na zaema"<<endl;
    cin>> zaem;
    cout<<"Vyvedete za kolko meseca"<<endl;
    cin>>mes;
    cout<<"Lihven procent"<<endl;
    cin>>pr;
    a = zaem *(pr/100);
    double b= pr/mes, c=(1 + (b/100));
    cout<< "b"<<b<<endl;
    cout<<c<<endl;
    cout<< "Vashata mesechna vnoska e "<<(zaem + a )/mes <<endl;
    cout<<"Cqlata suma za vryshtane"<< zaem + a <<endl;
	
	return 0;
}
