class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> count1(26, 0), count2(26, 0);

        for (char c : s1)
            count1[c - 'a']++;

        int n = s1.size();

        for (int i = 0; i < s2.size(); i++) {
            count2[s2[i] - 'a']++;

            if (i >= n)
                count2[s2[i - n] - 'a']--;

            if (count1 == count2)
                return true;
        }

        return false;
    }
};