#include<iostream>
using namespace std;

int main()
{
int n,e,i,j;
cout<<"Enter the number of vertices";
cin>>n;

cout<<"Enter the number of edges";
cin>>e;

int A[n][n];

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
  A[i][j]=0;
}
}

int u,v;

for(i=0;i<e;i++)
{
cout<<"Enter the Edge Details"<< i+1 <<endl;
cin>>u>>v;
A[u][v]=1;
//A[v][u]=1;
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<A[i][j]<<"\t";
}
cout<<endl;
}


int a[n];

for(i=0;i<n;i++)
{
    int count=0;
    for(j=0;j<n;j++)
    {
        if(A[i][j]!=0)
        {
            count++;
        }
    }
    a[i]=count;
}

int max=0;

for(i=0;i<n;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
}

for(i=0;i<n;i++)
{
    if(max==a[i])
    {
        cout<<"The maximum degree is "<< max<<"at vertex"<< i<<endl;
    }
} 

}











