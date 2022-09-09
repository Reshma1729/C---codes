#include<bits/stdc++.h>
#include<vector>
#include<iterator>

using namespace std;

int main(){
	vector <int> arr;
	for(int i=1;i<=5;i++){
		arr.push_back(i);
	}
	
	vector <int> :: iterator ptr; //declare iterator to vector
	
	cout<<"vector ele are: ";
	for(ptr=arr.begin();ptr<arr.end();ptr++){
		cout<<*ptr<<"\t";
	}cout<<endl;
	
	vector <int> :: iterator it = arr.begin();
	advance(it,3);  //to increase iterator pos
	cout<<"pos after advance: "<<*it<<endl;
	
	vector <int> :: iterator eit = arr.end();
	cout<<"pos at end: "<<*eit<<endl;
		
	//vector <int> :: iterator nit = next(it, 3);
	//cout<<"pos next: "<<*nit<<endl;
	
	//vector <int> :: iterator pit = prev(eit, 3);
	//cout<<"pos prev: "<<*pit<<endl;
	
	return 0;
}
