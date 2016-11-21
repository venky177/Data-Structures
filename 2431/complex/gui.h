#ifndef GUI_H
#define GUI_H

#include <QWidget>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QRegExp>
#include<QRegExpValidator>
#include<QHBoxLayout>
#include"complex.h"

class gui : public QWidget
{
    Q_OBJECT
private:
    complex c1,c2;
public:
    gui(QWidget *parent = 0);
    QPushButton *butadd,*butsub,*butmul,*butdiv,*butclear;
    QLabel *labreal ,*labimg ,*labc1, *labc2,*labresult;
    QLineEdit *lc1r,*lc1i ,*lc2r,*lc2i, *lresult ;
    QHBoxLayout *hb1, *hb2,*hblabels,*hbbuttons,*hbresult ;
    QVBoxLayout *vb;
protected slots:
    void onAdd();
    void onSubtract();
    void onMultiply();
    void onDivide();
    void onClear();

};

#endif // GUI_H
