#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main(){
	vector<int> v1;
	
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(50);
	v1.push_back(20);
	v1.push_back(10);

	make_heap(v1.begin(),v1.end());
	cout<<"the max ele of heap: ";
	cout<<v1.front()<<"\n";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<"\n";
	}
	
	v1.push_back(70);
	push_heap(v1.begin(),v1.end());
	cout<<"after push: \n";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<"\n";
	}
	
	pop_heap(v1.begin(),v1.end());
	v1.pop_back();
	cout<<"after pop: \n";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<"\n";
	}
	
	cout<<"heap size: "<<v1.size()<<endl;
	
	sort_heap(v1.begin(),v1.end());
	cout<<"after sort: \n";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<"\n";
	}
	
	/*is_heap(v1.begin(),v1.end())?
	cout<<"is heap" : cout<<"is not heap\n";
	   
	vector <int> :: iterator it1;   
	vector <int> :: iterator it = is_heap_until(v1.begin(),v1.end());
	
	cout<<"heap ele: ";
	for(it1=v1.begin();it1!=it;it1++){
		cout<<*it1<<"\t";
	}	cout<<"\n";*/
	   
	
}
