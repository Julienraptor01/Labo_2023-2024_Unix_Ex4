#include "mainwindowtraitement.h"

#include <QApplication>

char groupe[30];
int  position;
MainWindowTraitement* w;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
      printf("Erreur: Trop ou trop peu d\'argument(s)...\n");
      printf("Usage: Traitement groupe positionVerticaleFenetre\n");
      exit(1);
    }

    strcpy(groupe,argv[1]);
    position = atoi(argv[2]);

    QApplication a(argc, argv);
    w = new MainWindowTraitement();
    w->show();
    return a.exec();
}
