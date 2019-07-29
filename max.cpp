#include<bits/stdc++.h>
using namespace std;

int max(long long int a[],int n){
    long long int i,max=0;
    for(i=0;i<n;i++){
          if(a[i]>max){
              max=a[i];
          }
    }
    return max;

}
int main() {
    int n,i;
    long long int a[100000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<max(a,n);
	return 0;
}