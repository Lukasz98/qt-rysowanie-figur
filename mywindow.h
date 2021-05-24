#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <memory>

// Dolaczamy plik naglowkowy klasy QMainWindow,
// Klasa QMainWindow posiada swoj wlasny layout.
// latwo mozna do niej dodac pasek menu, widzety dokujace,
// pasek narzedzi i pasek statusu. Na srodku okna
// wyswietlanego przez QMainWindow znajduje sie obszar,
// ktory mozna wypelnic roznymi widgetami.
#include <QMainWindow>

// QPainter to klasa umozliwiajaca niskopoziomowe rysowanie
// na elementach GUI
#include <QPainter>

// QImage to klasa pozwalajaca na niezalezna od sprzetu reprezentacje obrazu.
// Pozwala na bezposredni dostep do poszczegolnych pikseli,
// Bedziemy jej uzywali do tworzenia i przechowywania
// naszych rysunkow
#include <iostream>

#include <QImage>

#include <QMouseEvent>
#include <QFile>
#include "rysowanie.h"

namespace Ui {
    class MyWindow;
}

class MyWindow : public QMainWindow
{

    Q_OBJECT

public:

    explicit MyWindow(QWidget *parent = 0);

    ~MyWindow();

private:

    Ui::MyWindow *ui;

    QImage *img;

    int szer;
    int wys;
    int poczX;
    int poczY;
    QFile darkTheme {"night.qss"};
    QFile lightTheme {"light.qss"};

    std::unique_ptr<Rysowanie> rysowanie;
    void czysc();


private slots:
    void on_exitButton_clicked();
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent*);

    void on_horizontalSlider_sliderMoved(int position);
    void on_linia_button_clicked();
    void on_okrag_button_clicked();
    void on_elipsa_button_clicked();
    void on_bezi_button_clicked();
    void on_zapisz_beziego_button_clicked();
    void on_bSkejany_clicked();
    void on_zapisz_bSklejanego_clicked();
    void on_dodaj_do_sklejanego_clicked();
    void on_checkBox_clicked(bool checked);
};

#endif // MYWINDOW_H
