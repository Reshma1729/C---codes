#include<bits/stdc++.h>
#include<string>

using namespace std;


void reverseStr(string &str){
  int n = str.length();
  for(int i=0;i<n/2;i++)
    swap(str[i], str[n-i-1]); 
} 

int main(){
	string s ("geeksforgeeks");  //string s = {"geeksfrgeeks"};
	cout<<s<<"\n";
	
	string s1(3,'A');  //string s1(3,'at') -> no two ele is allowed, we use "A" for "at".
	cout<<s1<<"\n";
	
	cout<<"length: "<<s.length()<<endl;
	cout<<"Pos of specific ele: "<<s.at(5)<<endl;
	
	int ind = s.find("for");
	cout<<"ind 'for': "<<ind<<endl;  //from 5th index it starts
	
	s.replace(5,3,"are");
	cout<<"replace for with are: "<<s<<"\n";
	
	s.erase(5,3);
	cout<<"erase (5,6,7): "<<s<<"\n";
	
	s.append(s1);
	cout<<"s+s1: "<<s<<endl;
	
	string s2 = s.substr(0,5);  //from 0 to 4
	cout<<s2;
	
    s.clear();  //entire string is deleted
	cout<<s<<endl;
	
	string str = "reshmakumar";
	reverseStr(str); //in built reverse is "reverse(str.begin(), str.end());
	cout<<str<<endl;
			
	return 0;
}

