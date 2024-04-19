// The MIT License (MIT)
//
// Copyright (c) 2015 Woboq GmbH <contact at woboq.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <QGuiApplication>
#include <QQmlEngine>
#include <QQuickView>

#include "qrcode.h"

int main(int argc, char **argv)
{
    qmlRegisterType<QRCodeItem>("main", 1, 0, "QRCodeItem");
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
