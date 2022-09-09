#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int arr[10]={20,50,78,98,23,11,3,5,76,10};
	int target,count=0;
	cout<<"enter num to search :";
	cin>>target;
	
	sort(arr,arr+10);
	
	cout<<"sorted elements: ";
	for(int i=0;i<10;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	for(int i=0;i<10;i++){
		if(arr[i]<=target){
			count++;
		}
	}
	cout<<"searched value present at index "<<count-1<<"\n";
	
	if(binary_search(arr,arr+10,98)){
	   cout<<"98 is present"; }
	else{
	   cout<<"98 is not present";
	}
  return 0;	
}
