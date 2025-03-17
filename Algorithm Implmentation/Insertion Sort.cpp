//Algorithm: Insertion Sort
//Topic: Brute Force

#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArray(vector<int>& nums) {
	
	int n = nums.size();

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++) {
			if (nums[i] < nums[j])
				swap(nums[i], nums[j]);
		}
	}

	return nums;

}


int main() {
    //vector<int> arr = { 5,6,7,3,1,4,34,2,123,342,54,0 };
	vector<int> arr = { 40,20,10,80,60,50,7,30,100 };
    //vector<int> arr = { 0,1,2,3,4,5,6,7,8,8,9 };
	arr = sortArray(arr);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}


    return 0;
}
