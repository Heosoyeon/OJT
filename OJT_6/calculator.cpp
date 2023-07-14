#include "calculator.h"
#include <QDebug>
#include <QVariant>
#include <iostream>
#include <string>
#include <sstream>  // stringstream 라이브러리
#include <iomanip>  // fixed 라이브러리
#include <cmath>  // setprecision 라이브러리

using namespace std;

Calculator::Calculator(){}
Calculator::~Calculator(){}

int Calculator::calculate() {

    // qml에서 가져 온 input_string를 QVariant -> String 으로 형변환
    string input_exp = input_string.toString().toStdString();

    int num1, num2;
    char sign;

    // 2번을 예외상황을 처리하기 위해 num1, num2 초기화
    num1 = 0; num2 = 0;

    stringstream stream(input_exp);
    stream >> num1;
    stream >> sign;
    stream >> num2;

    int len = input_exp.length();  // 입력받은 문자열 길이 구하기
    int sign_index = input_exp.find(sign);  // sign 인덱스
    int sign_subtract = input_exp.find('-',sign_index+2);  // 예외 상황 중 '-'제외에 활용할 '-' 인덱스

    // 1. 입력한 문자열이 길이가 12 이하인지 판단
    if(len > 12) {
        return 0;
     }

    // 2. num1 혹은 num2 가 비었는지 판단
    if(num1 == 0 || num2 == 0) {
        return 0;
    }

     char ch[] = {'+', 'X', '/'};  // 입력된 연산자와 비교하기 위한 연산자 배열 선언
     char sign_arr;

     // '-'를 제외한 기호들을 for문을 활용해 하나씩 추출해 3, 4번에 적용
    for(int i = 0; i < 3; i++) {

        sign_arr = ch[i];

        int sign_temp = input_exp.find(sign_arr,sign_index+1);  // num2 이후에 또 sign이 입력되면, 그 sign의 인덱스를 저장
        int first = input_exp.find_first_of(sign_arr,0);  // 입력된 연산자 중 가장 앞 쪽에 놓인 sign의 인덱스
        int last = input_exp.find_last_of(sign_arr,len-1);  // 입력된 연산자 중 가장 뒤 쪽에 놓인 sign의 인덱스

        // 앞에서부터 찾은 연산자 인덱스,뒤에서부터 찾은 연산자 인덱스 비교
        if(first == last){
            // 3. '-'를 맨 앞 혹은 num2 앞에 입력했는지 판단
            if(input_exp.find('-') == 0 || input_exp.find('-') == sign_index+1) {
                return 0;
            }
        }
        else{
            return 0;
        }

        // 4. 입력 정수가 3개 이상인지 판단
        if(sign_temp != string::npos || sign_subtract != string::npos) {
            return 0;
        }
    }

    switch (sign) {
    case '+':
        setNumber(num1, num2);
        return add();
    case '-':
        setNumber(num1, num2);
        return subtract();
    case 'X':
        setNumber(num1, num2);
        return multiply();
    case '/':
        if(num1 != 0 && num2 != 0) {
            setNumber(num1, num2);
            return divide();
        }
        else {
            return 0;
        }
    default:
        break;
    }
    return 0;
}

int Calculator::add() {
    return getNum1() + getNum2();
}

int Calculator::subtract() {
    return getNum1() - getNum2();
}

int Calculator::multiply() {
    return getNum1() * getNum2();
}

int Calculator::divide() {
    return getNum1() / getNum2();
}
