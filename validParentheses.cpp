#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
	string temp="  ";
	for(auto &p :s){
		temp+=p;
		string t = temp.substr(temp.size()-2,2);
		if(t=="()")
			temp=temp.replace(temp.size()-2, temp.size()-1,"");
	}
	if(temp=="  ")
		return true;
	return false;
}
int main(){
	string s;
	cin >> s;
	cout << isValid(s);
}
