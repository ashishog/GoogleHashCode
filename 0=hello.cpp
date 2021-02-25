/* #include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
  int i,j,p,cnt=0;
  char Pizza0[3][10],Pizza1[3][10];

  for(i=0;i<3;i++)
    gets(Pizza0[i]);
    cout<<"\n\n";
  for(j=0;j<3;j++)
    gets(Pizza1[j]);
    cout<<"\n\n";
  //cout<<funcomp(&Pizza0[3][10],&Pizza1[3][10]);
  if(strcmp(Pizza0[1],Pizza1[1])==0)
        cnt++;
  cout<<cnt;
}

#include<iostream> 
using namespace std; 

void compareOperation(string s1, string s2) 
{ 

	if((s1.compare(0, 5, s2, 3, 5)) == 0) 
		cout << "1"; 

	else
		cout << "0 "; 
} 
 int main() 
{ 
	string s1("Piyush"); 
	string s2("yooPiyush"); 
	compareOperation(s1, s2); 
	
return 0; 
} 






#include<iostream> 
using namespace std; 

void compareOperation(string s1, string s2) 
{ 

	if((s1.compare(0, 3, s2, 0, 3)) == 0) 
		cout << "1"; 

	else
		cout <<"0"; 
} 

int main() {
   string s1;
   string s2;
   cin>>s1;
   cin>>s2;
	compareOperation(s1, s2); 
	
return 0; 
} 
*/

