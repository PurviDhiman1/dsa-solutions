class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int Largest = nums[0];
        int secondLargest = -1; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > Largest) {
                secondLargest = Largest; 
                Largest = nums[i];       
            }
            else if (nums[i] < Largest && nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }
        
        return secondLargest;
    }
};
