#include<bits/stdc++.h>
using namespace std;

// int gcd(int a, int b){
//   	 if(a==b){
//   	    return 0;
//	  }
//	  return gcd(b%a,a);
//   }
//   
// int lcm(int a, int b){
//    return(a*b)/gcd(a,b);
//   }
   
 int main(){
	int a,b,max_num,min_num;
	cin>>a>>b;
//	n=gcd(a,b);
//	m=lcm(a,b);
//	cout<<"GCD :"<<n<<"LCM :"<<m;
	// max for lcm and min for hcf
	max_num=max(a,b);
	while(max_num!=0){
		if(max_num%a==0 && max_num%b==0){	
			cout<<"LCM :"<<max_num<<"\n";
			break;
		}else{ 
		    max_num++;
		}
	}
	min_num=min(a,b);
	while(min_num!=0){
		if(a%min_num==0 && b%min_num==0){		
			cout<<"GCD :"<<min_num;
			break;
		}else{ 
		    min_num--;
		}
	} 
}
  

