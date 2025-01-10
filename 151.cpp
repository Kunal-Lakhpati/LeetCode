class Solution {
public:
    string reverseWords(string s) {
    string a = "";
    stringstream ss(s);
    string word;
    vector<string> str;

    while (getline(ss, word, ' ')) {
        str.push_back(word);
    }
    for (int i = str.size() - 1; i >= 0; i--) {
        if (!str[i].empty()) {
            a = a + str[i] + " ";
        }
    }
    if (!a.empty() && a.back() == ' ') {
        a.pop_back();
    }
    return a;
    }
};