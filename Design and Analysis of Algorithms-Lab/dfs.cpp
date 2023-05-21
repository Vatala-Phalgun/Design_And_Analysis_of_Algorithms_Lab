#include<iostream>
using namespace std;

void depth_first(N,*adj,S)
{
    int i,j,top;
    int stack[N];
    for(i=S;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
            if(i==S)
            {
                stack[i]=s;
                top=i;
            }
            else if(top=N-1)
            {
                top=top--;
            }
        }
    }
   
}
int main()
{
    int n,i,j,s;
    cin>>n;

    int adj[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>adj[i][j];
        }
    }

    cin>>s;
    depth_first(n,adj[i][j],s);

    return 0;

}