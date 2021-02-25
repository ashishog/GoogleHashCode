#include<iostream>
#include<stdio.h>
using namespace std;
struct street
{
 int B,E;
 char str1[10000]; };
int main(){
    long long int D,I,S,V,F;
    cin>>D>>I>>S>>V>>F;
    struct street st[S];
    for(int i=0;i<S;i++)
    {
        cin>>st[i].B>>st[i].E;
        gets(st[i].str1);
    }
    return 0;
}

  
  
