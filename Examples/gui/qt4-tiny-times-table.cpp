#include "../../jade.hpp"
#include "ui_tinytimes.h"

/* Needed for Center() Method */
#include <QStyle>
#include <QDesktopWidget>


class TT: public QMainWindow {
    Q_OBJECT //REQUIRED!
    public:
        CONSTRUCTOR TT();
        void Center();

    private:
        Ui::MainWindow ui;

    private slots:
        void BuildTable(QAbstractButton *button);
};

#include "tinytimes.moc" //REQUIRED!

CONSTRUCTOR TT::TT() :QMainWindow() DO
    ui.setupUi(this);
ENDCONSTRUCTOR

SUB TT::Center() DO
 this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,this->size(),qApp->desktop()->availableGeometry()));
ENDSUB

SUB TT::BuildTable(QAbstractButton *button) DO
	DIM AS INT I;
	DIM AS QString buf;

	ui.listWidget->clear();
	FOR (I = 1 TO I<11 STEP I++) DO
	   buf = QString("%1 %2 %3 %4 %5").arg(button->text()).arg(" X ").arg(QString::number(I)).arg(" = ").arg(QString::number(I*button->text().toInt()));
	   ui.listWidget->addItem(new QListWidgetItem(buf));
	END
ENDSUB


MAIN
    DIM AS QApplication app(argc, argv);

    DIM AS TT PTR TinyTimes = new TT;
    TinyTimes->Center();
    TinyTimes->show();
    RETURN app.exec();
ENDMAIN
