#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<<"Enter an size of square matrix(nxn)"<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements:"<<endl;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    //transpose matrix using swapping approch;
    //Transpose Matrix logic;
    int temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        
    }
    cout<<endl;
    // cout<<"Transpose Matrix is :"<<endl;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    //90 degrees Rotation matrix logic;
    
    for ( i = 0; i < n; i++)
    {
        for ( j = n-1; j >=0; --j)
        {
            temp=arr[i][j];
            arr[i][j]= arr[i][j];
            arr[i][j]=temp;
        }
        
    }
    cout << "90-degree Rotated Matrix is:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = n-1; j >=0; --j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}