#include <iostream>
#include <vector>
using namespace std;

int lucky(vector<int>& s, int N, int n = 2) {
    int l = s.size(); // isko aap function ke parameter ke ander nahi rakh sakte 

    // base case
    if (n > l) {
        for (int j = 0; j < l; j++) {
            if (N == s[j]) return 1; // found
        }
        return 0; // not found I had use of else then return the value zero toh vo har baar base case ko pad kar return kar jata isiliye usse loop se bahar if not found then zero 
    }

    // remove every n-th element
    for (int i = l - 1; i >= 0; i--) { //here i make the loop is starting from start and while removing every element shifts by 1 index so Chode the bacward so this problem can not occur 
        if ((i+1) % n == 0) {
            s.erase(s.begin() + i);
        }
    }

    // recursive call
    return lucky(s, N, n + 1); // function me int type likha hua h isiliye aapko return before function use karna padega 
}

int main() {
    vector<int> s = {1,2,3,4,5,6,7,8,9,10};
    cout << lucky(s, 5);  // will print 1 if lucky, 0 otherwise
    return 0;
}
