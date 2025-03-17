//Algorithm: Quick Sort
//Topic: Divide and Conquor

#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArray(vector<int>& nums) {
    if (nums.size() <= 1) return nums;

    int l = 1, r = nums.size() - 1, p = 0;

    while (true) {
        if (nums[l] < nums[p]) {
            l++;
        }
        else if (nums[r] > nums[p]) {
            r--;
        }
        else if (l <= r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }

        if (r < l) {
            swap(nums[p], nums[r]);

            int pivot = nums[r];  

            vector<int> leftArr;
            if (r > 0) {
                leftArr.assign(nums.begin(), nums.begin() + r);
            }

            vector<int> rightArr;
            if (r + 1 < nums.size()) {
                rightArr.assign(nums.begin() + r + 1, nums.end());
            }

            leftArr = sortArray(leftArr);
            rightArr = sortArray(rightArr);

            nums.clear();
            nums.insert(nums.end(), leftArr.begin(), leftArr.end());
            nums.push_back(pivot); 
            nums.insert(nums.end(), rightArr.begin(), rightArr.end());

            break;
        }
    }

    return nums;
}


int main() {
    //vector<int> arr = { 5,6,7,3,1,4,34,2,123,342,54,0 };
	vector<int> arr = { 40,20,10,80,60,50,7,30,100 };
	arr = sortArray(arr);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}


    return 0;
}
