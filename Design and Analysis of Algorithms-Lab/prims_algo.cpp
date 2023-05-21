#include<iostream>

using namespace std;

int main()
{
    int n,i,j,min;

    cin>>n;

    int a[n][n];

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    min=a[0][0];

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
          if(min>0 && min>a[i][j])
          {
            min=a[i][j];
          }
          else if(min<a[i][j]);
          {

          }
        }
    
    }
   
   return 1;
}