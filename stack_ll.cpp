#include<bits/stdc++.h>
using namespace std;
#define N 5
int stack[N];
int top=-1;

void push(int data){
	if(isFull()){
		return 0;	}
	else{
		top++;
		stack[top]=data;
		cout<<"data is inserted";
		} } 
		
int pop(){
	int item;
	if(isEmpty()){
		return 0;	}
	else{
		item = stack[top];
		top--;
		cout<<"data: "<<stack[top];		
	} return top;}
	
int peek(){
	if(isEmpty()){
		return 0;	}
	else{
		return stack[top];		
	}
}

void display(){
	for(int i=top;i>0;i--){
		cout<<stack[i]<<" ";		
	}
	
int isFull(){
  if(top==N-1){
  return 1;
}
else{
	return 0;
} }

int isEmpty(){
 if(top==-1){
	return 1;
}else{
	return 0;
} }

}
	
void main(){
   int ch,data;
   cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.peek"<<endl<<"4.display"<<endl<<"5.quit\n"<<"enter ch: ";
   cin>>ch;
   switch(ch){
   	case 1 : 
	         push();
   	case 2 : pop();
   	case 3 : peek();
   	case 4 : display();
   	case 5 : exit(0);
   	default : cout<<"Invalid input";
   }

}

