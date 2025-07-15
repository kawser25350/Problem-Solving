#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; 

   
    while (t--) {
        string s;
        cin >> s; 

        int count[2] = {0}; 

       
        for (char c : s) {
            if (c == '0') {
                count[0]++;
            } else if (c == '1') {
                count[1]++;
            }
        }

       
        int i;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                if (count[1] == 0) {
                    break;
                }
                count[1]--;
            } else {
                if (count[0] == 0) {
                    break;
                }
                count[0]--;
            }
        }

      
        cout << s.size() - i << endl;
    }

    return 0;
}
