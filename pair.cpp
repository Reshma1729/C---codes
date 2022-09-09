#include<iostream>
#include<utility>

using namespace std;

int main(){
	pair <int , char> Pair;
	Pair.first = 100;
	Pair.second = 'K';
	
	cout<<Pair.first<<" ";
	cout<<Pair.second<<"\n";
	
	pair <int , char> Pair2(12, 'G');
	cout<<Pair2.first<<" ";
	cout<<Pair2.second<<"\n";
	
	pair <int , char> Pair3;
	Pair3 = make_pair(1, 'a');
	cout<<Pair3.first<<" ";
	cout<<Pair3.second<<"\n";
	
	pair <char , int> Pair4 = make_pair('A', 1);
	pair <char , int> Pair5 = make_pair('B', 2);
	
	cout<<"before swap: ";
	cout<<Pair4.first<<"\t"<<Pair4.second<<"\t";
	cout<<Pair5.first<<"\t"<<Pair5.second<<endl;
	   swap(Pair4,Pair5);
	cout<<"after swap: ";
	cout<<Pair4.first<<"\t"<<Pair4.second<<"\t";
	cout<<Pair5.first<<"\t"<<Pair5.second;
}
