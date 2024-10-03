#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<<"Enter  size of the metrix"<<endl;
    cin>>n;
    int arr[n][n]={0};
    for(i = 0; i< n; i++)
    {
        for(j= 0; j<=i; j++)
        {
            if(j==0 || i==j)
            {
               arr[i][j]= 1; 
            }
            else
            {
              arr[i][j] = arr[i-1][j] + arr[i-1][j-1];  
            }
            
        }
    }
    cout<<"Pascal tringle matrix is :"<<endl;
    for(i = 0; i< n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}