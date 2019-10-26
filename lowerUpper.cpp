#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;

	if(int(s[0])>=97&&int(s[0])<=122){
		cout<<"lowercase"<<endl;
	}
	else if(int(s[0])>=65&&int(s[0])<=90){
		cout<<"UPPERCASE"<<endl;
	}
	else{
		cout<<"Invalid";
	}
	return 0;
}