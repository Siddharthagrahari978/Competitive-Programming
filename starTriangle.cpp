#include<bits/sdtc++.h>
using namespace std;
void starTriangle(int num){
	int space = num-1;
	for(int i=1; i<=num;i++){
		for(int j=space;j>0;j--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			if(i==num && j==i){
				cout<<"*";
			}
			else if(j==i){
				cout<<"*"<<endl;
			}
			else{
				cout<<"* ";
			}
		}
		space--;
	}
}
int main(){
  int num;
  cin >> num;
  starTriangle(num);
}
