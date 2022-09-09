#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){
	queue <int> q,q1;
	stack <int> s,s1;
	
	q.push(20);
	q.push(80);
    q.push(40);
    q.push(60);
    q1=q;
    s.push(10);
    s.push(70);
    s.push(50);
    s.push(30);
    s1=s;
    
    while(q1.size()>0){
    	cout<<"Queue Top: "<<q1.front()<<"\tqueue pos: "<<q1.size()<<"\n";  //q.front(),q.back(),q.size()
    	q1.pop();
	}cout<<"\n";
	while(s1.size()>0){
    	cout<<"stack Top: "<<s1.top()<<"\tstack pos: "<<s1.size()<<"\n";   //s.size(),s.top()
    	s1.pop();
	}
	
}
