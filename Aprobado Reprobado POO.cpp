#include<iostream>
#include <stdio.h>
#include<conio.h>

using namespace std;

main ()
{
float c,cc,prom;
cout<<"Ingrese la primera nota:"<<endl;
cin>>c;
cout<<"Ingresar la segunda nota:"<<endl;
cin>>cc;
prom=(c+cc)/2;

if(prom>=70)
cout<<"Si esta aprobado :)"<<endl;
else{
cout<<"Esta reprobado :("<<endl;
}
getch();
return 0;
}
