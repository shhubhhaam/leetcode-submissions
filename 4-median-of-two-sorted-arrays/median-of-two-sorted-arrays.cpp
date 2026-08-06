class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i : nums2) {
            nums1.push_back(i);
        }

        sort(nums1.begin(), nums1.end());

        int mid = nums1.size()/2;
        
        double ans = 0;

        if(nums1.size() % 2 != 0) ans =  nums1[mid];
        else {
            ans = double(nums1[mid-1] + nums1[mid])/2;
        }
        return ans;
    }

};