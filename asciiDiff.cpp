#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.size()-1;i++){
		cout<<s[i];
		int x=int(s[i]);
		int y=int(s[i+1]);
		cout<<y-x;
	}
	cout<<s[s.size()-1];
	return 0;
}