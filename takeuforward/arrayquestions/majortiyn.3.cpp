vector<int> majorityElement(vector<int> v) {
    int n = v.size();
    int count1 = 0, count2 = 0;
    int key1 = INT_MIN, key2 = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (v[i] == key1) {
            count1++;
        } else if (v[i] == key2) {
            count2++;
        } else if (count1 == 0) {
            key1 = v[i];
            count1 = 1;
        } else if (count2 == 0) {
            key2 = v[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;

    for (int i = 0; i < n; ++i) {
        if (v[i] == key1) count1++;
        if (v[i] == key2) count2++;
    }

    vector<int> ans;
    int mini = n / 3;
    if (count1 > mini) ans.push_back(key1);
    if (count2 > mini) ans.push_back(key2);

    sort(ans.begin(), ans.end());
    return ans;
}


