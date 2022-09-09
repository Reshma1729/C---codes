// multiset is similar to set....but multiset is decrease order and allow duplicates ".count(x) is there"
//in set is ascending order...unique values, no duplicate

#include<bits/stdc++.h>
#include<set>  // is used fr multiset purpose
using namespace std;

int main(){
	set <int> s;	
	
	cout<<"set values: ";
	s.insert(67);
	s.insert(67);
	s.insert(80);
	s.insert(20);
	s.insert(10);
	s.insert(50);
	
	set <int> :: iterator it = s.begin();
	
	for(;it!=s.end();it++){
		cout<<*it<<"\t";
	}cout<<endl;
	
	//s.size(), s.max_size(), s.empty(), s.clear()
	//s.erase(50) 50 only delete  or 
	s.erase(s.begin(), s.find(50));  // it deletes the ele before 50 like 10,20
	for(it=s.begin();it!=s.end();it++){
		cout<<*it<<"\t";
	}cout<<"\n\n";
	
	multiset <int, greater<int> > mset;
	multiset <int, greater<int> > :: iterator itr;
	
	cout<<"multiset : ";
	mset.insert(40);    
	mset.insert(40);  
	mset.insert(20);  
	mset.insert(60);  
	mset.insert(50);  
	mset.insert(14);  
	
	for(itr = mset.begin();itr!=mset.end();itr++){
		cout<<*itr<<"\t";
	}cout<<endl;
	
	cout<<"40 occurance: "<<mset.count(40); //mset.size(), mset.erase(), max_size(), mset.clear(), mset.empty()
	
}
