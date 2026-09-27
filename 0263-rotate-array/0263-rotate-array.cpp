class Solution {
public:
    void Reverse(int i, int j, vector<int>& nums) {
        while (i < j) {
            int temp; // swaping  algo
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        if (k > n) {
            k = k % n;
        }
        Reverse(0, n - 1 - k, nums);
        Reverse(n - k, n - 1, nums);
        Reverse(0, n - 1, nums);
    }
};