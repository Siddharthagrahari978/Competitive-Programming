#include<bits/stdec++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
	unordered_map<int, int> travelled;
	for(int i=0; i<nums.size(); i++){
		int adam = nums[i], eve = target - nums[i];
		if(travelled.count(eve)){
			return {travelled[eve], i};
		}
		else{
			travelled[adam]=i;
		}
	}
	return {};
}
void twoSumMiddleware(){
	int len;
	cin >> len;
	vector<int> nums;
	while(len--){
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}
	int target;
	cin >> target;
	vector<int> result = twoSum(nums, target);
	for(auto &p: result){
		cout << p << " ";
	}
}
int main(){
  twoSumMiddleware();
}
