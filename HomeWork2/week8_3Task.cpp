# include <iostream>
using namespace std;
void fulfillMatrix(int* matrix,int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols; j++){
            if(i==j){//po glavniq diagonal
                matrix[i][j] = i;
            }
            if(i<j){//nad glavniq diagonal
                matrix[i][j] = j - i;
            }
            if(i>j){//pod glavniq
                matrix[i][j] = i*j;
            }
        }
    }

}

void printMatrix(int matrix[][5],int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}

int main ()
{
 int rows, cols;
    cout<<"Enter rows and cols for the matrix";
    cin>>rows;
    cin>>cols;
    int matrix[rows][cols];
    fulfillMatrix(matrix,rows,cols);
    printMatrix(matrix,rows,cols);


    int a,b;
    cout<<"Enter two numbers :)"<<endl;
    cin>>a;
    cin>>b;

	
	
	return 0;
}
