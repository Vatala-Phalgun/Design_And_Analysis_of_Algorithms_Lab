#include<iostream>
#include<climits>
using namespace std;

int minimumDist(int dist[],bool Tset[])
{
    int min=INT_MAX,index;
    
    for(int i=0;i<6;i++)
    {
        if(Tset[i]==false && dist[i]<=min)
        {
            min=dist[i];
            index=i;
        }
    }
    return index;
}

void Dijkstra(int graph[6][6],int src)
{
    int dist[6];
    bool Tset[6];
    
    for(int i=0;i<6;i++)
    {
        dist[i]=INT_MAX;
        Tset[i]=false;
    }
    
    dist[src]=0;
    
    for(int i=0;i<6;i++)
    {
        int m=minimumDist(dist,Tset);
        Tset[m]=true;
        
        for(int i=0;i<6;i++)
        {
            if(!Tset[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])
            {
                dist[i]=dist[m]+graph[m][i];
            }
        }
    }
    cout<<"Distance from Source"<<endl;
    for(int i=0;i<6;i++)
    {
        char str=65+i;
        cout<<dist[i]<<endl;
    }
}

int main()
{
    int graph[6][6];
    
    for(int i=0;i<6;i++)
    {
       for(int j=0;j<6;j++)
       {
           cin>>graph[i][j];
       }
    }
    
    Dijkstra(graph,0);
    return 0;
}