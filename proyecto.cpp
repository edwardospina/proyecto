#include <iostream>

using namespace std;	

//prototipo de funcion
char temperatura();

int main(int argc, char** argv)
{
	
	cout<<"\n    CALCULO DE VALOR RESISTIVO EN RESISTENCIAS DE CARBONO TRANSISTORES Y LED"<<endl<<endl;
	
	//menu definiendo las opciones de resistencias de 3, 4, 5 y 6 bandas de colores.
	
	cout<<"********************************************************************************";
	
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMENU"<<endl<<endl;
	
	cout<<"1. Resistencia de 3 bandas de colores\t4. Resistencia de 6 bandas de colores"<<endl<<endl;
	cout<<"2. Resistencia de 4 bandas de colores\t5. Resistencia para un transistor"<<endl<<endl;
	cout<<"3. Resistencia de 5 bandas de colores\t6. Resistencia de led"<<endl<<endl;
	cout<<"0. salir"<<endl<<endl;
	
	cout<<"********************************************************************************"<<endl<<endl;
	
	//escoger opcion de menu.
	
	int menu;
	
	
	cout<<"Seleccione la opcion a la que desee entrar: ";	
	cin>>menu;
	cout<<endl<<endl;
	
	//bucle para volver al menu.
	
	
	while (menu>0)
	{
		
		if (menu<7)
		{	
			
			switch(menu)
				{
					case 1:
						{
						
						cout<<"********************************************************************************"<<endl;
										
						cout<<"\t\t\tRESISTENCIA DE 3 BANDAS DE COLORES"<<endl<<endl<<endl;
						
						//cuadro de definicion de parametros para resistencias de 3 bandas
						
						cout<<"CUADRO DE REFERENCIA"<<endl<<endl;
						cout<<"\tColor\t\t1 Banda\t\t2 Banda\t\t3 Banda"<<endl<<endl;		
						cout<<"0.\tNegro\t\t0\t\t0\t\t1"<<endl<<endl;
						cout<<"1.\tCafe\t\t1\t\t1\t\t10"<<endl<<endl;
						cout<<"2.\tRojo\t\t2\t\t2\t\t100"<<endl<<endl;
						cout<<"3.\tNaranja\t\t3\t\t3\t\t1000"<<endl<<endl;
						cout<<"4.\tAmarillo\t4\t\t4\t\t10000"<<endl<<endl;
						cout<<"5.\tVerde\t\t5\t\t5\t\t100000"<<endl<<endl;
						cout<<"6.\tAzul\t\t6\t\t6\t\t1000000"<<endl<<endl;
						cout<<"7.\tMorado\t\t7\t\t7\t\t10000000"<<endl<<endl;
						cout<<"8.\tGris\t\t8\t\t8\t\t100000000"<<endl<<endl;
						cout<<"9.\tBlanco\t\t9\t\t9\t\t1000000000"<<endl<<endl;
						
						
						
						
						cout<<"\nSeleccione los colores de las bandas de la resistencia de acuerdo a el cuadro\nmostrado en pantalla"<<endl<<endl;
						
						int b1, b2, b3;
						
						//definir valores de bandas
						
						cout<<"\nDigite el valor de la primera banda: ";
						cin>> b1;
											
						cout<<"\nDigite el valor de la segunda banda: ";
						cin>> b2;
						
						cout<<"\nDigite el valor de la tercera banda: ";
						cin>> b3;
						
						//mostrar valor resistivo con tolerancia
					
						cout<<"\nValor resistivo de: "<<b1<<b2;
						
						for(int i=0; i<b3;i++)
						{
							cout<<0;
						}
						
						cout<<" ohmios\n"<<endl;
						
						int final;
						int final1;
						int final2;
						int res;
						int tolerancia;
						
						final = 0;
						final1 = 0;
						final2 = 0;
												
						cout<<"Por favor escriba de vuelta el valor resistivo que aparece en pantalla: ";
						cin>>res;
						
						cout<<"\n\nReferente a la tolerancia, se conoce que para resistencias de 3 bandas su valor es del 20%"<<endl;
						
						final=res*0.2;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;											
						
						cout<<"********************************************************************************"<<endl;
						}
					break;
					
					case 2:
						{
					cout<<"********************************************************************************"<<endl;
										
						cout<<"\t\t\tRESISTENCIA DE 4 BANDAS DE COLORES"<<endl<<endl;
						
						cout<<"********************************************************************************"<<endl;
						
						//cuadro de definicion de parametros para resistencias de 4 bandas
						
						cout<<"CUADRO DE REFERENCIA"<<endl<<endl;
						cout<<"\tColor\t\t1 Banda\t\t2 Banda\t\t3 Banda"<<endl<<endl;		
						cout<<"0.\tNegro\t\t0\t\t0\t\t1"<<endl<<endl;
						cout<<"1.\tCafe\t\t1\t\t1\t\t10"<<endl<<endl;
						cout<<"2.\tRojo\t\t2\t\t2\t\t100"<<endl<<endl;
						cout<<"3.\tNaranja\t\t3\t\t3\t\t1000"<<endl<<endl;
						cout<<"4.\tAmarillo\t4\t\t4\t\t10000"<<endl<<endl;
						cout<<"5.\tVerde\t\t5\t\t5\t\t100000"<<endl<<endl;
						cout<<"6.\tAzul\t\t6\t\t6\t\t1000000"<<endl<<endl;
						cout<<"7.\tMorado\t\t7\t\t7\t\t10000000"<<endl<<endl;
						cout<<"8.\tGris\t\t8\t\t8\t\t100000000"<<endl<<endl;
						cout<<"9.\tBlanco\t\t9\t\t9\t\t1000000000"<<endl<<endl;
												
						cout<<"\nSeleccione los colores de las bandas de la resistencia de acuerdo a el cuadro\nmostrado en pantalla"<<endl<<endl;
						
						int b1, b2, b3;
						
						//definir valores de bandas
						
						cout<<"\nDigite el valor de la primera banda: ";
						cin>> b1;
											
						cout<<"\nDigite el valor de la segunda banda: ";
						cin>> b2;
						
						cout<<"\nDigite el valor de la tercera banda: ";
						cin>> b3;
						
						//mostrar valor resistivo con tolerancia
					
						cout<<"\nValor resistivo de: "<<b1<<b2;
						
						for(int i=0; i<b3;i++)
						{
							cout<<0;
						}
						
						cout<<" ohmios\n"<<endl;
						
						float final;
						float final1;
						float final2;
						float res;
						int tolerancia;
						
						final = 0;
						final1 = 0;
						final2 = 0;
												
						cout<<"Por favor escriba de vuelta el valor resistivo que aparece en pantalla: ";
						cin>>res;
						
						cout<<"\nTOLERANCIA"<<endl<<endl;
						cout<<"1. Roja\t\t=\t2%"<<endl;
						cout<<"2. Dorada\t=\t5%"<<endl;
						cout<<"3. Plateada\t=\t10%"<<endl;
						
						cout<<"\n\nSeleccione ahora el valor de la tolerancia que tiene la resistencia: ";
						cin>>tolerancia;
						
						switch (tolerancia)
						{
						case 1:
						{
						final=res*0.02;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
						
						case 2:
						{
						final=res*0.05;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
						
						case 3:
						{
						final=res*0.1;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;
						}
						break;
					}
					}
					break;
					
					case 3:
						{
					cout<<"********************************************************************************"<<endl;
										
						cout<<"\t\t\tRESISTENCIA DE 5 BANDAS DE COLORES"<<endl<<endl;
						
						cout<<"********************************************************************************"<<endl;
						
						//cuadro de definicion de parametros para resistencias de 5 bandas
						
						cout<<"CUADRO DE REFERENCIA"<<endl<<endl;
						cout<<"\tColor\t\t1 Banda\t2 Banda\t3 Banda\t4 Banda"<<endl<<endl;		
						cout<<"0.\tNegro\t\t0\t0\t0\t1"<<endl<<endl;
						cout<<"1.\tCafe\t\t1\t1\t1\t10"<<endl<<endl;
						cout<<"2.\tRojo\t\t2\t2\t2\t100"<<endl<<endl;
						cout<<"3.\tNaranja\t\t3\t3\t3\t1000"<<endl<<endl;
						cout<<"4.\tAmarillo\t4\t4\t4\t10000"<<endl<<endl;
						cout<<"5.\tVerde\t\t5\t5\t5\t100000"<<endl<<endl;
						cout<<"6.\tAzul\t\t6\t6\t6\t1000000"<<endl<<endl;
						cout<<"7.\tMorado\t\t7\t7\t7\t10000000"<<endl<<endl;
						cout<<"8.\tGris\t\t8\t8\t8\t100000000"<<endl<<endl;
						cout<<"9.\tBlanco\t\t9\t9\t9\t1000000000"<<endl<<endl;
												
						cout<<"\nSeleccione los colores de las bandas de la resistencia de acuerdo a el cuadro\nmostrado en pantalla"<<endl<<endl;
						
						int b1, b2, b3, b4;
						
						//definir valores de bandas
						
						cout<<"\nDigite el valor de la primera banda: ";
						cin>> b1;
											
						cout<<"\nDigite el valor de la segunda banda: ";
						cin>> b2;
						
						cout<<"\nDigite el valor de la tercera banda: ";
						cin>> b3;
						
						cout<<"\nDigite el valor de la cuarta banda: ";
						cin>> b4;
						
						//mostrar valor resistivo con tolerancia
					
						cout<<"\nValor resistivo de: "<<b1<<b2<<b3;
						
						for(int i=0; i<b4;i++)
						{
							cout<<0;
						}
						
						cout<<" ohmios\n"<<endl;
						
						float final;
						float final1;
						float final2;
						float res;
						int tolerancia;
						
						final = 0;
						final1 = 0;
						final2 = 0;
												
						cout<<"Por favor escriba de vuelta el valor resistivo que aparece en pantalla: ";
						cin>>res;
						
						cout<<"\nTOLERANCIA"<<endl<<endl;
						cout<<"1. Cafe\t\t=\t1%"<<endl;
						cout<<"2. Roja\t\t=\t2%"<<endl;
						cout<<"3. Verde\t=\t0.50%"<<endl;
						cout<<"4. Azul\t\t=\t0.25%"<<endl;
						cout<<"5. Morado\t=\t0.10%"<<endl;
						cout<<"6. Gris\t\t=\t0.05%"<<endl;
						cout<<"7. Dorada\t=\t5%"<<endl;
						cout<<"8. Plateada\t=\t10%"<<endl;
						
						cout<<"\n\nSeleccione ahora el valor de la tolerancia que tiene la resistencia: ";
						cin>>tolerancia;
						
						switch (tolerancia)
						{
						case 1:
						{
						final=res*0.01;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
						
						case 2:
						{
						final=res*0.02;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
						
						case 3:
						{
						final=res*0.005;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;
						}
						break;
						case 4:
						{
						final=res*0.0025;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
						case 5:
						{
						final=res*0.001;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
						case 6:
						{
						final=res*0.0005;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
						case 7:
						{
						final=res*0.05;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
						case 8:
						{
						final=res*0.1;
						
						final1 = res+final;
						final2 = res-final;
						
						cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
						cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
						}
						break;
					}
						
						}
					break;
					
					case 4:
						{						
					cout<<"********************************************************************************"<<endl;
										
						cout<<"\t\t\tRESISTENCIA DE 6 BANDAS DE COLORES"<<endl<<endl;
						
						cout<<"********************************************************************************"<<endl;
						
						//cuadro de definicion de parametros para resistencias de 6 bandas
						
						cout<<"CUADRO DE REFERENCIA"<<endl<<endl;
						cout<<"\tColor\t\t1 Banda\t2 Banda\t3 Banda\t4 Banda"<<endl<<endl;		
						cout<<"0.\tNegro\t\t0\t0\t0\t1"<<endl<<endl;
						cout<<"1.\tCafe\t\t1\t1\t1\t10"<<endl<<endl;
						cout<<"2.\tRojo\t\t2\t2\t2\t100"<<endl<<endl;
						cout<<"3.\tNaranja\t\t3\t3\t3\t1000"<<endl<<endl;
						cout<<"4.\tAmarillo\t4\t4\t4\t10000"<<endl<<endl;
						cout<<"5.\tVerde\t\t5\t5\t5\t100000"<<endl<<endl;
						cout<<"6.\tAzul\t\t6\t6\t6\t1000000"<<endl<<endl;
						cout<<"7.\tMorado\t\t7\t7\t7\t10000000"<<endl<<endl;
						cout<<"8.\tGris\t\t8\t8\t8\t100000000"<<endl<<endl;
						cout<<"9.\tBlanco\t\t9\t9\t9\t1000000000"<<endl<<endl;
												
						cout<<"\nSeleccione los colores de las bandas de la resistencia de acuerdo a el cuadro\nmostrado en pantalla"<<endl<<endl;
						
						int b1, b2, b3, b4;
						
						//definir valores de bandas
						
						cout<<"\nDigite el valor de la primera banda: ";
						cin>> b1;
											
						cout<<"\nDigite el valor de la segunda banda: ";
						cin>> b2;
						
						cout<<"\nDigite el valor de la tercera banda: ";
						cin>> b3;
						
						cout<<"\nDigite el valor de la cuarta banda: ";
						cin>> b4;
						
						//mostrar valor resistivo con tolerancia
					
						cout<<"\nValor resistivo de: "<<b1<<b2<<b3;
						
						for(int i=0; i<b4;i++)
						{
							cout<<0;
						}
						
						cout<<" ohmios\n"<<endl;
						
						temperatura();
						}
					break;
					
					case 5:
					{
						cout<<"********************************************************************************"<<endl;
										
						cout<<"\t\t\t   RESISTENCIA PARA UN TRANSISTOR"<<endl<<endl;
						
						cout<<"********************************************************************************"<<endl;
					
						int op;
									
						cout<<"\n1. Resistencia RB para clase A\n\n2. Resistencia RB para clase AB con operacional\n\n";
						cout<<"3. Resistencia RB para diseno de clase A\n\n0. salir\n\n";
						cout<<"Seleccione la opcion a la que desee entrar: ";
						cin>>op;
						cout<<"\n\n";
						
						while (op>0)
						{
							if (op<4)
							{	
								switch(op)
									{
										case 1:
										{
											cout<<"\tRESISTENCIA RB PARA CLASE A\n\n";
																
											float var1;
											float var2;
											float total;
											total = 0;
		
											cout<<"Para los amplificadores clase A, su resistencia RB viene\ndada por el paralelo entre R1 y R2\n\n";
											cout<<"RB = R1||R2\n\n";	
	
											cout<<"Ingrese el valor de la resistencia R1: ";
											cin>>var1;
											cout<<"\nIngrese el valor de la resistencia R2: ";
											cin>>var2;
	
											total = ((var1*var2)/(var1+var2));
		
											cout<<"\n\nLa resistencia RB tendria un valor de: "<<total<<" ohms\n\n";
											}
										break;
										case 2:
										{
											cout<<"\tRESISTENCIA RB PARA CLASE AB CON OPERACIONAL\n\n";
											
											
											
											float var1;
											float var2;
											float var3;
											float var4;
											float total;
											total = 0;
		
											cout<<"Para los amplificadores clase AB, su resistencia RB viene dada por.\n\n ";
											cout<<"RB = (VBE*RL*(B + 1))/(VCC - VCEsat)";
											cout<<"\n\nRecordar que VBE se tomara de 0.7V";	
	
											cout<<"\n\nIngrese el valor de la resistencia de carga RL: ";
											cin>>var1;
											cout<<"\nIngrese el valor de beta: ";
											cin>>var2;
											cout<<"\nIngrese el valor del coltage VCC: ";
											cin>>var3;
											cout<<"\nIngrese el valor del voltaje VCEsat: ";
											cin>>var4;
	
											total = ((0.7*var1*(var2+1))/(var3-var4));
		
											cout<<"\n\nLa resistencia RB tendria un valor de: "<<total<<" ohms\n\n";
										}
										break;
										case 3:
										{
											cout<<"\tRESISTENCIA RB PARA DISENO DE CLASE A\n\n";
																
											float var1;
											float var2;
											float total;
											total = 0;
		
											cout<<"Para el diseño en amplificadores clase A, su resistencia RB viene\ndada por.\n\n";
											cout<<"RB = 0.1*B*RE";
	
											cout<<"\n\nIngrese el valor del beta: ";
											cin>>var1;
											cout<<"\nIngrese el valor de la resistencia RE: ";
											cin>>var2;
	
											total = 0.1*var1*var2;
		
											cout<<"\n\nLa resistencia RB tendria un valor de: "<<total<<" ohms\n\n";
										}
										break;
									}
									
									system ("pause");
								cout<<"********************************************************************************"<<endl;
										
								cout<<"\t\t\t   RESISTENCIA PARA UN TRANSISTOR"<<endl<<endl;
						
								cout<<"********************************************************************************"<<endl;
								
								cout<<"\n1. Resistencia RB para clase A\n\n2. Resistencia RB para clase AB con operacional\n\n";
								cout<<"3. Resistencia RB para diseno de clase A\n\n0. salir\n\n";
								cout<<"Seleccione la opcion a la que desee entrar: ";
								cin>>op;
								cout<<"\n\n";
							}
							else
							{
								cout<<"La opcion seleccionada no existe"<<endl<<"por favor seleccione una opcion valida: ";
								cin>>op;
								cout<<endl<<endl;
							}
		
							while (op<0)
							{
							cout<<"La opcion seleccionada no existe"<<endl<<"por favor seleccione una opcion valida: ";
							cin>>op;
							cout<<endl<<endl;
							}
						}
					}
					break;
					
					case 6:
					{
					cout<<"********************************************************************************"<<endl;
										
						cout<<"\t\t\t     RESISTENCIA DE LED"<<endl<<endl;
						
						cout<<"********************************************************************************"<<endl;
					
						//definicion de conexion
						
						int conex;
									
						cout<<"\n1. Conexion en serie\t\t2. Conexion en paralelo\t\t0. salir\n\n";
						cout<<"Seleccione la opcion a la que desee entrar: ";
						cin>>conex;
						cout<<"\n\n";
						
						while (conex>0)
						{
							if (conex<3)
							{
								switch (conex)
								{
									case 1:
										{
											float led;
											float vf;
											float vl;
											float il;
											float res_led;
											
											res_led = 0;
											
											
											cout<<"\t\tCONEXION EN SERIE\n\n";
											
											cout<<"Tenga en cuenta que para los circuitos en serie, la corriente es la\nmisma en todos sus elementos y que el voltaje de la fuente debe ser\nmayor al de los leds."<<endl<<endl;
											
											//n led
											
											cout<<"Por favor indique el numero n de leds conectados: ";
											cin>>led;
											
											//Vf = voltaje de la fuente
											
											cout<<"\n\nPor favor indique el voltaje de la fuente en [V]: ";
											cin>>vf;
											
											//Vl = voltaje del led
											
											cout<<"\n\nPor favor indique el voltaje del led en [V]: ";
											cin>>vl;
											
											// Il = corriente del led y de todo el circuito en serie
											
											cout<<"\n\nPor favor indique la corriente en [mA]: ";
											cin>>il;
											
											float ilm;
											ilm = il * 0.001;
											
																						
											res_led = (vf-(led*vl))/ilm;
											
											cout<<"\n\nEl valor de su resistencia es de: "<<res_led<<" ohmios.\n\n";
											
										}
									break;
									case 2:
										{
											float led;
											float vf;
											float vl;
											float il;
											float res_led;
											
											res_led = 0;
											
											
											cout<<"\t\tCONEXION EN PARALELO\n\n";
											
											cout<<"Tenga en cuenta que para los circuitos en paralelo, el voltaje es el\nmismo en todos sus elementos y que el voltaje de la fuente debe ser\nmayor al de los leds."<<endl<<endl;
											
											//n led
											
											cout<<"Por favor indique el numero n de leds conectados: ";
											cin>>led;
											
											//Vf = voltaje de la fuente
											
											cout<<"\n\nPor favor indique el voltaje de la fuente en [V]: ";
											cin>>vf;
											
											//Vl = voltaje del led
											
											cout<<"\n\nPor favor indique el voltaje del led en [V]: ";
											cin>>vl;
											
											// Il = corriente del led y de todo el circuito en serie
											
											cout<<"\n\nPor favor indique la corriente en [mA]: ";
											cin>>il;
											
											float ilm;
											ilm = il * 0.001;
											
											res_led = (vf-vl)/(led*ilm);
											
											cout<<"\n\nEl valor de su resistencia es de: "<<res_led<<" ohmios.\n\n";	
										}
										break;
								}
								
								cout<<"********************************************************************************"<<endl;
										
								cout<<"\t\t\t     RESISTENCIA DE LED"<<endl<<endl;
						
								cout<<"********************************************************************************"<<endl;
								
								cout<<"\n1. Conexion en serie\t\t2. Conexion en paralelo\t\t0. salir\n\n";
								cout<<"Seleccione la opcion a la que desee entrar: ";
								cin>>conex;
								cout<<endl<<endl;
							}
							else
							{
								cout<<"La opcion seleccionada no existe"<<endl<<"por favor seleccione una opcion valida: ";
								cin>>conex;
								cout<<endl<<endl;
							}
		
							while (conex<0)
							{
							cout<<"La opcion seleccionada no existe"<<endl<<"por favor seleccione una opcion valida: ";
							cin>>conex;
							cout<<endl<<endl;
							}
						}					
					}
					break;
					
				}
			
			cout<<"********************************************************************************";

			cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMENU"<<endl<<endl;

			cout<<"1. Resistencia de 3 bandas de colores\t4. Resistencia de 6 bandas de colores"<<endl<<endl;
			cout<<"2. Resistencia de 4 bandas de colores\t5. Resistencia para un transistor"<<endl<<endl;
			cout<<"3. Resistencia de 5 bandas de colores\t6. Resistencia de led"<<endl<<endl;
			cout<<"0. salir"<<endl<<endl;
	
			cout<<"********************************************************************************"<<endl<<endl;
			
			cout<<"Seleccione la opcion a la que desee entrar: ";
			cin>>menu;
			cout<<endl<<endl;
		}
			
		else
		
		{
			cout<<"La opcion seleccionada no existe"<<endl<<"por favor seleccione una opcion valida: ";
			cin>>menu;
			cout<<endl<<endl;
		}
		
		while (menu<0)
			{
				cout<<"La opcion seleccionada no existe"<<endl<<"por favor seleccione una opcion valida: ";
				cin>>menu;
				cout<<endl<<endl;
			}
	}

	
	cout<<endl;
	
	cout<<"********************************************************************************"<<endl;
	
	cout<<"\t\t\tGRACIAS POR TRABAJAR CON NOSOTROS"<<endl<<endl<<"\t\t\t\tHASTA LA PROXIMA"<<endl<<endl;	
	
	cout<<"********************************************************************************"<<endl<<endl;
	
	system("pause");
	return 0;
}

char temperatura()
{
	
	float final;
	float final1;
	float final2;
	float res;
	int tolerancia;
						
	final = 0;
	final1 = 0;
	final2 = 0;
	
	cout<<"Por favor escriba de vuelta el valor resistivo que aparece en pantalla: ";
	cin>>res;
	
	cout<<"\nCOEFICIENTE DE TEMPERATURA"<<endl<<endl;
	cout<<"1. Negro"<<endl;
	cout<<"2. Cafe"<<endl;
	cout<<"3. Roja"<<endl;
	cout<<"4. Naranja"<<endl;
	cout<<"5. Amarillo"<<endl;
	cout<<"6. Verde"<<endl;
	cout<<"7. Azul"<<endl;
	cout<<"8. Morado"<<endl;
	cout<<"9. Gris"<<endl;
	
	int temp;
						
	cout<<"\n\nSeleccione ahora el coeficiente de temperatura que tiene la resistencia: ";
	cin>>temp;
	cout<<endl;
	
	switch (temp)
	{
		case 1:
			{
				cout<<"\nCoeficiente de temperatura de: "<<250<<" ppm/k";
			}
		break;
		case 2:
			{
				cout<<"\nCoeficiente de temperatura de: "<<100<<" ppm/k";
			}
		break;
		case 3:
			{
				cout<<"\nCoeficiente de temperatura de: "<<50<<" ppm/k";
			}
		break;
		case 4:
			{
				cout<<"\nCoeficiente de temperatura de: "<<15<<" ppm/k";
			}
		break;
		case 5:
			{
				cout<<"\nCoeficiente de temperatura de: "<<25<<" ppm/k";
			}
		break;
		case 6:
			{
				cout<<"\nCoeficiente de temperatura de: "<<20<<" ppm/k";
			}
		break;
		case 7:
			{
				cout<<"\nCoeficiente de temperatura de: "<<10<<" ppm/k";
			}
		break;
		case 8:
			{
				cout<<"\nCoeficiente de temperatura de: "<<5<<" ppm/k";
			}
		break;
		case 9:
			{
				cout<<"\nCoeficiente de temperatura de: "<<1<<" ppm/k";
			}
		break;
	}
	
	cout<<"\n\n";
	system("pause");
	
	cout<<"\n\nTOLERANCIA\n"<<endl<<endl;
	cout<<"1. Cafe\t\t=\t1%1. Negro"<<endl;
	cout<<"2. Roja\t\t=\t2%"<<endl;
	cout<<"3. Verde\t=\t0.50%"<<endl;	
	cout<<"4. Azul\t\t=\t0.25%"<<endl;
	cout<<"5. Morado\t=\t0.10%"<<endl;
	cout<<"6. Gris\t\t=\t0.05%"<<endl;
	cout<<"7. Dorada\t=\t5%"<<endl;
	cout<<"8. Plateada\t=\t10%"<<endl;
						
	cout<<"\n\nSeleccione ahora el valor de la tolerancia que tiene la resistencia: ";
	cin>>tolerancia;
						
	switch (tolerancia)
	{
		case 1:
		{
			final=res*0.01;
						
			final1 = res+final;
			final2 = res-final;
						
			cout<<"\n\nValor resistivo maximo: "<<final1<<endl<<endl;
			cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;
		}
		break;
		case 2:
		{
			final=res*0.02;
						
			final1 = res+final;
			final2 = res-final;
						
			cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
			cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
		}
		break;
						
		case 3:
		{
			final=res*0.005;
						
			final1 = res+final;
			final2 = res-final;
					
			cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
			cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;
		}
		break;
		case 4:
		{
			final=res*0.0025;
				
			final1 = res+final;
			final2 = res-final;
				
			cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
			cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
		}
		break;
		case 5:
		{
			final=res*0.001;
				
			final1 = res+final;
			final2 = res-final;
				
			cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
			cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
		}
		break;
		case 6:
		{
			final=res*0.0005;
				
			final1 = res+final;
			final2 = res-final;
					
			cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
			cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
		}
		break;
		case 7:
		{
			final=res*0.05;
						
			final1 = res+final;
			final2 = res-final;
						
			cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
			cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
		}
		break;
		case 8:
		{
			final=res*0.1;
						
			final1 = res+final;
			final2 = res-final;
						
			cout<<"\nValor resistivo maximo: "<<final1<<endl<<endl;
			cout<<"Valor resistivo minimo: "<<final2<<endl<<endl;	
		}
		break;
	}
	
	cout<<"\n";
	system("pause");
	
	cout<<"********************************************************************************";

			cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tMENU"<<endl<<endl;

			cout<<"1. Resistencia de 3 bandas de colores\t4. Resistencia de 6 bandas de colores"<<endl<<endl;
			cout<<"2. Resistencia de 4 bandas de colores\t5. Resistencia para un transistor"<<endl<<endl;
			cout<<"3. Resistencia de 5 bandas de colores\t6. Resistencia de led"<<endl<<endl;
			cout<<"0. salir"<<endl<<endl;
	
			cout<<"********************************************************************************"<<endl<<endl;
			int menu;
			cout<<"Seleccione la opcion a la que desee entrar: ";
			cin>>menu;
			cout<<endl<<endl;
	
	return temperatura();
	
}