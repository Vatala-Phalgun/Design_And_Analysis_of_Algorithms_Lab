#include<iostream>
#include<string.h>
using namespace std;

int brute_force(char *txt,char *pat)
{
    int N,M,i,j;
    N=strlen(txt);
    M=strlen(pat);

    for(i=0;i<N-M;i++)
    {
        for(j=0;j<M;j++)
        {
            if(txt[i+j]!=pat[j])
            {
                break;
            }
        }
        if(j==M)
        {
            return i;
        }
}
}
int main()
{
    int index;
    char txt[100];
    char pat[50];

    cin>>txt;
    cin>>pat;

    index=brute_force(txt,pat);
    cout<<index;
    return 1;
}
