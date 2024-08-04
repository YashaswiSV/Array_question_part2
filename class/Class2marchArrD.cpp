#include <iostream>
using namespace std;
int main(){
	
	int a[6]={23,44,-5,66,8,10};
	int high,s_high,temp;
	high=a[0];
	 s_high=a[0];
	 
	 
	for(int i=1;i<6;i++){
		if(a[i]>high){
		
		    high=a[i];
		   
		    temp=high;
		    a[0]=a[i];
		    	if(a[i]>s_high && a[i]<high){
				
		         s_high=a[i]; 
		}
		}
		
		    
	
//		    continue;
	}
	cout<<high<<endl ;
	cout<<s_high;
}
