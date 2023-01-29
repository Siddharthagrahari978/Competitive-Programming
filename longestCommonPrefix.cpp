#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	string shortest=strs[0];
	for(auto &p: strs){
		if(p.substr(0,shortest.length())!=shortest){
			while(true){
				shortest=shortest.substr(0,shortest.length()-1);
				if(p.substr(0,shortest.length())==shortest){
					break;
				}
			}
		}
	}
	return shortest;
};

int main(){
	int len;
	cin >> len;
	vector<string> strs;
	while(len--){
		string temp;
		cin >> temp;
		strs.push_back(temp);
	}
	cout << longestCommonPrefix(strs);
}
