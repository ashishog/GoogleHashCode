#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
int main()
{
  int i;
  char Pizza0[3][10],Pizza1[3][10];
  cin>>std1;
  for(i=0;i<3;i++)
    gets(Pizza0[i]);
    cout<<"\n\n";
  for(j=0;j<3;j++)
    gets(Pizza1[j]);
    cout<<"\n\n";
  funcomp(Pizza0,Pizza1)  
    cout<<"Hello ANPIKUAS";
}


int main()
{
    char sName[28];
    cin>>sName;      //Get the name of the student to be searched

      /// Reading the tables

    ifstream in("students.bin", ios::in | ios::binary);

    student Student; //This is a struct

    while (in.read((char*) &Student, sizeof(student)))
    {
    if(sName==Student.name)//Student.name is also a char[28]
    {
                cout<<"found"<<endl;
        break;
    }
}
