
//PALINDROME NUMBER

#include <iostream>
using namespace std;

class Solution {
public:
    int isPalindrome(int n) {
        int t=n;
        int num=0;
        int r;
        while (t>0){
            r=t%10;
            num=num*10+r;
            t=t/10;
        }
        if (num==n){
            return true;
        }
        return false;
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
    cout << s.isPalindrome(n) << endl;
    return 0;
}