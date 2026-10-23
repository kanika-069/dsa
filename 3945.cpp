
//DIGIT FREQUENCY SCORE

#include <iostream>
using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
        int t = n;
        int s = 0;

        while (t > 0) {
            int r = t % 10;
            s = s + r;
            t = t / 10;
        }

        return s;
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
    cout << s.digitFrequencyScore(n) << endl;
    return 0;
}