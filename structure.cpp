#include<iostream>
using namespace std;
struct address
{int stateNo;
 int cityNo;
};

struct address addr;
struct student

{int rNo;
 char name[10];
	struct address addr;
	float cgpa;
};

int main(){
	struct student std;
	std.rNo=10;
	std.name='mj';
	std.stateNo=3;

	cout<<std;
	return 0;

}