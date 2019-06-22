#include <iostream>
#include <bits/stdc++.h>
#include <sstream>  // for string streams 
#include <string>  // for string 
using namespace std;


int main() {
  long long int t,count,i,x,j;

    cin>>t;
   
    
    for( i=0;i<t;i++){
        //ostringstream str1;
        string r="";
        cin>>x;
        //str1<<x;
        r=to_string(x);
        int sum=0;
        while(x!=0){
            sum=sum+x%10;
            x=x/10;
        }
        cout<<r<<endl;
        cout<<sum<<endl;
        int temp=0;
        while(sum%10!=0){
            sum=sum+temp;
            temp++;
        }
        cout<<sum<<endl;
        cout<<temp<<endl;
        cout<<to_string(temp)<<endl;
        r=r+to_string(temp);
        cout<<r<<endl;
        
    }
   return 0;

}
