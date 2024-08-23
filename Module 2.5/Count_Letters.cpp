// // Count Letters
// // time limit per test2 seconds
// // memory limit per test64 megabytes
// // Given a string S. Determine how many times does each letter occurred in S.

// // Input
// // Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

// // Output
// // For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

// // Note: you must print letters in ascending order.

// // Examples
// // inputCopy
// // aaabbc
// // outputCopy
// // a : 3
// // b : 2
// // c : 1
// // inputCopy
// // regff
// // outputCopy
// // e : 1
// // f : 2
// g : 1
// r : 1

#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;  // Read the input string

    // Initialize a vector for counting occurrences of each letter
    vector<int> count(26);

    // Count occurrences of each letter
    for (char c : s) {
        count[c - 'a']++;
    }

    // Print the counts in alphabetical order
    for (int i = 0; i < 26; ++i) {
        if (count[i] > 0) 
        {  // Print only letters that appear in the string
            cout <<char('a' + i )<< " : " << count[i] << std::endl;
       }
    }

    return 0;
}
