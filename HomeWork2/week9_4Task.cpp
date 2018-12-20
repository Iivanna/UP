# include <iostream>
using namespace std;
void decToBinary(int n) {
    // array to store binary number
    int binaryNum[1000];
    // counter for binary array
    int counter = 0;
    while (n > 0) {
        // storing remainder in binary array
        binaryNum[counter] = n % 2;
        n = n / 2;
        counter++;
    }
    // printing binary array in reverse order
    for (int i = counter - 1; i >= 0; i--)
        cout << binaryNum[i];
}

void decArrToBinArr(int arr[], int size){
    for(int i=0;i<size;i++){
        decToBinary(arr[i]);
        cout<<endl;
    }
}
int main ()
{
	 int size;
    cout<<"Enter size for the array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter a number for "<<i+1<<" ";
        cin>>arr[i];
    }
    decArrToBinArr(arr,size);
	
	return 0;
}
