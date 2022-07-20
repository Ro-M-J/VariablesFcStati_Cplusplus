




#include <iostream>
#include <stdlib>

class hora
{
private:
    int horas,minutos,segundos;
public:

    hora()
        {
        horas=0;
        minutos=0;
        segundos=0;
        }

        hora (int h,int m,int s)
        {
        horas=h;
        minutos=m;
        segundos=s;
        }
    void visualizar();
    hora operator +(hora A)
    {
        segundos=A.segundos+segundos;
        minutos=A.minutos+minutos+segundos/60;
        segundos=segundos %60;
        horas=A.horas+horas+minutos/60;
        minutos=minutos%60;
    }
};

void hora::visualizar()
{
cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
}


int main(void)
{
system("CLS");
hora h1(10,40,50),h2(12,35,40),h;
h1.visualizar();
h2.visualizar();
h=h1+h2;
h.visualizar();
system("PAUSE");
}
/**#include <QtCore/QCoreApplication>
#include<iostream>

using namespace std;


class pelota{
 private:

    static int pelotas_creadas;

  public
    pelota ();

    int nro_pelotasCreadas();
};

int pelota::pelotas_creadas=0;//inicializacion de la variable static

pelota::pelota()
{
  pelotas_creadas++;
}

int pelota::nro_pelotasCreadas(){


 return pelotas_creadas;

}

int main(int argc, char *argv[])
{
    pelota p1,p2,p3;

    cout<<p1.nro_pelotasCreadas();

    QCoreApplication a(argc, argv);

    return a.exec();
}
