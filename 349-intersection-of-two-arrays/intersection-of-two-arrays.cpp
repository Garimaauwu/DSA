class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        vector<int> intersection;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while (i < n && j < m) {
            if (nums1[i] > nums2[j]) {
                j++;
            }
         else    if (nums2[j] > nums1[i]) {
                i++;
            }

            else {
                if (intersection.empty() || intersection.back() != nums1[i]) {
                    intersection.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        return intersection;
    }
};