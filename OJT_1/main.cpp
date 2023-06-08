#include <iostream>
#include <string.h>
#define ARRAY_LENGTH 20  // 매크로 변수 값 20

// 문자열 길이
int my_strlen(char *ch1) {

    int len = 0;  // 문자열 길이를 저장할 변수 초기화

    // 입력받은 문자열에서 인덱스 NULL 자리 전까지만 반복
    for(int i = 0; ch1[i] != 0; i++) {
        len += 1;
    }
    return len;
}

// 문자열 복사
char *my_strcpy(char *ch1, char *ch2) {

    for(int i = 0; ch1[i] != 0; i++) {
        ch2[i] = ch1[i];  // 입력받은 문자열을 복사할 변수에 저장
    }
    return ch2;
}

// 문자열 뒤집기
char my_strrev(char *ch1) {

    char ch1_reverse[ARRAY_LENGTH];  // 두 변수를 교환할 때, 값을 담고 있을 버퍼

    int len = my_strlen(ch1);
    len -= 1;  // NULL 자리의 값은 빼서 다시 변수에 저장

    // 문자열의 길이만큼 반복
    // 버퍼에는 ch1[n-i]에 저장된 메모리 주소가 가리키는 값 저장
    // ch[n-1]에는 ch1[i]에 저장된 메모리 주소가 가리키는 값 저장
    // 버퍼에 저장된 값을 다시 ch1[i]에 저장
    for(int i = 0; i < len; len--, i++) {
        *ch1_reverse = ch1[len];
        ch1[len] = ch1[i];
        ch1[i] = *ch1_reverse;
    }
    return 0;
}

// String
char trans_str(char *ch1) {

    char *ch_strrev = strrev(ch1);  // 위에서 뒤집힌 문자열을 다시 뒤집어서 저장

    // char 배열 -> string으로 변환
    std::string str(ch_strrev);
    std::cout << "String 변환 : " << str << '\n';

    int len = str.length();

    // string 뒤집기
    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    std::cout << "String 뒤집기 : " << str << '\n';

    return 0;
}

int main() {

    char ch1[ARRAY_LENGTH];
    char ch2[ARRAY_LENGTH];

    std::cout << "문자열을 입력하세요." << '\n';
    std::cin >> ch1;
    std::cout << '\n';

    // 입력받은 문자열 길이를 변수 len에 저장
    int len = my_strlen(ch1);

    // 입력받은 문자의 길이가 20 이하인지 판단
    // 20을 초과한다면, 범위 초과를 알림
    if(len <= 20) {
        my_strcpy(ch1, ch2);
        std::cout << "char 배열 복사 : " << ch2 << '\n';

        my_strrev(ch1);
        std::cout << "char 배열 뒤집기 : " << ch1 << '\n' << '\n';

        trans_str(ch1);
    }
    else {
        std::cout << "범위를 초과했어요.";
    }
    return 0;
}
