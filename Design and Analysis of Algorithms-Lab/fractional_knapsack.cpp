#include<iostream>
#include<iomanip>
using namespace std;

int i,j,n,cap,val=0,t;
int w[100],v[100],r[100];

int main()
{
cin>>cap;
cin>>n;
for(i=0;i<n;i++)
{
cin>>w[i];
cin>>v[i];
}
for(i=0;i<n;i++)
{
r[i]=v[i]/w[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(r[i]<r[j])
{
t=r[i];
r[i]=r[j];
r[j]=t;
t=v[i];
v[i]=v[j];
v[j]=t;
t=w[i];
w[i]=w[j];
w[j]=t;
}
}
}
for(i=0;i<n;i++)
{
if(w[i]<=cap)
{
cout<<i+1<<" "<<v[i]<<" "<<w[i]<<" ";
cap=cap-w[i];
cout<<cap<<endl;
val=val+w[i]*r[i];
}
else
{
val=val+cap*r[i];
int per=(20*100/w[i]);
cap=cap-per*w[i];
cout<<per<<"%"<<" "<<v[i]<<" "<<w[i]<<" "<<i+1<<" "<<endl;
}
}
cout<<"Filled the bag with objects worth "<<fixed<<setprecision(2)<<(float)val<<"Rs";
}