# include <iostream>
using namespace std;
bool isPrime(int n) {

    for(int i = 2; i <= n / 2; ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

bool arePairedSimple(int a, int b){
    if(a + 2 != b){
        return false;
    }else if(!isPrime(a) && !isPrime(b)){
        return false;
    }else{
        return true;
    }
}

void printPrimeTwins(int a, int b){
    if(arePairedSimple(a,b)){
        cout<<"The numbers are prime twins"<<endl;
    }else{
        cout<<"The numbers are not prime twins"<<endl;
    }
}

int main ()
{
	int a,b;
	 printPrimeTwins(a,b);

    int size;
    cout<<"Enter length:";
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++) {
        cout<<"Enter value for ["<<i+1<<"]"<<endl;
        cin>>arr[i];
    }
	
	
	return 0;
}
