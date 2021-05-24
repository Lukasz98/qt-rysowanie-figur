// Dolaczamy plik naglowkowy naszej klasy MyWindow
#include "mywindow.h"
#include "ui_mywindow.h"

MyWindow::MyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyWindow)
{
    ui->setupUi(this);

    szer = ui->rysujFrame->width();
    wys = ui->rysujFrame->height();
    poczX = ui->rysujFrame->x();

    poczY = ui->rysujFrame->y();

    img = new QImage(szer,wys,QImage::Format_RGB32);

    rysowanie = std::make_unique<Rysowanie>(szer, wys, img->bits());
    rysowanie->ZmienTyp(TypRysowania::LINIA);


    darkTheme.open(QFile::ReadOnly);

    if (darkTheme.isOpen())
    {
        this->setStyleSheet(darkTheme.readAll());
        darkTheme.close();
    }
    else {
        this->setStyleSheet("QCheckBox: { background-color: red }");
    }
}

MyWindow::~MyWindow()
{
    delete ui;
}

void MyWindow::mouseMoveEvent(QMouseEvent *event)
{

    int x = event->x();
    int y = event->y();

    x -= poczX;
    y -= poczY;

    if (x < 0 || y < 0)
        return;

    if (rysowanie->CzyRozpoczeto()) {
        rysowanie->Moved(Punkt{x, y});
        update();
    }
}


void MyWindow::mouseReleaseEvent(QMouseEvent *event)
{
    int x = event->x();
    int y = event->y();

    x -= poczX;
    y -= poczY;

    if (x < 0 || y < 0)
        return;

    if(event->button() == Qt::LeftButton)
    {
        rysowanie->Released(Punkt{x, y});
        update();
    }
    else if (event->button() == Qt::RightButton)
    {
        rysowanie->UsunZBSklejanego(Punkt{x, y});
        update();
    }
}

void MyWindow::mousePressEvent(QMouseEvent *event)
{
    int x = event->x();
    int y = event->y();

    x -= poczX;
    y -= poczY;

    if (x < 0 || y < 0)
        return;

    if(event->button() == Qt::LeftButton)
    {
        rysowanie->Pressed(Punkt{x, y});
        update();
    }
}

void MyWindow::on_exitButton_clicked()
{
    qApp->quit();
}


void MyWindow::paintEvent(QPaintEvent*)
{
    QPainter p(this);

    p.drawImage(poczX, poczY,*img);
}

void MyWindow::on_horizontalSlider_sliderMoved(int position)
{
    rysowanie->PunktyWElipsie(position);
}

void MyWindow::on_linia_button_clicked()
{
    rysowanie->ZmienTyp(TypRysowania::LINIA);
}

void MyWindow::on_okrag_button_clicked()
{
    rysowanie->ZmienTyp(TypRysowania::OKRAG);
}

void MyWindow::on_elipsa_button_clicked()
{
    rysowanie->ZmienTyp(TypRysowania::ELIPSA);
}

void MyWindow::on_bezi_button_clicked()
{
    rysowanie->ZmienTyp(TypRysowania::BEZI);
}

void MyWindow::on_zapisz_beziego_button_clicked()
{
    rysowanie->ZapiszBeziego();
    update();
}

void MyWindow::on_bSkejany_clicked()
{
    rysowanie->ZmienTyp(TypRysowania::BSKLEJANY);
}

void MyWindow::on_zapisz_bSklejanego_clicked()
{
    rysowanie->ZapiszBSklejanego();
    update();
}

void MyWindow::on_dodaj_do_sklejanego_clicked()
{
    rysowanie->DodajDoBSklejanego();
    update();
}

void MyWindow::on_checkBox_clicked(bool checked)
{

    if (checked && lightTheme.open(QFile::ReadOnly)) {
        this->setStyleSheet(lightTheme.readAll());
        lightTheme.close();
    }
    else if (darkTheme.open(QFile::ReadOnly))
    {
        this->setStyleSheet(darkTheme.readAll());
        darkTheme.close();
    }
    update();
    this->repaint();
    this->show();

}
