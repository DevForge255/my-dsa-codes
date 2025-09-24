#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n = 19;
    unordered_set<int> seen; // i have not included any checker if the n is seen 2 times then it will fail the loop
    
    while (true) {
        int sm = 0;
        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sm += digit * digit;  // Sum ko baar baar intialize karna h tabhi toh sm = 1 check kar payega 
            temp /= 10;
        }
        
        if (sm == 1) {
            cout << "Happy";
            break;
        }
        if (seen.count(sm)) {  // .count() karke usme check kar sakte h 
            cout << "Not a happy number";
            break;
        }
        seen.insert(sm);
        n = sm;
    }
}
