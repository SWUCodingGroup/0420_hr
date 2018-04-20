/* 백준 no.10809 알파벳 찾기 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[100];
    int alpha[26];
    
    cin >> input; // 단어 입력받음
    
    // alpha 배열의 모든 요소를 -1로 초기화
    for (int i = 0; i < 26; i++) {
        alpha[i] = -1;
    }
    
    // 입력된 단어의 위치 카운트
    for (int j = 0; j < strlen(input); j++) {
        if (alpha[input[j] - 'a'] == -1)
            alpha[input[j] - 'a'] = j;
    }
    
    // alpha 배열 출력
    for (int i = 0; i < 26; i++) {
        cout << alpha[i] << " ";
    }
    
    return 0;
}
