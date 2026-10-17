class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int n=nums.size();
     int p=0;
     int q=0;
     int pos[n/2];
     
     int neg[n/2];   
     for(int i=0;i<n;i++) {
        if(nums[i]>0) {
            pos[p]=nums[i];
            p++;
        }
        else {
            neg[q]=nums[i];
            q++;
        }
     }
     
        for(int i=0;i<n/2;i++) {
            nums[i*2]=pos[i];
            nums[i*2+1]=neg[i];
        }
     
     return nums;
       
    }
};