#include<iostream>
#include<queue>

using namespace std;

int main(){
	priority_queue <int> q;
	int i;
	q.push(10);
	q.push(100);
	q.push(160);
	q.push(40);
	q.push(20);
	q.push(190);
	i=q.size();
	while(i--){ 
	   cout<<i<<" : "<<q.top()<<endl;
	   q.pop();}
	return 0;
}
