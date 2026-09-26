class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end =arr.size() - 1;
        int mid = (start + end)/2;
        while(start < end){
            if(arr[mid+1]>arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
            mid = (start +end)/2;
        }
        return start;        
    }
};