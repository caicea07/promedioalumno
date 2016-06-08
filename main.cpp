//#include <cstdlib>
#include <iostream>

using namespace std;

 using namespace std;
 int main(){
        //SE DECLARAN VARIABLES
      float c1,c2,c3, c4,c5,c6, prom, n1,n2,n3,n4,n5,n6;
      string nombre="", apellido="";
      //SE PIDEN LOS DATOS
      cout<<"PROGRAMA PARA CALCULAR PROMEDIO DE UN ALUMNO"<<endl;
      cout<<endl;
      cout<<"Ingrese: "<<endl;
      cout<<"Nombre: "<<endl;
      cin>>nombre;
      cout<<"Apellido: "<<endl;
      cin>>apellido;
      cout<<"Calificacion 1: "<<endl;
      cin>>c1;
      cout<<"Calificacion 2: "<<endl;
      cin>>c2;
      cout<<"Calificacion 3: "<<endl;
      cin>>c3;
      cout<<"Calificacion 4: "<<endl;
      cin>>c4;
      cout<<"Calificacion 5: "<<endl;
      cin>>c5;
      cout<<"Calificacion 6: "<<endl;
      cin>>c6;
      
      
      //SE SACA EL PROMEDIO
      n1=c1 *0.10;
      n2= c2 * 0.20;
      n3=c3*0.15;
      n4=c4*0.15;
      n5= c5*0.20;
      n6= c6*0.20;
      prom=(n1+n2+n3+n4+n5+n6);
      
      //SE IMPRIMEN EN PANTALLA LOS RESULTADOS
      if (prom>=10){
           cout<<endl;
           cout<<"Nombre: "<<nombre<<endl;
           cout<<"Apellido "<<apellido<<endl;
           cout<<"APROBADO! tu calificacion es : "<<prom;
      }
      else
      {
           cout<<endl;
           cout<<"Nombre: "<<nombre<<endl;
           cout<<"Apellido "<<apellido<<endl;
           cout<<"REPROBADO! tu calificacion es : "<<prom;
      }
    system("PAUSE");
    return EXIT_SUCCESS;
}
