# include <iostream>
using namespace std;
void reverseArray(int* arr, int start, int end) {
    end = end-1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main ()
{
	 int size;
    cout<<"Enter size for the array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) {
        cout<<"Enter a number for "<<i+1<<" ";
        cin>>arr[i];
    }

    reverseArray(arr,0,size);
    printArray(arr,size);
	return 0;
}
