# include <iostream>
using namespace std;void evenOrNot(int arr[], int size) {
    int even = 0, odd = 0;

    for(int i=0; i<size; i++) {
        if(arr[i]%2==0) { //��� �� ������ ���, ����� � �����
            even++; //�����
        } else {
            odd++; //��� �� � ����� ����� � �������, �����
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
