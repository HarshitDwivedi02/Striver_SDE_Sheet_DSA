class Solution {
public:
void sortColors(vector<int>& nums) {
    int i=0;
    int j=nums.size()-1;
    while(i<=j){
        if(nums[i]==0){
            i+=1;
            continue;
        }
        if(nums[j]==0){
            // cout <<i<<"i " <<j<<"j ";
            swap(nums[i],nums[j]);
            i+=1;
        }
        j-=1;
    }
    j=nums.size()-1;
    while(i<=j){
        if(nums[i]==1){
            i+=1;
            continue;
        }
        if(nums[j]==1){
            swap(nums[i],nums[j]);
            i+=1;
        }
        j-=1;
    }
}
};