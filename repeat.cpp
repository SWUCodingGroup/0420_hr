/* 백준 no.2675 문자열 반복 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int totalNum = 0;
    cin >> totalNum; // 테스트 갯수
    
    // 테스트 갯수만큼 반복
    for (int i = 0; i < totalNum; i++) {
        int num, size, len;
        string input;
        
        cin >> num >> input;
        
        len = input.length();
        size = num * len;
        
        for (int j = 0; j < len; j++) {
            for (int k = 0; k < num; k++) {
                cout << input[j];
            }
        }
        cout << "\n";
    }
    return 0;
}
