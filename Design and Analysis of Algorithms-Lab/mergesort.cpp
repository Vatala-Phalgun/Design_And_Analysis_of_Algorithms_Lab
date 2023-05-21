#include<iostream>
using namespace std;

int main()
{
    int N,i,j,n1,n2;
    cout<<" "<<endl;
    cin>>N;
    int a[N];

    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }

    cout<<"Array before Sorting"<<endl;
    for(i=0;i<N;i++)
    {
        cout<<a[i];
    }

    void mergeSort(int arr[],int l,int m,int r)
    {
        int n1=m-l+1;
        int n2=r-m;
        int L[n1], M[n2];
    for (int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
        for(int j=0;j<n2;j++)
        {
            M[j]=arr[q+1+j];
        }
    }
    }
    return 0;
    
}


