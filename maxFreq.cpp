#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    map<char,int>m;

    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
     int max=0;
     char item=s[0];
        map<char,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){

        if(max<itr->second){
            item=itr->first;
        }
       if(max<itr->second){
        max=itr->second;
       }
    }

    cout<<item<<endl;
    return 0;
    
 //    vector<int>a;
 //    cout<<s.size()<<endl;
 //    for(int i=0;i<s.size();i++){
 //        a.push_back(0);
 //    }

 //    for(int i=0;i<s.size();i++){
 //      int x=int(s[i])-97;
 //      cout<<x<<" is the value of x"<<endl;
 //      a[x]=a[x]+1;
 //      cout<<a[x]<<" goes itno the array"<<endl;
 //    }
 //     int max=0;
 //        int index=0;
 //    for(int i=0;i<s.size();i++){
       
 //        if(max<a[i]){
 //            max=a[i];
 //            index=i;
 //        }
 //    }

 //    cout<<s[index];
    
	// return 0;
}