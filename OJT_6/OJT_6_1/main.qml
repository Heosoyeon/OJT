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


        TextEdit {
            id: textEdit
            height: 120
            rightPadding: 10
            bottomPadding: -20
            topPadding: 20
            font.pointSize: 20
            Layout.fillWidth: true
            Layout.fillHeight: true
            horizontalAlignment: Text.AlignRight
            visible: true
        }

        GridLayout {
            id: gridLayout
            Layout.fillHeight: true
            Layout.fillWidth: true
            rows: 4
            columns: 4

            Button {
                id: button_7
                text: qsTr("7")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_8
                text: qsTr("8")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_9
                text: qsTr("9")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_add
                text: qsTr("+")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_4
                text: qsTr("4")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_5
                text: qsTr("5")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_6
                text: qsTr("6")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_subtract
                text: qsTr("-")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_1
                text: qsTr("1")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_2
                text: qsTr("2")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_3
                text: qsTr("3")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_mutiply
                text: qsTr("*")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_clear
                text: qsTr("clear")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_0
                text: qsTr("0")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_equal
                text: qsTr("=")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }

            Button {
                id: button_devide
                text: qsTr("/")
                Layout.fillHeight: true
                Layout.fillWidth: true
            }
        }

    }
}
