class Solution {
public:

    vector<int> ans;
    vector<pair<int, int>> temp;

    void mergeSort(vector<pair<int, int>>& nums, int left, int right) {

        if (left >= right)
            return;

        int mid = left + (right - left) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }

    void merge(vector<pair<int, int>>& nums,
               int left, int mid, int right) {

        int i = left;
        int j = mid + 1;
        int k = left;

        int count = 0;

        while (i <= mid && j <= right) {

            if (nums[j].first < nums[i].first) {

                temp[k++] = nums[j++];

                count++;
            }
            else {

                ans[nums[i].second] += count;

                temp[k++] = nums[i++];
            }
        }

        while (i <= mid) {

            ans[nums[i].second] += count;

            temp[k++] = nums[i++];
        }

        while (j <= right) {
            temp[k++] = nums[j++];
        }

        for (int x = left; x <= right; x++) {
            nums[x] = temp[x];
        }
    }

    vector<int> countSmaller(vector<int>& nums) {

        int n = nums.size();

        ans.resize(n, 0);
        temp.resize(n);

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        mergeSort(arr, 0, n - 1);

        return ans;
    }
};