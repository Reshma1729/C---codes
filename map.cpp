#include<bits/stdc++.h>
#include<map>
#include<iterator>

using namespace std;

int main(){
	map <int, int> map1;
	
	map1.insert(pair <int, int>(6,50));
	map1.insert(pair <int, int>(1,40));
	map1.insert(pair <int, int>(2,30));
	map1.insert(pair <int, int>(2,90));
	map1.insert(pair <int, int>(4,20));
	map1.insert(pair <int, int>(7,10));
	map1.insert(pair <int, int>(8,60));
	
	map <int, int> :: iterator itr;
	cout<<"the map1 is: "<<endl;
	cout<<"\tKEY\tElEMENT\n";
	for(itr=map1.begin();itr!=map1.end();itr++){
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
	}  
	
	//map1.erase()  or map1.erase(map1.begin(),map1.find(2));
}
