#include <iostream>
#include <string>
#include <sstream>  // stringstream 라이브러리
#include <iomanip>  // fixed 라이브러리
#include <cmath>  // setprecision 라이브러리

using namespace std;

// 부모 클래스
class Operator {
private:
    int num1;
    int num2;
    double result;

protected:
    void setResult(double result) { this->result = result; }
    int getNum1() { return num1; }
    int getNum2() { return num2; }
    virtual void calculate() = 0;  // 순수 가상함수

public:
    void setNumber(int num1, int num2) { this->num1 = num1; this->num2 = num2; }
    double getResult() { calculate(); return result; }
};

// 자식 클래스 : 더하기
class Add : public Operator{
    // write
    virtual void calculate(){
        cout << getNum1() << " + " << getNum2() << " = " << getNum1() + getNum2() << '\n';
    }
};

// 자식 클래스 : 빼기
class Subtract : public Operator{
    // write
    virtual void calculate(){
        cout << getNum1() << " - " << getNum2() << " = " << getNum1() - getNum2() << '\n';
    }
};

// 자식 클래스 : 곱하기
class Multiply : public Operator{
    // write
    virtual void calculate(){
        cout << getNum1() << " * " << getNum2() << " = " << fixed << setprecision(0) << (double)getNum1() * (double)getNum2() << '\n';
    }
};

// 자식 클래스 : 나누기
class Divide : public Operator{
    // write

    virtual void calculate(){
        if(getNum1() >= getNum2()) {
            cout << getNum1() << " / " << getNum2() << " = " << fixed << setprecision(0) << (double)getNum1() / (double)getNum2() << '\n';
        }
        else if(getNum1() < getNum2()) {
            cout << getNum1() << " / " << getNum2() << " = " << fixed << setprecision(8) << (double)getNum1() / (double)getNum2() << '\n';
        }
    }
};

int main()
{
    Add a;
    Subtract s;
    Multiply m;
    Divide d;

    string input_exp;
    int num1, num2;
    char sign;

    while (1) {
        cout << "수식을 입력하세요. (break 입력 시 종료)" << endl;
        getline(cin, input_exp);

        // write

        // 입력받은 문자열 길이 구하기
        int len = input_exp.length();

        // stringstream : 문자열에서 필요한 정보만 추출
        stringstream stream(input_exp);
        stream >> num1;
        stream >> sign;
        stream >> num2;

        int sign_index = input_exp.find(sign);  // sign의 위치를 담고 있는 변수

        // 입력받은 문자열이 "break"가 아니거나 길이가 12 이하인 경우
        if(input_exp != "break"){

            cout << '\n';

            if(len <= 12) {
                if(sign == '+' || sign == '-' || sign == '*' || sign == '/') {
                    switch(sign) {
                    case '+':
                        if(input_exp[0] != '+' && input_exp[len-1] != '+' && input_exp[len-1] != '-' && input_exp[len-1] != '*' && input_exp[len-1] != '/' && input_exp[sign_index+1] != '+' && input_exp[sign_index+1] != '*' &&input_exp[sign_index+1] != '/' ) {
                            a.setNumber(num1, num2);
                            a.getResult();
                        }
                        else {
                            cout << "다시 입력하세요." << '\n' << '\n';
                        }
                        break;
                    case '-':
                        if(input_exp[0] != '+' && input_exp[len-1] != '+' && input_exp[len-1] != '-' && input_exp[len-1] != '*' && input_exp[len-1] != '/' && input_exp[sign_index+1] != '+' && input_exp[sign_index+1] != '*' &&input_exp[sign_index+1] != '/' ) {
                            s.setNumber(num1, num2);
                            s.getResult();
                        }
                        else {
                            cout << "다시 입력하세요." << '\n' << '\n';
                        }
                        break;
                    case '*':
                        if(input_exp[0] != '+' && input_exp[len-1] != '+' && input_exp[len-1] != '-' && input_exp[len-1] != '*' && input_exp[len-1] != '/' && input_exp[sign_index+1] != '+' && input_exp[sign_index+1] != '*' &&input_exp[sign_index+1] != '/' ) {
                            m.setNumber(num1, num2);
                            m.getResult();
                        }
                        else {
                            cout << "다시 입력하세요." << '\n' << '\n';
                        }
                        break;
                    case '/':
                        if(input_exp[0] != '+' && input_exp[len-1] != '+' && input_exp[len-1] != '-' && input_exp[len-1] != '*' && input_exp[len-1] != '/' && input_exp[sign_index+1] != '+' && input_exp[sign_index+1] != '*' &&input_exp[sign_index+1] != '/' ) {
                            // '1/0'이 입력되면 처리하는 조건문
                            if(num1 != 1 || num2 != 0) {
                                d.setNumber(num1, num2);
                                d.getResult();
                            }
                            else if(num1 == 1 && num2 == 0) {
                                cout << "다시 입력하세요." << '\n' << '\n';
                            }
                        }
                        else {
                            cout << "다시 입력하세요." << '\n' << '\n';
                        }
                        break;
                    }
                }
                else{
                    cout << "다시 입력하세요." << '\n' << '\n';
                }
            }
            else{
                cout << "다시 입력하세요." << '\n' << '\n';
            }
            num1, num2 = 0;  // num1, num2 초기화
            sign = {};  // 연산기호 초기화
        }
        else if(input_exp == "break"){
            break;
        }

    }
    return 0;
}