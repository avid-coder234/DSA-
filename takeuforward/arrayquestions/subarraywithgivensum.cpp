int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
   int n = arr.size();
    int count = 0;

    // Loop through each starting point of the subarray
    for (int start = 0; start < n; ++start) {
        int currentSum = 0;
        
        // Loop through each ending point of the subarray
        for (int end = start; end < n; ++end) {
            currentSum += arr[end];
            
            // Check if the current subarray sum equals K
            if (currentSum == k) {
                count++;
            }
        }
    }

    return count; 
}


