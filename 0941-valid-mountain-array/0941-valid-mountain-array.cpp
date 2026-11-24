class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        int n = arr.size();
        int i = 0;

        if(n < 3)
            return false;

        // Climb the mountain
        while(i < n-1 && arr[i] < arr[i+1]) {
            i++;
        }

        // Peak cannot be first or last element
        if(i == 0 || i == n-1)
            return false;

        // Descend the mountain
        while(i < n-1 && arr[i] > arr[i+1]) {
            i++;
        }

        return i == n-1;
    }
};