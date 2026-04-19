// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v = {"madam","hello","level"};
    for(string s : v){
        string t = s;
        reverse(t.begin(), t.end());
        if(s == t) cout << s << " ";
    }
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v = {"hi","hello","world"};
    string mx = "";

    for(string s : v)
        if(s.size() > mx.size()) mx = s;

    cout << mx;
}
