#include <iostream>
using namespace std;
int main(){
	/*
	   int high,sec_h;
	   int a[6]={23,45,66,77,1,89};
	   
	   high=a[0];
	   sec_h=a[0];
	   
	   
	   for(int i=1;i<6;i++){
	   	if(a[i]>high){
	   		 high=a[i];
//	   	   a[i]=a[0];
		   }
//	   	sec_h=high;
	   	  
	   	if(a[i]>sec_h && sec_h<a[i] ){
	   		
		         sec_h=a[i] ; 
		   } 
	   	  
	   }
	     cout<<"highest: " <<high<<endl;
		 cout<<"Second high : "<<sec_h;     



}
*/

                     //2d
                     
           int row,col,sum,i,j,high_r,high_c;
           cout<<"enter row and col: ";
           cin>>row>>col;
           int arr[row][col];
           
           	for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					cout<<"row and colomn: "<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
					cin>>arr[i][j];
				}
//				cout<<endl;
			} 
			cout<<endl; 		
			
			//********mattrix display ---->addition row wise*******
	/*		

			for(int i=0;i<row;i++){
				sum=0;
				for(int j=0;j<col;j++){
						sum=sum+arr[i][j];
					cout<<arr[i][j]<<" ";
				
				}
				cout<<" "<<sum;
				cout<<endl;
			}
		}
*/
			   //*******mattrix display ---->addition colomn wise********
			   
			   	
		    
			for(int i=0;i<row;i++){
				  	sum=0;  
				for(int j=0;j<col;j++){
					
                   	sum=sum+arr[j][i];
                   	
					cout<<arr[i][j]<<" ";
				   		  
				}
               		cout<<sum<<" ";
				cout<<endl;
			} 

			 for(int i=0;i<row;i++){             //**doubt**
			 
                	cout<<sum<<" ";
				}
			}


			
			 
			 //**********Diagonal elements************
			
			
//			 	for(int i=0;i<row;i++){ 
//			    	for(int j=0;j<col;j++){
//			    		if(i==j){
//			    			 cout<<" "<<arr[i][j]<<" ";
//						}
//					    else{
//					    	cout<<" "<<"0"<<" ";
//						}	   		  
//				}
//              
//				cout<<endl;
//			} 
                    
                    //**************reverse triangle*************

//            	for(int i=0;i<row;i++){ 
//			    	for(int j=0;j<col;j++){
//			    		if(i<=j){
//			    			 cout<<arr[i][j];
//						}
//					    else{
//					    	cout<<" ";
//						}	   		  
//				}
//              
//				cout<<endl;
//			} 


                   //********row wise Highest*********
                   
//           	for(int i=0;i<row;i++){
//				high_r=arr[i][j];
//				for(int j=1;j<col;j++){
//					if(arr[i][j]>high_r){
//						high_r=arr[i][j];
//					}
//					
//				
//				}
//				cout<<high_r;
//				
//				cout<<endl;
//			}   
			
			     //***********coloum wise height*******
			
//				for(int i=0;i<row;i++){
//				high_c=arr[j][i];
//				for(int j=0;j<col;j++){
//					if(arr[j][i]>high_c){
//						high_c=arr[j][i];
//					}
//					
//				
//				}
//				cout<<high_c;
//				
//				cout<<endl;
//			}   
                    
			
		
			
			
//	}
