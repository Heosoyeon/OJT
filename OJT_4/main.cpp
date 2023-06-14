#include <iostream>
#include <string>

using namespace std;

class Operator {
private:
    int num1;
    int num2;
    int result;
    
protected:
    void setResult(int result) { this->result = result; }
    int getNum1() { return num1; }
    int getNum2() { return num2; }
    virtual void calculate() = 0;

public:
    void setNumber(int num1, int num2) { this->num1 = num1; this->num2 = num2; }
    int getResult() { return result; }
};

class Add : public Operator{ 
    // write
};

class Subtract : public Operator{ 
    // write
};

class Multiply : public Operator{ 
    // write
};

class Divide : public Operator{ 
    // write
};


int main()
{
    Add a;
    Subtract s;
    Multiply m;
    Divide d;
    
    string input_exp
    int num1, num2;
    char sign;
    
    while (1) {
        cout << "수식을 입력하세요. (break 입력 시 종료)" << endl;
        cin >> input_exp;
        
        // write
    }

    return 0;
}
