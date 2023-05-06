class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen; // to keep track of previously seen numbers
        while(n != 1 && !seen.count(n)) { // loop until n becomes 1 or enters a cycle
            seen.insert(n);
            int p = 0;
            while(n > 0) {
                int d = n % 10;
                n = n / 10;
                p += pow(d, 2);
            }
            n = p; // update n for next iteration
        }
        return n == 1; // return true if n eventually becomes 1, false otherwise
    }
};
