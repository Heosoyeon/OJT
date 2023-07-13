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
        width: parent.width
        height: parent.height - parent.width
        Layout.fillWidth: true
        Layout.fillHeight: true
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignRight
        font.pixelSize: 25
        rightPadding: 20
        anchors.top: parent.top
    }
    GridLayout {
        id: gridLayout
        width: parent.width
        Layout.fillHeight: true
        Layout.fillWidth: true
        rows: 4
        columns: 4
        anchors.top: calculator_text.bottom
        anchors.bottom: parent.bottom


        Button {
            id: button_7
            text: qsTr("7")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "7"
            }
        }
        Button {
            id: button_8
            text: qsTr("8")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "8"
            }
        }
        Button {
            id: button_9
            text: qsTr("9")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "9"
            }
        }
        Button {
            id: button_add
            text: qsTr("+")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "+"
            }
        }
        Button {
            id: button_4
            text: qsTr("4")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "4"
            }
        }
        Button {
            id: button_5
            text: qsTr("5")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "5"
            }
        }
        Button {
            id: button_6
            text: qsTr("6")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "6"
            }
        }
        Button {
            id: button_subtract
            text: qsTr("-")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "-"
            }
        }
        Button {
            id: button_1
            text: qsTr("1")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "1"
            }
        }
        Button {
            id: button_2
            text: qsTr("2")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "2"
            }
        }
        Button {
            id: button_3
            text: qsTr("3")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "3"
            }
        }
        Button {
            id: button_multiply
            text: qsTr("X")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "X"
            }
        }
        Button {
            id: button_clear
            text: qsTr("clear")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text = ""
            }
        }
        Button {
            id: button_0
            text: qsTr("0")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "0"
            }
        }
        Button {
            id: button_equal
            text: qsTr("=")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                Calculator.input_string = calculator_text.text
                Calculator.result = Calculator.calculate()
                calculator_text.text = Calculator.result
            }
        }
        Button {
            id: button_divide
            text: qsTr("/")
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                calculator_text.text += "/"
            }
        }
    }
}
