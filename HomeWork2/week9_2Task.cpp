# include <iostream>
using namespace std;void evenOrNot(int arr[], int size) {
    int even = 0, odd = 0;

    for(int i=0; i<size; i++) {
        if(arr[i]%2==0) { //ако се делина две, демек е четно
            even++; //броим
        } else {
            odd++; //ако не е четно значи е нечетно, броим
        }
    }

    cout<<"Even -> "<<even<<endl;
    cout<<"Odd -> "<<odd<<endl;
}

int main ()
{
	const int size=100;
	int  arr[100];
	 evenOrNot(arr,size);
	
	return 0;
}
