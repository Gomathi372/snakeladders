#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter the age";
	cin>>age;
	if(age>=18)
	{ 
	cout<<"you are elligible for voting";
	}
	else{
		cout<<"you are not elligible for voting\n";
		cout<<"you have to wait for"<<18-age<<"years for voting";
	}
}

