//Examen parcial Programacion 1 alumna:Helen Acevedo Tobar
//Carné 0909-21-1802
#include <iostream>
#include <math.h>
#include <conio.h>
#include <vector>
#include <string>


#define  intentos 3

using namespace std;


 int main(){
 
    int opc;
 
   do {
     
      int acumulador,contador;
      int n;
      char dia;
      
     cout<<"\t\t\t\t\t\t******Menu de Opciones******\n";
     cout<<"\t\t\t\t\t\t1.-Calculo de Factorial de un numero\n";
     cout<<"\t\t\t\t\t\t2.-Tabla de multiplicar\n";
     cout<<"\t\t\t\t\t\t3.-Determinacion de numeros pares/impares\n";
     cout<<"\t\t\t\t\t\t4.-Dia de la semana laboral/no laboral\n";
     cout<<"\t\t\t\t\t\t5.-Validacion de contrasena -bancaria-\n";
     cout<<"\t\t\t\t\t\t6.- Salir\n";
     cout<<"\n"; 
 
      cout <<"Seleccione una opcion de las que se le muestran en el menu\n";
      cin>> opc;

        switch (opc){
 	    case 1:{
 	     	int num,fact=1;
 	     	
 		        cout<<"se determinara un factorial segun eleccion\n";
 	     	    cout<<"Ingrese un numero a eleccion:\n";
 	    	    cin>> num;
 		
 		        for (int x=1; x<= num; x++)fact=fact*x;
 		
 	     	     cout<<"El factorial de:"<<num<<"es:"<<fact;
 	
 	    	    }break;	
				  
 	    case 2 :{

 	    	cout <<"Favor ingrese el numero a mostrar la tabla de multiplicar que desea:\n";
 	    	cin>>n;
 	    	    
 	    	    for (int i=1;i<100000;i++){
 	    	    	cout<<i<<"*"<<n<<"="<<i*n<<endl;
				 }
 	    	
 	    	}break; 
		case 3:{
		 	int vector[10];
		 	int i,pares,impares;
		 	float resultado,resultado2;
		 	pares=0;
		 	impares=0;   
		 	   
		 	    cout<<"Se le solicita que ingrese 10 digitos para el calculo:\n";
		 	    
		 	    for (i=0; i<=10; i++){
		 	    	if(vector[i]%2== 00){
		 	    		pares=pares+1;}
		 	    		
		 	    	else {if(vector[i]%2>0){
		 	    		impares=impares+1; }
					 }
					 }
					 
				 cout <<"Numeros...."<<pares<<"...pares\n"<<endl;
				 cout <<"Numeros...."<<impares<<"...impares\n"<<endl;
				 
				 resultado=(pares+pares);
				 resultado2=(impares+impares);
				 acumulador=acumulador+impares;
				 
				 cout<<"La suma de numeros pares es...:"<<resultado<<"....\n";
				 cout<<"La suma de numeros impares es...:"<<resultado2<<"....\n";
				 
				 cout<<"El promedio de los numeros impares es de:"<<acumulador/10<<"\n";
				 
				 }break;	 
		case 4:{
		 	cout<<"Se le solicita lo siguiente para indicarle si es un dia laboral o no \n";
		 	cout<<"Ingresa un dia de la semana ya sea en minusculas o mayusculas..\n";
		     cin>>dia;
		 	    
		 	       switch (dia){
		 	       	
		 	       	    case 'lunes':case 'LUNES':
		 	       	    	cout<<dia<<"Es un dia laboral";
		 	       	    	break;
		 	       	    
		 	       	    case 'martes':case'MARTES':
		 	       	    	cout<<dia<<"Es un dia laboral";
		 	       	    	break;
		 	       	    	
		 	       	    case 'miercoles':case 'MIERCOLES':
		 	       	    	cout<<dia<<"Es un dia laboral";
		 	       	    	break;
		 	       	    	
		 	       	    case 'jueves': case 'JUEVES':
		 	       	    	cout<<dia<<"Es un dia laboral";
		 	       	    	break;
		 	       	    
		 	       	    case 'viernes': case 'VIERNES':
		 	       	    	cout<<dia<<"Es un dia laboral";
		 	       	    	break;
		 	       	    	
		 	       	    case 'sabado':case 'SABADO':
		 	       	    	cout<<dia<<"Es un dia laboral hasta medio día";
		 	       	    	break;
		 	       	    	
		 	       	    case 'domingo': case'DOMINGO':
		 	       	    	cout<<dia<<"No es un dia laboral";
		 	       	    	break;
		 	       	    
		 	       	    default:
		 	       	    	cout<<dia<<"Ingrese un dia valido ";    	
					}
			     }break;		
		case 5:{
			  const string clave_pin="123456";
			   contador=1;
			  cout<<"Bienvenido apreciable usuario"<<endl;       
              cout<<"Ingrese su clave de acceso"<<endl;             
              string clave = "";
              cin>>clave;
              while (contador!=3){
              	cin>>clave;
              	if (clave==clave_pin){
              		contador=3;
              		cout<<"La contraseña es correcta,bienvenido";
              	
				  }else {cout<<"la contraseña es incorrecta vuelva a intentar";
				        contador++;
				  }
              if (contador==4){
              	cout<<"Sera reportado por intento no autorizado";
			  }	
			  }                            
	         
		        }break;
 	    default: 
 	            cout<<"\n\n";
 	            
                 } 

         }while(opc!=5); 
    
         getch();
 
         return 0;
       
     }
 