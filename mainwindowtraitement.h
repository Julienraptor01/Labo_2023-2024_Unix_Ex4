#ifndef MAINWINDOWTRAITEMENT_H
#define MAINWINDOWTRAITEMENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowTraitement; }
QT_END_NAMESPACE

class MainWindowTraitement : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowTraitement(QWidget *parent = nullptr);
    ~MainWindowTraitement();

    void setGroupeTraite(const char* Text);
    void setEtudiantTraite(const char* Text);
    void setDejaTraites(int nb);

private:
    Ui::MainWindowTraitement *ui;
};
#endif // MAINWINDOWTRAITEMENT_H
