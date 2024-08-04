#include <iostream>
using namespace std;
int main(){
	
	int ar[8]={12,24,36,67,39,89,45,37};
	
	for(int i=0;i<8;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
		for(int i=0;i<8;i++){
		
		if(ar[i]>=35 && ar[i]<40){
			ar[i]=40;
		}
	}
	for(int i=0;i<8;i++){
		cout<<ar[i]<<" ";
      }
}
