#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
int main()
{
  int i,j;
  char Pizza0[3][10],Pizza1[3][10];
  for(i=0;i<3;i++)
    gets(Pizza0[i]);
    cout<<"\n\n";
  for(j=0;j<3;j++)
    gets(Pizza1[j]);
    cout<<"\n\n";
    cout<<"Hello ANPIKUAS";
}

#include<iostream> 
using namespace std; 

void compareOperation(string s1, string s2) 
{ 

	if((s1.compare(0, 5, s2, 3, 5)) == 0) 
		cout << "Welcome " << s1 << " " <<s2 << " Bro"; 

	else
		cout << "Strings didn't match "; 
} 
 int main() 
{ 
	string s1("Piyush"); 
	string s2("yooPiyush"); 
	compareOperation(s1, s2); 
	
return 0; 
} 


