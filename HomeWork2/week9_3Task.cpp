# include <iostream>
using namespace std;
int factoriel(int n) { //��������� ����� ����� ��������� �� ���� �����
    int fact=1;
    for(int i=n; i>0; i--) {
        fact*=i;
    }
    return fact;
}//�� �� � �� ���������� � ������ �� � � �������

void factorielAll(int arr[], int size) { //� ������ ����� ����� �� ������� �� ������
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<"!="<<factoriel(arr[i])<<endl; //���������� ������� ��������� �������
    }
}
int main ()
{
    const int size=100;
    int arr[100];
    
	 factorielAll(arr,size);
	return 0;
}
