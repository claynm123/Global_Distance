#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Global_Distance.h"

class Global_Distance : public QMainWindow
{
    Q_OBJECT

public:
    Global_Distance(QWidget *parent = nullptr);
    ~Global_Distance();

private:
    Ui::Global_DistanceClass ui;
};
