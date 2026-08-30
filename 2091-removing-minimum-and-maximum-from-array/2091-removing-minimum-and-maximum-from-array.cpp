class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int lmax=-1,lmin=-1;
        int lmaxi=INT_MIN,lmini=INT_MAX;
        int n= nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>lmaxi){
                lmaxi = nums[i];
                lmax=i;
            }
            if(nums[i]<lmini){
                lmini=nums[i];
                lmin=i;
            }
        }
         
       ////case 1:both in the left side 
    int case1= max(lmin,lmax)+1;
       ///case 2: both in the right side 
       int case2 = n-min(lmin,lmax);
       ///case 3: max in left and min in right 
       int case3= lmin+1+(n-lmax);
       ///casr4: min in left and max in right 
       int case4 = lmax+1+(n-lmin);
    return min({case1,case2,case3,case4});



    }
};