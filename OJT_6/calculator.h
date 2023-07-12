#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>
#include <iostream>
#include <QVariant>
#include <iostream>

class Calculator : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double result READ getResult WRITE setResult NOTIFY resultChanged)
    Q_PROPERTY(QVariant input_string READ getInput_string WRITE setInput_string NOTIFY input_stringChanged)

public:
    Calculator();
    ~Calculator();

private:
    int num1;
    int num2;
    double result;
    QVariant input_string;

protected:
    void setResult(double result) { this->result = result; emit resultChanged(); }
    int getNum1() { return num1; }
    int getNum2() { return num2; }
    //Q_INVOKABLE void calculate();  // 순수 가상함수

public:
    void setNumber(int num1, int num2) { this->num1 = num1; this->num2 = num2; }
    double getResult() { return result; }

    // qml 에서 text 가져오기 위한 함수
    void setInput_string(QVariant input_string) { this->input_string = input_string; emit input_stringChanged(); }
    QVariant getInput_string() { return input_string; }

    Q_INVOKABLE int add();
    Q_INVOKABLE int subtract();
    Q_INVOKABLE int multiply();
    Q_INVOKABLE int divide();
    Q_INVOKABLE int calculate();

signals:
    void input_stringChanged();
    void resultChanged();

};

#endif // CALCULATOR_H
