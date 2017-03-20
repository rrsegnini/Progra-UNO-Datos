
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () { //Leer Proveedores
  	string cod_p;
  	string nom_p;
  	string dir_p;
  	string tel_p;
  	int cont = 1;

	std::ifstream is("Proveedores.txt");     // open file
	
	char c;
	string l;
	while (is.get(c))          // loop getting single characters
		{
		if (cont <= 4 )
			{
				
			if (c != ';')
		    	{
		    	if (c == '\n')
		    		{
		    		tel_p = l;
		    		cont++;	
					l = "";
					
					}
				else
					{
					l = l + c;
					}
		    	
				//std::cout << l << endl;
				}
			else
				{
				switch (cont)
					{
					case 1: cod_p = l;
					break;
					
					case 2: nom_p = l;
					break;
					
					case 3: dir_p = l;
					break;
					
					case 4: tel_p = l;
					cout << tel_p << endl;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			
			//LLAMAR A LA FUNCION PARA CREAR EL PROVEEDOR//
			l = c;
			std::cout << cod_p << endl;
			cout << nom_p << endl;
			cout << dir_p << endl;
			cout << tel_p << endl;
			
			cod_p = "";
  			nom_p = "";
  			dir_p = "";
  			tel_p = "";
  			
  			cont = 1;
  			
			}
		
		}

  	is.close();                // close file
	std::cout << cod_p << endl;
			cout << nom_p << endl;
			cout << dir_p << endl;
			cout << tel_p << endl;
	return 0;
}


