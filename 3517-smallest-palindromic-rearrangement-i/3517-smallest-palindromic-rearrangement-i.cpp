class Solution {
public:
    string smallestPalindrome(string s) {
    vector<int> freq(26, 0);

    for (char ch : s) {
        freq[ch - 'a']++;
    }
    string left = "";
    char middle = '\0';
    // string right = left;

    for(int i =0 ; i < 26 ; i++){
        left +=string(freq[i]/2 , 'a'+i);
        if (freq[i] % 2 == 1)
        middle = 'a' + i;
    }
    string right = left;
    reverse(right.begin(), right.end());

    if (middle == '\0')
    return left + right;

    return left + middle + right;
    }
};