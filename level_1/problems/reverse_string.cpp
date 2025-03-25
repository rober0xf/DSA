#include <iostream>
#include <vector>

using namespace std;
class Solution {
    public:
        void reverseString(vector<char>& s) {
            char temp;
            int l = 0;
            int r = s.size() - 1;

            while (l < r) {
                temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;
            }
            for (const char& c : s) {
                cout << c << " ";
            }
            cout << endl;
        }
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    sol.reverseString(s);

    return 0;
}
