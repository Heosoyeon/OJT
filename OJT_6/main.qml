import QtQuick 2.10
import QtQuick.Window 2.10
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3

Window {
    id: window
    visible: true
    width: 360
    height: 480
    title: qsTr("Calculator")

    Text {
        id: calculator_text
        height: 120
        width: parent.width
        Layout.fillWidth: true
        Layout.fillHeight: true
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignRight
        font.pixelSize: 25
        rightPadding: 20
        anchors {
            top: parent.top
            right: parent.right
            left: parent.left
        }
    }
    // line 1
    Button {
        id: button_7
        text: qsTr("7")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: calculator_text.bottom
            left: parent.left
            rightMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "7"
            background.color="#E53731"
        }
    }
    Button {
        id: button_8
        text: qsTr("8")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: calculator_text.bottom
            left: button_7.right
            leftMargin: 5
            rightMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "8"
            background.color="#F67F79"
        }
    }
    Button {
        id: button_9
        text: qsTr("9")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: calculator_text.bottom
            left: button_8.right
            leftMargin: 5
            rightMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "9"
            background.color="#FFCCD0"
        }
    }
    Button {
        id: button_add
        text: qsTr("+")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: calculator_text.bottom
            left: button_9.right
            leftMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "+"
            background.color="#FCECED"
        }
    }

    // line 2
    Button {
        id: button_4
        text: qsTr("4")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_7.bottom
            left: parent.left
            rightMargin: 5
            topMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "4"
            background.color="#FA8F01"
        }
    }
    Button {
        id: button_5
        text: qsTr("5")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_8.bottom
            left: button_4.right
            leftMargin: 5
            rightMargin: 5
            topMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "5"
            background.color="#FFCB71"
        }
    }
    Button {
        id: button_6
        text: qsTr("6")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_9.bottom
            left: button_5.right
            leftMargin: 5
            rightMargin: 5
            topMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "6"
            background.color="#FFE1AE"
        }
    }
    Button {
        id: button_subtract
        text: qsTr("-")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_add.bottom
            left: button_6.right
            leftMargin: 5
            topMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "-"
            background.color="#FFF3DC"
        }
    }

    // line 3
    Button {
        id: button_1
        text: qsTr("1")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_4.bottom
            left: parent.left
            rightMargin: 5
            topMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "1"
            background.color="#FDEC00"
        }
    }
    Button {
        id: button_2
        text: qsTr("2")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_5.bottom
            left: button_1.right
            leftMargin: 5
            rightMargin: 5
            topMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "2"
            background.color="#FEFF03"
        }
    }
    Button {
        id: button_3
        text: qsTr("3")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_6.bottom
            left: button_2.right
            leftMargin: 5
            rightMargin: 5
            topMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "3"
            background.color="#FCFF86"
        }
    }
    Button {
        id: button_multiply
        text: qsTr("X")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_subtract.bottom
            left: button_3.right
            leftMargin: 5
            topMargin: 5
            bottomMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "X"
            background.color="#FFFEE9"
        }
    }

    // line 4
    Button {
        id: button_clear
        text: qsTr("clear")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_1.bottom
            left: parent.left
            bottom: parent.bottom
            rightMargin: 5
            topMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text = ""
            background.color="#3FB24D"
        }
    }
    Button {
        id: button_0
        text: qsTr("0")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_2.bottom
            left: button_clear.right
            bottom: parent.bottom
            leftMargin: 5
            rightMargin: 5
            topMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "0"
            background.color="#7ED180"
        }
    }
    Button {
        id: button_equal
        text: qsTr("=")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_3.bottom
            left: button_0.right
            bottom: parent.bottom
            leftMargin: 5
            rightMargin: 5
            topMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            Calculator.input_string = calculator_text.text
            Calculator.result = Calculator.calculate()
            calculator_text.text = Calculator.result
            // 2번 예외상황 후 넘어온 result 값 활용
            if(Calculator.result == 0) {
                calculator_text.text = ""
            }
            else {
                calculator_text.text = Calculator.result
            }
            background.color="#C8E6C8"
        }
    }
    Button {
        id: button_divide
        text: qsTr("/")
        width: parent.width / 4 - 4
        height: (parent.height - calculator_text.height) / 4 - 4
        anchors {
            top: button_multiply.bottom
            left: button_equal.right
            bottom: parent.bottom
            leftMargin: 5
            topMargin: 5
        }
        Layout.fillHeight: true
        Layout.fillWidth: true
        onClicked: {
            calculator_text.text += "/"
            background.color="#E7F5E8"
        }
    }
}
