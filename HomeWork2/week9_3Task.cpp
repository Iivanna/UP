# include <iostream>
using namespace std;
int factoriel(int n) { //функцийка която смята факториел на едно число
    int fact=1;
    for(int i=n; i>0; i--) {
        fact*=i;
    }
    return fact;
}//за да е по разбираемо и удобно не е в долната

void factorielAll(int arr[], int size) { //и такава която смята на числата от масива
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<"!="<<factoriel(arr[i])<<endl; //извиквайки горната факториел функция
    }
}
int main ()
{
    const int size=100;
    int arr[100];
    
	 factorielAll(arr,size);
	return 0;
}
