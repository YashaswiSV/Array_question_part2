#include <iostream>
using namespace std;
int main(){
	             //Array display
	int n,sum=0,high=0,low=0,even=0,odd=0,sumE=0,sumO=0,temp=0,sec_high=0,sec_low=0;
	cout<<"Enter the range: ";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter number with index "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<"The number with index are: "<<i+1<<" : "<<arr[i]<<endl;
		
	}
	
	             //Array in reverse order
//	cout<<endl;
//	
//		for(int i=n-1;i>=0;i--){
//		cout<<"The number are: "<<arr[i]<<endl;
//		
//	}
	            //Add all the element of array + average
	          
//	          cout<<endl;
//			for(int i=0;i<n;i++) {
//				sum=sum+arr[i];
//			
//			} 
//				cout<<"The total of all no. :"<<sum<<endl; 
//				cout<<"The Average of all no. :"<<sum/(float)n;  


                //Highest,second highest + lowest,second lowest
            
			high= arr[0];
			low= arr[0] ;
			for(int i=0;i<n;i++){
				if(arr[i]>arr[0])
				  high=arr[i];

				else
				   low=arr[i];  
			}  
			cout<<"Higest : "<<high<<endl;
			cout<<"Lowest : "<<low<<endl; 
             
//			 high=0;
//			 low=0;
			
			   
	        for(int i=0;i<n;i++){
				if(arr[i]>arr[1])
				  sec_high=arr[i];
				
				  
				else
				   sec_low=arr[i];  
			}  
				cout<<"Second Higest : "<<sec_high<<endl;
					cout<<"Second lowest : "<<sec_low<<endl;
					
					
					
					
					//Even and odd + addition o even & odd
//		even= arr[n];
//		 odd = arr[n];		
//					
//		for(int i=0;i<n;i++){
//			if(arr[i]%2==0){
//				even=arr[i];
//				sumE=sumE+even;
//					cout<<"Even  : "<<"Stored at "<<i<<": "<<even<<endl;
//			}
//			else{
//				odd=arr[i];
//				sumO=sumO+odd;
//				cout<<"Odd : "<<"Stored at "<<i<<": "<<odd<<endl;	
//				
//			}
//			    
//			
//		}
//			cout<<"Sum of Even on. : "<<sumE<<endl;
////			cout<<"Sum of odd on. : "<<sumO<<endl;
	
				//Swapping first & last element    
//				
//	  			temp=arr[0];
//	  			arr[0]=arr[n-1];
//	  			arr[n-1]=temp;
//	  			for(int i=0;i<n;i++){
//
//	  				cout<<arr[i];
//				  
//	  		
//			}
			
	
}
