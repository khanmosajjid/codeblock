#include<iostream>
using namespace std;

int main(){
	int key,a[10],count=0;

	for(int i=0;i<10;i++){
		cin>>a[i];
    }
    cin>>key;

    for(int i=0;i<10;i++){
    	if(a[i]==key){
    		cout<<"found at index"<<i+1;
    		 count =1;
    		break;
    	}

    }
    if(count!=1)
    	cout<<"number is not present";

    return 0;
}