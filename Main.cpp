#include<iostream>
#include<stdio.h>
using namespace std;
struct street
{
 int B,E,L;
 char str1[10000];
};
int main()
{
    long long int D,I,S,V,F;
    cin>>S>>I>>D>>V>>F;
    struct street st[S];
    for(int i=0;i<S;i++)
    {
        cout<<"\n";
        cin.get(st[i].B)>>(st[i].E)>>(st[i].str1)>>st[i].L;
        cout<<"\n";
    }
        return 0;
}

  
  
