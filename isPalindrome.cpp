#include <bits/stdc++.h>
using namespace std;

bool isPalandrome(int x){
	string str1= to_string(x);
	string str2=str1;
	int n = str1.length();
	for(int i=0; i<n/2; i++)
		swap(str1[i], str1[n-i-1]);
	if(str1==str2){
		return true;
	}
	return false;
}
int main(){
	int x;
	cin >> x;
	cout << isPalandrome(x);
}
