#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

// https://leetcode.com/problems/ransom-note/

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for (auto& c: magazine) {
            ++m[c];
        }
        for (auto& c: ransomNote) {
            if (--m[c] < 0) {
                return false;
            }
        }
        return true;

    }
};

void test1() {
    cout << "0 ? " << Solution().canConstruct("a", "b") << endl;
    cout << "0 ? " << Solution().canConstruct("aa", "ab") << endl;
    cout << "1 ? " << Solution().canConstruct("aa", "aab") << endl;
}

void test2() {

}

void test3() {

}