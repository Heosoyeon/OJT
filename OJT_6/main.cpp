#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <calculator.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    Calculator *ca = new Calculator();
    engine.rootContext()->setContextProperty("Calculator", ca);

    return app.exec();
}
