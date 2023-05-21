#include<iostream>

using namespace std;

int main()
{
    int arr[5][5];
    int k;
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int k=0;k<5;k++)
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(arr[i][j]>(arr[i][k]+arr[k][j]))
                {
                    arr[i][j]=(arr[i][k]+arr[k][j]);
                    
                }
            }
        }
    }
cout<<"All pairs shortest path"<<endl;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}

return 0;
}