#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// for sum
/*int sumVector(const vector<int>& nums){
    int sum = 0;
    for(int num: nums){
        sum += num;
    }
    return sum;
}

//for max
int findMax(const vector<int>& nums){
    if(nums.empty()){
        throw invalid_argument("Vector is empty");
    }
    int max = nums[0];
    for(int num: nums){
        if(num>max){
            max = num;
        }
    }
    return max;
}

//using STL algorithm (easier) 
int findMaxSTL(const vector<int>& nums){
    return *max_element(nums.begin(), nums.end());
}


int main(){
    vector<int> nums = {10,20,30,40,50};
    cout << "Max element: " << findMax(nums) << endl;
    cout << "Max element: " << findMaxSTL(nums) << endl;
    cout << "Sum: " << sumVector(nums) << endl;
    return 0;
}*/



//student marks claculator
/*int main() {
    vector<int> marks;
    int numStudents;
    
    cout << "Enter number of students: ";
    cin >> numStudents;
    

    for(int i = 0; i < numStudents; i++) {
        int mark;
        cout << "Enter mark for student " << i+1 << ": ";
        cin >> mark;
        marks.push_back(mark);
    }
    
    
    int sum = 0;
    for(int i = 0; i < marks.size(); i++) {
        sum = sum + marks[i];
    }
    
    
    double average = (double)sum / marks.size();
    cout << "Average mark: " << average << endl;
    
    int highest = marks[0];
    for(int mark : marks) {
        if(mark > highest) {
            highest = mark;
        }
    }
    cout << "Highest mark: " << highest << endl;
    
    return 0;
}*/

//manual methode
/*void reverseVector(vector<int>& nums)
{
    int left = 0, right = nums.size() -1;
    while(left < right){
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
}

//STL methode

void reverseVectorSTL(vector<int>& nums){
    reverse(nums.begin(), nums.end());
}

/*int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    reverseVectorSTL(nums);
    for(int num : nums) 
    cout << num << " ";
    cout << "\n";
}*/

/*int main(){
    vector<int> nums = {9,8,7,6,5,4,3,2,1};
    reverseVector(nums);
    for(int num : nums)
    cout << num << " ";
    return 0;
}*/

/*vector<int> removeDuplicates(const vector<int>& nums){
    if(nums.empty()) return {};
    vector<int> result;
    result.push_back(nums[0]);
    for(int i= 1; i < nums.size(); i++){
        if(nums[i] != nums[i-1]){
            result.push_back(nums[i]);
        }
    }
    return result;
}

//leetcode style;

int removeDuplicatesInPlace(vector<int>& nums){
    if(nums.empty()) return 0;

    int uniqueIndex = 0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i] != nums[uniqueIndex]){
            uniqueIndex++;
            nums[uniqueIndex] = nums[i];
        }
    }

}

int main(){
    vector<int> nums = {10,10,20,20,30,30,40,40,50,50};
    vector<int> uniqueNums = removeDuplicates(nums);
    for(int num : uniqueNums){
        cout << num << " ";
    }
    return 0;
}*/

//rotate vector by k positions

void rotateRight(vector<int>& nums, int k){
    int n = nums.size();
    if(n==0) return ;

    k = k%n;
    rotate(nums.rbegin(), nums.rbegin() +k, nums.rend());

}

int main(){
    vector<int> nums = {1,2,3,4,5};
    rotateRight(nums, 2);
    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}

