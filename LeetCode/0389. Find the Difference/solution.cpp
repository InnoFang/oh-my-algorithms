//
// Created by InnF on 2018/6/12.
//
 
// 54 / 54 test cases passed.
// Status: Accepted
// Runtime: 6 ms

class Solution {
public:
    char findTheDifference(string s, string t) {
        string tmp = s + t;
        char res = tmp[0];
        for (int i = 1; i < tmp.length(); ++i) {
            res ^= tmp[i];
        }
        return res;
    }
};

// 54 / 54 test cases passed.
// Status: Accepted
// Runtime: 6 ms

class Solution2 {
public:
    char findTheDifference(string s, string t) {
        char res = 0;
        for (auto c: s + t) {
            res ^= c;
        }
        return res;
    }
};
