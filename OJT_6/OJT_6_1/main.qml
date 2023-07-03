import QtQuick 2.10
import QtQuick.Window 2.10
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3

Window {
    id: window
    visible: true
    width: 360
    height: 480
    title: qsTr("Calculator")

    ColumnLayout {
        id: columnLayout
        spacing: 5
        anchors.fill: parent

        TextField {
            id: textField
            text: qsTr("")
            Layout.fillWidth: true
        }

        GridLayout {
            id: gridLayout
            Layout.fillHeight: true
            Layout.fillWidth: true
            rows: 4
            columns: 4

            Button {
                id: button
                text: qsTr("7")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button1
                text: qsTr("8")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button2
                text: qsTr("9")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button3
                text: qsTr("+")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button4
                text: qsTr("4")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button5
                text: qsTr("5")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button6
                text: qsTr("6")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button7
                text: qsTr("-")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button8
                text: qsTr("1")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button9
                text: qsTr("2")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button10
                text: qsTr("3")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button11
                text: qsTr("*")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button12
                text: qsTr("clear")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button13
                text: qsTr("0")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button14
                text: qsTr("=")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button15
                text: qsTr("/")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }
        }
    }
}
