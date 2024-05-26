#include <bits/stdc++.h>
using namespace std;
int tinhgiatri(int a, int b, char c){
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='*') return a*b;
	if(c=='/') return a/b;
}
int tinhhauto(string s){
	stack <int> st;
	for(int i=0; i<s.length(); i++){
		if(isdigit(s[i])){
			int n=s[i]-'0';
			st.push(n);
		}
		else {
			int b=st.top(); st.pop();
			int a=st.top(); st.pop();
			int x=tinhgiatri(a, b, s[i]);
			st.push(x);
		}
	}
	return st.top();
}
int main(){
	int t; cin >>t;
	while(t--){
		string s;
		cin >>s;
		cout <<tinhhauto(s)<<endl;
	}
}
