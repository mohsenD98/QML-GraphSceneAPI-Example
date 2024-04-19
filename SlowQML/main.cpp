#include <QGuiApplication>
#include <QQmlEngine>
#include <QQuickView>

#include "qrcode.h"

int main(int argc, char **argv)
{
    qmlRegisterType<QRCodeHelper>("main", 1, 0, "QRCodeHelper");
    QGuiApplication app{argc, argv};
    app.setWindowIcon(QIcon("F:/codes/NemoAmazingComponents/Components/DeveloperIntro/heart.png"));

    QQuickView view;
    QSurfaceFormat surfaceFormat = view.requestedFormat();
    surfaceFormat.setSamples(4);
    view.setFormat(surfaceFormat);
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl{"qrc:///main.qml"});
    view.setColor(Qt::black);
    view.show();

    return app.exec();
}
