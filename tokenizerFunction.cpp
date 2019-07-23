# include<bits/stdc++.h>
using namespace std;

// how to use string tokenizer function
int main(){
	char s[] ="we are learning about string";
	char *ptr; //null pointer
            
	ptr=strtok(s," "); //seperation string over space
	while(ptr!=NULL){
      cout<<ptr<<endl;
      ptr=strtok(NULL," ");
	}

	return 0;
}