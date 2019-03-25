#include "header.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char *argv[])
{
	el::Configurations conf("log.conf");
	el::Loggers::reconfigureAllLoggers(conf);

	try {
		QApplication app(argc, argv);

		// load main widget qml
		QQmlEngine qmlEngine;

		QQmlComponent component(&qmlEngine, QUrl::fromLocalFile("res/main.qml"));
		
		auto errors = component.errors();
		for (auto& e : errors) {
			LOG(ERROR) << "QML Error: " << e.toString().toStdString() << std::endl;
		}
		if (!errors.empty())
		{
			return 0;
		}
		auto quickObj = component.create();
		auto _quickObj = qobject_cast<QQuickItem*>(quickObj);

		auto window = new QQuickWindow();
		_quickObj->setParentItem(window->contentItem());
		window->setGeometry(0, 0, _quickObj->width(), _quickObj->height());
		window->show();

		return app.exec();
	}
	catch (const std::exception& e) {
		//LOG(FATAL) << e.what();
		LOG(ERROR) << e.what();
		return -1;
	}
}
