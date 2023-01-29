#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> symbolValue = {
    	{'I',1},
    	{'V',5},
    	{'X',10},
    	{'L',50},
    	{'C',100},
    	{'D',500},
    	{'M',1000}
    };
    int len = s.length();
    int number=0;
    int currentmax=0;
    for(int i=len-1; i>=0; i--){
    	if(symbolValue[s[i]]>=currentmax){
    		currentmax=symbolValue[s[i]];
    		number+=symbolValue[s[i]];
    	} else{
    		number-=symbolValue[s[i]];
    	}
    }
    return number;
};

int main(){
	string s;
	cin >> s;
	cout << romanToInt(s);
}
