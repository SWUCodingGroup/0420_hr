/* 백준 no.2577 숫자의 갯수 */

#include <iostream>
#include <string> // std::to_string(), length()
#define MAX 10
using namespace std;

int main() {
    int input1, input2, input3, result;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0; // 숫자 0~9를 이렇게 표현함
    string arr[MAX] = {""};
    
    cin >> input1 >> input2 >> input3;
    
    result = input1 * input2 * input3;
    string s = to_string(result); // 곱셈 결과값을 string으로 바꿔줌
    
    // 배열에 s의 숫자 하나씩 넣어주고 각 숫자문자와 비교 후 증가시킴
    for (int k = 0; k < s.length(); k++) {
        arr[k] = s[k];
        
        if (arr[k] == "0")
            ++a;
        else if (arr[k] == "1")
            ++b;
        else if (arr[k] == "2")
            ++c;
        else if (arr[k] == "3")
            ++d;
        else if (arr[k] == "4")
            ++e;
        else if (arr[k] == "5")
            ++f;
        else if (arr[k] == "6")
            ++g;
        else if (arr[k] == "7")
            ++h;
        else if (arr[k] == "8")
            ++i;
        else
            ++j;
    }
    
    cout << a << endl << b << endl << c << endl << d << endl
    << e << endl << f << endl << g << endl << h << endl << i << endl << j << endl;
    
    return 0;
}
