/********************************************************************************
** Form generated from reading UI file 'Threaddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADDLG_H
#define UI_THREADDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreaddlgClass
{
public:

    void setupUi(QWidget *ThreaddlgClass)
    {
        if (ThreaddlgClass->objectName().isEmpty())
            ThreaddlgClass->setObjectName(QStringLiteral("ThreaddlgClass"));
        ThreaddlgClass->resize(600, 400);

        retranslateUi(ThreaddlgClass);

        QMetaObject::connectSlotsByName(ThreaddlgClass);
    } // setupUi

    void retranslateUi(QWidget *ThreaddlgClass)
    {
        ThreaddlgClass->setWindowTitle(QApplication::translate("ThreaddlgClass", "Threaddlg", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ThreaddlgClass: public Ui_ThreaddlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADDLG_H
