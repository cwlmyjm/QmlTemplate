import QtQuick 2.5
import QtQuick.Controls 1.4

Rectangle {
	width: 600
    height: 400

	Text{
		text: "Hello world!"
		anchors.verticalCenter : parent.verticalCenter 
		anchors.horizontalCenter: parent.horizontalCenter
		font.pixelSize: 30
		font.family:"Microsoft Yahei"
		color:"#000000"
	}
}