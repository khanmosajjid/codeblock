#include<bits/stdc++.h>
using namespace std;

//using 3 characters for source destination and helper
void towerOfHanoi(int n,char src,char dest,char help){
	if(n==0){
		return;
	}
	towerOfHanoi(n-1,src,help,dest);
	cout<<"move"<<n<<"from"<<src<<"to"<<dest<<endl;
	towerOfHanoi(n-1,help,dest,src);

}

int main(){
	int n;
	cin>>n;
	towerOfHanoi(n,'A','C','B');
	return 0;
}