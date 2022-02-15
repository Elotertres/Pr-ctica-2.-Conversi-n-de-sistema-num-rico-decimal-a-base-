#include <iostream>
#include <conio.h>
//Juan Pablo Martinez Rocha
using namespace std;
int main(){
	
	int opc,base,enteros,ent[100],rem,zero,cont,temp,temp2;
	double num,decimal;
	do{
		
		cout<<"**************************************************************************"<<endl;
		cout<<"*************Conversión de sistema numérico decimal a base ß*************"<<endl;
		cout<<"**************************************************************************"<<endl;
		cout<<endl;
		cout<<"Seleccione su opcion"<<endl;
		cout<<"1.-Inicar su programa"<<endl;
		cout<<"2.-Creditos"<<endl;
		cout<<"3.-Salir"<<endl;
		scanf("%d",&opc);
		system("CLS");
		
		switch(opc){
			
			case 1:
				cout<<"Introduzca su valor"<<endl;
				scanf("%lf",&num);
				
					do{
					cout<<"Introduzca su base (mayor o igual a 2, menor o igual a 9)"<<endl;
					scanf("%d",&base);
						
						if(base<2 || base>9){
							
						cout<<"Error"<<endl;
						cout<<"Su numero debe ser mayor o igual a 2 o menor o igual a 9, intentelo de nuevo"<<endl;			
						}			
						
					}while(base<2 || base>9);
				
				enteros=num;
				decimal=num-enteros;
				
				system("cls");
				
				cout<<"Su base es:"<<endl;
				cout<<base<<endl;
				cout<<"Su numero entero es:"<<endl;
				cout<<enteros<<endl;
				cout<<"Su numero decimal es:"<<endl;
				cout<<decimal<<endl;
				temp=enteros;
				
				for(int i; i<100;i++){

					rem=temp%base;
					temp=temp/base;
						
					ent[i]=rem;
			
					if(rem==0){
						zero++;
						if(zero>2){
							cont=i;
							i=100;
						}
					}
					
					
				}
				cout<<"Su numero en binario es:"<<endl;
				
				for(cont;cont>=0;cont--){
					
				cout<<ent[cont];		
	
				}
				
				zero=0;
				cout<<".";
				
				for(int i; i<100;i++){
					
				temp2=decimal*base;
				decimal=decimal*base;
				if(temp2>=1){
					decimal=decimal-temp2;
				}
					if(temp2==0){
						
						zero++;
						
						if(zero>2){
								i=100;
						}
						
					}
				cout<<temp2;
				}
				cout<<endl;
			system("pause");
			system("CLS");	
			break;
				
			case 2:
				
			system("CLS");
			cout<<"Universidad Autonoma de Aguascalientes"<<endl;
			cout<<"**********************************************************"<<endl;
			cout<<"MAESTRA:"<<endl;
			cout<<"Dra. Aurora Torres Soto"<<endl;
			cout<<"Alumno:                               ID:"<<endl;
			cout<<"Juan Pablo Martínez Rocha              243645"<<endl;
			cout<<"**********************************************************"<<endl;
			system("pause");
			system("CLS");
			break;
					
		}
		
	}while(opc!=3);
	
	
	
	
	
} 
