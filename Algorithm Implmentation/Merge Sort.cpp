//Algorithm: Merge Sort
//Topic: Divide and Conquor


#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int>& left, vector<int>& right) {

	vector<int> answer;
	int i = 0, j = 0;

	while (i < left.size() && j < right.size()) {
		if (left[i] < right[j]) {
			answer.push_back(left[i]);
			i++;
		}
		else
		{
			answer.push_back(right[j]);
			j++;
		}
	}

	if (i < left.size()) {
		while (i < left.size()) {
			answer.push_back(left[i]);
			i++;
		}
	}
	else if (j < right.size()) {
		while (j < right.size()) {
			answer.push_back(right[j]);
			j++;
		}
	}


	return answer;
}

vector<int> sortArray(vector<int>& nums) {
	int n = nums.size();


	if (n > 1) {

		int halfSize = nums.size() / 2;

		vector<int> secondHalf(nums.begin() + halfSize, nums.end());
		vector<int> firstHalf(nums.begin(), nums.begin() + halfSize);


		firstHalf = sortArray(firstHalf);
		secondHalf = sortArray(secondHalf);

		return merge(firstHalf, secondHalf);

	}
	else
	{
		return nums;
	}


	
}

int main() {
    vector<int> arr = { 5,6,7,3,1,4,5,34,2,123,342,54,0 };

	arr = sortArray(arr);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}


    return 0;
}
