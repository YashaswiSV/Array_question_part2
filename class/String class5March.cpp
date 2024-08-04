#include <iostream>
using namespace std;
int main(){
//	char name[10]={'a','m','a','n','\0'};
//	cout<< name[3];
	
	string name="aman";
	cout<<name;
	cout<<"\nEnter name : ";
//	cin>>name;
	getline(cin,name);
	
	cout<<"You entered: "<<name;
}
