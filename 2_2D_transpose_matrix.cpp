#include<iostream>
using namespace std;
int main()
{
    int row1, col1, i, j;
    cout<<"Enter the size of matrix(row x col). "<<endl;
    cin>>row1>>col1;
    cout<<"Enter the elements of the matrix. "<<endl;
    int arr_A[row1][col1];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cin>>arr_A[i][j];
        }
    }
    int transpose[col1][row1];
    for (i = 0; i < col1; i++)
    {
        for (j = 0; j < row1; j++)
        {
            transpose[i][j] = arr_A[j][i];
                
        }
        
    }
    cout<<endl;
    cout<<"Oreiganal Matrix is :"<<endl;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cout<<arr_A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Transpose Matrix logic;
    cout<<"Transpose Matrix is :"<<endl;
    for (i = 0; i < col1; i++)
    {
        for (j = 0; j < row1; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}