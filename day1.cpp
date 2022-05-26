int Solution::solve(vector<int> &A)
{
    unordered_map<int, int> map; // hash-map to count each unique number in the given array A
    // hash-map - time complexity of insertion and access is O(1)

    for (auto num : A) // loop through each number in the array A
    {
        map[num]++; // incrementing the count of the current number
    }

    for (auto num : A) // looping through the array A again to find the 1st number that has been repeated
    {
        if (map[num] > 1) // count > 1 means that the number has been repeated
        {
            return num;
        }
    }

    return -1;
}