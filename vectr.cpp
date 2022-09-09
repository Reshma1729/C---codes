#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector <int> v,v1;
	v1=v;
	v1.push_back(10);
	v1.push_back(60);
	v1.push_back(80);
	v1.push_back(100);
	v1.push_back(20);    /*for(int i=1;i<=5;i++){
                          v1.push_back(i); }*/
    cout<<"Elements at vector : ";                      
	for(int i=0;i<5;i++){
		 cout<<v1[i]<<"\t";
	}cout<<"\n";
	cout<<"Elements at vector : ";
	for(int i=0;i<v1.size();i++){
		cout<<v1.at(i)<<"\t";
	}cout<<"\n";	
	
	cout<<"vector max_size: "<<v1.max_size()<<"\n";
	cout<<"vector capacity: "<<v1.capacity()<<"\n";
	cout<<"vector size: "<<v1.size()<<"\n";
	cout<<"first ele: "<<v1.front()<<"\n";
	cout<<"last ele: "<<v1.back()<<"\n";
	cout<<"ele at pos 3: "<<v1.at(3)<<"\n";

	if(v1.empty()){
		cout<<"vector is empty";
	}else{
		cout<<"vector is not empty";
	}
	
	return 0;
}
