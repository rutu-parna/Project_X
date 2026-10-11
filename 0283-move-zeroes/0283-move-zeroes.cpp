class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       int index=0;
       for(int i=0;i<n;i++){
        if(nums[i]!=0){
            if(i!=index){
                swap(nums[index],nums[i]);
            }
            index++;
        }
       }
    }
};

/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]!=0 && nums[j]==0)
                {
                    int temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;

                    
                }
                cout<<nums[i]<<" ";
            }

        }

        
    }
};*/