#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& arr, int n) {
    string ans = "";
    // For traversing all characters of the first string
    for (int i = 0; i < arr[0].length(); i++) {
        char ch = arr[0][i];

        bool match = true;

        // for comparing ch with the strings
        for (int j = 1; j < n; j++) {
            // not match
            if (i >= arr[j].size() || ch != arr[j][i]) {
                match = false;
                break;
            }
        }
        if (!match) {
            break;
        } else {
            ans.push_back(ch);
        }
    }
    return ans;
}

int main() {
    vector<string> arr = {"flower", "flow", "flight"};
    int n = arr.size();
    
    string result = longestCommonPrefix(arr, n);
    cout << "The longest common prefix is: " << result << endl;

    return 0;
}
