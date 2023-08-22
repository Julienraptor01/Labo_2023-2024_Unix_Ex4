#ifndef MAINWINDOWEX4_H
#define MAINWINDOWEX4_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowEx4; }
QT_END_NAMESPACE

class MainWindowEx4 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowEx4(QWidget *parent = nullptr);
    ~MainWindowEx4();

    void setGroupe1(const char* Text);
    void setGroupe2(const char* Text);
    void setGroupe3(const char* Text);
    void setResultat1(int nb);
    void setResultat2(int nb);
    void setResultat3(int nb);
    bool traitement1Selectionne();
    bool traitement2Selectionne();
    bool traitement3Selectionne();
    const char* getGroupe1();
    const char* getGroupe2();
    const char* getGroupe3();

private slots:
    void on_pushButtonDemarrerTraitements_clicked();
    void on_pushButtonVider_clicked();
    void on_pushButtonQuitter_clicked();
    void on_pushButtonAnnuler1_clicked();
    void on_pushButtonAnnuler2_clicked();
    void on_pushButtonAnnuler3_clicked();
    void on_pushButtonAnnulerTous_clicked();

private:
    Ui::MainWindowEx4 *ui;

    char groupe1[80];
    char groupe2[80];
    char groupe3[80];
};
#endif // MAINWINDOWEX4_H
