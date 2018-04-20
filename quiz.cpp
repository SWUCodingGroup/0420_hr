/* 백준 no.8958 ox퀴즈 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCase;
    string s;
    
    cin >> testCase;
    
    for (int i = 0; i < testCase; i++) {
        int score = 0, len, j = 0;
        
        cin >> s;
        len = s.length();
        
        // 입력받은 문자열의 길이만큼 반복
        for (s[j]; j < len; j++) {
            if (s[j] == 'O') { // 문자 'O'
                if (s[j+1] == 'O') { // 뒷문자가 'O'일 때
                    int temp = 0;
                    while (s[j] == 'O'){
                        temp += 1;
                        score += temp;
                        j++;
                    }
                }
                else
                    score += 1;
            }
            else { // 문자 'X'
                score += 0;
            }
        }
        cout << score << endl;
    }
}
