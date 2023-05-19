class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for ( int i = 0 ; i < nums.size() ; i++ )
        {
            if(i!=nums.size()-1 && nums[i]!=nums[i+1]){
                nums[j]=nums[i];
                j++;
            }
        }
        nums[j]=nums[nums.size()-1];
        return j+1;
    }
};