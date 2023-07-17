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

    property bool mbuttonClicked: true

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
        Rectangle {
            anchors.fill: button_7
            color: mouseArea_7.pressedButtons ? "#E53731" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_7
            onClicked: {
                calculator_text.text += "7"
                button_equal.enabled = true
            }
            anchors.fill: button_7; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_8
            color: mouseArea_8.pressedButtons ? "#F67F79" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_8
            onClicked: {
                calculator_text.text += "8"
                button_equal.enabled = true
            }
            anchors.fill: button_8; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_9
            color: mouseArea_9.pressedButtons ? "#FFCCD0" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_9
            onClicked: {
                calculator_text.text += "9"
                button_equal.enabled = true
            }
            anchors.fill: button_9; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_add
            color: mouseArea_add.pressedButtons ? "#FCECED" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_add
            onClicked: {
                calculator_text.text += "+"
                button_equal.enabled = true
            }
            anchors.fill: button_add; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_4
            color: mouseArea_4.pressedButtons ? "#FA8F01" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_4
            onClicked: {
                calculator_text.text += "4"
                button_equal.enabled = true
            }
            anchors.fill: button_4; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_5
            color: mouseArea_5.pressedButtons ? "#FFCB71" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_5
            onClicked: {
                calculator_text.text += "5"
                button_equal.enabled = true
            }
            anchors.fill: button_5; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_6
            color: mouseArea_6.pressedButtons ? "#FFE1AE" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_6
            onClicked: {
                calculator_text.text += "6"
                button_equal.enabled = true
            }
            anchors.fill: button_6; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_subtract
            color: mouseArea_subtract.pressedButtons ? "#FFF3DC" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_subtract
            onClicked: {
                calculator_text.text += "-"
                button_equal.enabled = true
            }
            anchors.fill: button_subtract; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_1
            color: mouseArea_1.pressedButtons ? "#FDEC00" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_1
            onClicked: {
                calculator_text.text += "1"
                button_equal.enabled = true
            }
            anchors.fill: button_1; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_2
            color: mouseArea_2.pressedButtons ? "#FEFF03" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_2
            onClicked: {
                calculator_text.text += "2"
                button_equal.enabled = true
            }
            anchors.fill: button_2; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_3
            color: mouseArea_3.pressedButtons ? "#FCFF86" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_3
            onClicked: {
                calculator_text.text += "3"
                button_equal.enabled = true
            }
            anchors.fill: button_3; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_multiply
            color: mouseArea_multiply.pressedButtons ? "#FFFEE9" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_multiply
            onClicked: {
                calculator_text.text += "X"
                button_equal.enabled = true
            }
            anchors.fill: button_multiply; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_clear
            color: mouseArea_clear.pressedButtons ? "#3FB24D" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_clear
            onClicked: {
                calculator_text.text = ""

                // "=" 버튼 비활성화
                button_equal.enabled = false
            }

            anchors.fill: button_clear; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_0
            color: mouseArea_0.pressedButtons ? "#7ED180" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_0
            onClicked: {
                calculator_text.text += "0"
                button_equal.enabled = true
            }
            anchors.fill: button_0; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_equal
            color: mouseArea_equal.pressedButtons ? "#C8E6C8" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_equal
            onClicked: {
                Calculator.input_string = calculator_text.text
                Calculator.result = Calculator.calculate()
                calculator_text.text = Calculator.result
            }
            anchors.fill: button_equal; hoverEnabled: true
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
        Rectangle {
            anchors.fill: button_divide
            color: mouseArea_divide.pressedButtons ? "#E7F5E8" : "#E1E1E2"
        }
        MouseArea {
            id: mouseArea_divide
            onClicked: {
                calculator_text.text += "/"
                button_equal.enabled = true
            }
            anchors.fill: button_divide; hoverEnabled: true
        }
    }
}
