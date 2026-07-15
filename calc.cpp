#include<iostream>
using namespace std;
int main(){
	int a,b,ch;
	cout<<"Enter operand 1:";
	cin>>a;
	cout<<"Enter operand 2:";
	cin>>b;
	cout<<"1.Addition\n2.Subtraction";
	cout<<"\nEnter your choice:";
	cin>>ch;
	if(ch==1){
		cout<<"Result:"<<a+b;
	}
	else{
		cout<<"Result:"<<a-b;
	}
	cout<<endl;
	return 0;
}
