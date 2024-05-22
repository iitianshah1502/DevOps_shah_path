#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        
        int cnt = 0;
        for(int i = 0; i < n - 2; i++) {
            if(str[i] == 'm' && str[i + 1] == 'a' && str[i + 2] == 'p') {
                cnt++;
                i += 2; 
            }
            else if(str[i] == 'p' && str[i + 1] == 'i' && str[i + 2] == 'e') {
                cnt++;
                i += 2; 
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}
