
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;


//////////////CLASES PARA LOS ARCHIVOS DE TEXTO//////////////
class Proveedor{
	
	public:
		Proveedor(){
		Codigo = 0;
		Nombre = "Nulo";
		Direccion = "Nulo";
		Telefono = 0;
		}
		
		Proveedor(int _code, string _name, string _direccion, int _tel)
			{
			Codigo = _code;
			Nombre = _name;
			Direccion = _direccion;
			Telefono = _tel;			
			}
		
		int getCodigo();
		string getNombre();
		string getDireccion();
		int getTelefono();
		//int LeerProveedores();
		
	private:
		int Codigo;
		string Nombre;
		string Direccion;
		int Telefono;
		
		
};

class Categoria{
	
	public:
		
		Categoria(int _code, string _descripcion)
			{
			Codigo = _code;
			Descripcion = _descripcion;			
			}
		
		int getCodigo();
		string getDescripcion();
		
	private:
		int Codigo;
		string Descripcion;
};

/*
class Producto{
	
	public:
};
*/


//////////////END CLASES PARA LOS ARCHIVOS DE TEXTO//////////////









//////////////LISTA CIRCULAR DOBLE//////////////
class nodo {
   public:
   	
   		//Constructor int
	    nodo(int v)
	    {
	    	
	       valor = v;
	       siguiente = NULL;
	       anterior =NULL;
	    }
		nodo(int v, nodo * signodo)
	    {
	       valor = v;
	       siguiente = signodo;
	    }
		//Fin Constructor int
		
		
		//Constructor Proveedor
		nodo(Proveedor v)
			{
	    	valorP = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(Proveedor v, nodo * signodo)
	    {
	    	
	       valorP = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Proveedor
		
		
		
 private:
    int valor;
    Proveedor valorP;
    nodo *siguiente;
    nodo *anterior;
    
        
   friend class listaDC;
};
typedef nodo *pnodo;

class listaDC {
   public:
    listaDC() { primero = actual = NULL; }
    ~listaDC();
    
    void InsertarInicio(int v);
    void InsertarFinal(int v);
    void InsertarPos (int v, int pos);
    void EliminarInicio();
    void EliminarFinal();
    void EliminarPos(int pos);
    bool ListaVacia() { return primero == NULL; } 
    void Imprimir();
    void Borrar(int v);
    void Mostrar();
    void Siguiente();
    void Primero();
    void Ultimo();
    void BorrarFinal();
    void BorrarInicio();
    void borrarPosicion(int pos);
    int largoLista();
    
    int LeerProveedores();
    void InsertarInicio(Proveedor v);
    
   private:
    pnodo primero;
    pnodo actual;
};

listaDC::~listaDC()
{
   pnodo aux;
   
   while(primero) {
      aux = primero;
      primero = primero->siguiente;
      primero->anterior=aux->anterior;
      aux->anterior->siguiente=primero;
      delete aux;
   }
   actual = NULL;
}

int listaDC::largoLista(){
    int cont=0;

    pnodo aux = primero;
    if(ListaVacia()){
        return cont;
    }else{
        while(aux!=primero){
        aux=aux->siguiente;
        cont++;
    }
    return cont;
    }
    
}

void listaDC::InsertarInicio(int v)
{
  
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}


//Insertar para Proveedor
void listaDC::InsertarInicio(Proveedor v)
{
  
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}
//Fin Insertar para Proveedor



void listaDC::InsertarFinal(int v)
{
   if (ListaVacia())
     {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   { 
     pnodo nuevo = new nodo(v);
     nuevo->anterior = primero->anterior;
     nuevo->siguiente=primero->anterior->siguiente;
     primero->anterior->siguiente=nuevo;
     primero->anterior=nuevo;
    }    
}


void listaDC::InsertarPos(int v,int pos)
{
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   } 
   else
   {
      if(pos <=1)
        InsertarInicio(v);    
       else
       {
        if (pos==largoLista())
          InsertarFinal(v);
        else
        {     
             pnodo aux= primero;
             int i =2;
             while((i != pos )&&(aux->siguiente!= primero))
             {
                   i++;
                   aux=aux->siguiente;
             }
             pnodo nuevo= new nodo(v);
             nuevo->siguiente=aux->siguiente;
             aux->siguiente=nuevo;
             aux->siguiente->anterior=aux;
             nuevo->siguiente->anterior=nuevo;                           
        }
       }
   }
}   

void listaDC::BorrarFinal()
{
    if (ListaVacia())
      cout << "No hay elementos en la lista:" << endl;
    else
    {
      if (primero->siguiente == primero)
      {
        pnodo temp= primero;
        primero= NULL;
        delete temp;
      }
      else 
      {
         pnodo aux = primero;
         while (aux->siguiente->siguiente != primero)
              aux = aux->siguiente;
         pnodo temp = aux->siguiente;
         aux->siguiente= primero;
         delete temp;
      }
    }
}

void listaDC::BorrarInicio()
{
    if (ListaVacia())
      cout << "No hay elementos en la lista:" << endl;
    else
    {
     if (primero->siguiente == primero)
     {
        pnodo temp= primero;
        primero= NULL;
        delete temp;
     }
     else
     {
        pnodo aux = primero;
        pnodo temp= primero;
        while (aux->siguiente!=primero)
            aux= aux->siguiente;
        aux->siguiente=primero->siguiente;
        primero=primero->siguiente; 
        primero->anterior=aux;
        delete temp;
      }
    }
}

void listaDC:: borrarPosicion(int pos)
{
  if(ListaVacia())
    cout << "Lista vacia" <<endl;
  else
  {
   if((pos>largoLista())||(pos<0))
     cout << "Error en posicion" << endl;
   else
    {
      if(pos==1)
        BorrarInicio();
      else
      {
       int cont=2;
       pnodo aux=  primero;
       while(cont<pos)
       {
         aux=aux->siguiente;
         cont++;
       }
       pnodo temp = aux->siguiente;
       aux->siguiente=aux->siguiente->siguiente;
       delete temp;
     }
    }
  }
}

void listaDC::Mostrar()
{
   pnodo aux=primero;
   while(aux->siguiente!=primero)
     {
                                
      cout << aux->valor << "-> ";
      aux = aux->siguiente;
     }
     cout<<aux->valor<<"->";
     cout<<endl;
}   
//////////////END LISTA CIRCULAR DOBLE//////////////









listaDC:: LeerProveedores() { //Leer Proveedores
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
			
		int int_num = std::stoi(tel_p);
		int int_cod = std::stoi(cod_p);
			
		//Proveedor o = Proveedor(int_cod, nom_p, dir_p, int_num);
		//Proveedor o;
		// = Proveedor(5454, nom_p, dir_p, 898989);
		
		//InsertarInicio(Proveedor(int_cod, nom_p, dir_p, int_num));
		
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

int main()
	{
	listaDC ListaProveedores;
	//Proveedor o;
	//ListaProveedores.InsertarInicio(o);
	
	
	ListaProveedores.LeerProveedores();
	return 0;
	
	}
