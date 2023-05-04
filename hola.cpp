#include <iostream>
using namespace std;
class ParOrd
{
private:
public:
    double a, b;
    static int contaObje;
    ParOrd(const double a,const double b)
    {
        this->a=a;
        this->b=b;
    }
};
ParOrd & operator +(const ParOrd &p1,const ParOrd &p2)
{
    return*(new ParOrd(p1.a+p2.a,p1.b+p2.b));
}
ostream& operator <<(ostream &o, const ParOrd &p)
{
    o <<"("<<p.a<<" , "<<p.b<<")";
    return o;
}

int ParOrd::contaObje=0;
int main()
{
    ParOrd A(50,75);
    A.contaObje++;
    ParOrd B(150,175);
    B.contaObje++;
    ParOrd C = A + B;
    C.contaObje++;

    cout<<"c = "<<C.a<<" , "<<C.b<<"\n";
    cout<<"Contar Cuentos objetos totales"<<B.contaObje<<endl;

    cout<<"A="<<A<<"\n";
    cout<<"B="<<B<<"\n";
    cout<<"C="<<C<<"\n";
    return 0;
}