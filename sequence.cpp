#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,j,c;
	cin>>n;

	string s="1";
	
	for(int k=0;k<n;k++){
		cout<<s<<endl;
       string temp="";
       for(int i=0;s[i]!='\0';i++){
       	  char x=s[i];
       	  j=i;
       	  c=0;
       	  while(s[j]!='\0'&&s[i]!='\0'&& s[j]==x){
       	  	c++;
       	  	i++;
       	  	j++;

       	  }
       	  i=i-1;
       	  temp=temp+to_string(c)+x;
       }
       s=temp;
       
   }
}