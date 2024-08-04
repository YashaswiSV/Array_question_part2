#include <iostream>
using namespace std;
int main(){
	                       //Array questions
	      int n,sum=0,high=0,small=0;
	      
	      
		  cout<<"How many student are there in class: ";
		  cin>>n;
		  
		  int marks[n];
          string name[n];
		  
		  for(int i=0;i<n;i++){
		  	cout<<"Enter name of student: "<<i+1<<" : ";
		  	cin>>name[i];
		  	cout<<"Enter the marks of student :"<<i+1<<": ";
		  	cin>>marks[i];
		  }   
		  cout<<"Array of student having:"<<n<<"students = {";
		  for(int i=0;i<n;i++){
		  	cout<<"["<<name[i]<<"-"<<marks[i]<<"]"<<"}"<<endl;
		  	sum=sum+marks[i];
		  }
		  cout<<"Total marks of class :"<<sum<<endl;
		  cout<<"Average marks of student :"<<sum/(float)n<<endl;
		  
		    
		  high=marks[0] ; 
		  small=marks[0] ; 
		  
		  int high_index,low_index; 
		       
		  for(int i=0;i<n;i++){
		  	cout<<"Student marks at index number "<<i+1<<" : "<<marks[i]<<endl;
		  	
		  	sum=sum+marks[i];
		  	 if(marks[i]>high){
			   
		  	 	high=marks[i];
		  	 	high_index=i;
		  	 }
		  
		  	 if(marks[i]<small){
			   
		  	    small=marks[i];
		  	    low_index=i;
//                if(marks[i]>=35 && marks[i]<=40)
//                cout<<"Grace 5 marks given"<<endl;
//                else
//                cout<<"Grace 5 marks not given"<<endl;
             }
	  }
			   	cout<<"It is highest  "<<high<<"\nObtained by: "<<name[high_index]<<endl;
			   	
		  	cout<<"It is smallest "<<small<<"\nObtained by: "<<name[low_index]<<endl;
		  		
		  	
         	}
         	
         	
         	
		  
		  
		  	
		  
//		  cout<<"the total sum of marks : "<<sum<<endl;
//		  cout<<"Average of class: "<<sum/(float)n<<endl;
		 
		  
		  
		  
		  
		  
	

