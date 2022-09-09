#include<bits/stdc++.h>
using namespace std;

void showlist(list <int> g){
	list <int> :: iterator it;
	for(it = g.begin(); it != g.end(); ++it){
		cout<<*it<<" ";
	}cout<<"\n";
}

int main(){
	list <int> glist1, glist2;
	for(int i=0;i<10;++i){
		glist1.push_back(i * 3);
		glist2.push_front(i * 3);
	}
	cout<<"1st list: ";
	showlist(glist1);
	cout<<"2nd list: ";
	showlist(glist2);
	
	glist1.pop_back();
	cout<<"list after delete at back: ";
	showlist(glist1);
	
	glist1.pop_front();
	cout<<"list after delete at front: ";
	showlist(glist1);
	
	glist1.reverse();
	cout<<"list after reverse: ";
	showlist(glist1);
	
	glist1.sort();
	cout<<"list after sort: ";
	showlist(glist1);
	
	glist1.remove(6);
	cout<<"list after 6 removed: ";
	showlist(glist1);
	
	glist1.clear();
	cout<<"size: "<<glist1.size();
}
