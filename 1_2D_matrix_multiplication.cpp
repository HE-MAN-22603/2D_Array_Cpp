#include<iostream>
using namespace std;
int main()
{
    int row1, col1, i, j;
    cout<<"Enter the size of 1st matrix(row x col). "<<endl;
    cin>>row1>>col1;
    cout<<"Enter the elements of the 1st matrix. "<<endl;
    int arr_A[row1][col1];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cin>>arr_A[i][j];
        }
    }
    int row2,col2;
    cout<<"Enter the size of 2nd matrix(row x col). "<<endl;
    cin>>row2>>col2;
    cout<<"Enter the elements of the 2nd matrix. "<<endl;
    int arr_B[row2][col2];
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cin>>arr_B[i][j];
        } 
    }
    //main log
    int arr_C[row1][col2];//we store all the elements into new array which is arr_C[i][j];
    if(col1==row2)//formula colums of 1st matrix = to Rows of 2nd matrix for example : a=2x3 & b= 3x2 col1=3 and row2=3 and the size of matrix is row1 x col2; 
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                arr_C[i][j]={0};// in this line you must be initialized this array with "0" other wise it give garbage value
                for (int k = 0; k < row2; k++)
                {
                    //we store all the elements into new array which is arr_C[i][j];
                    arr_C[i][j] += arr_A[i][k] * arr_B[k][j];
                }
                
            }
        
        }
        
    }
    else
    {
        cout<<"Matrix multiplication not possible. Column of 1st matrix must be equal to row of 2nd matrix."<<endl;
    }
    //logic of printing the multiplication matrix;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout<<arr_C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}