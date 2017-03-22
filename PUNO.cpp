
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
		
		int getCodigo(){
			cout<<"Este es el codiguito: ";
			cout<<Codigo<<endl;
			return Codigo;
		}
		
		string getNombre(){
			cout<<Nombre<<endl;
			return Nombre;
		}
		
		string getDireccion(){
			cout<<Direccion<<endl;
			return Direccion;
		}
		
		int getTelefono(){
			cout<<Telefono<<endl;
			return Telefono;
		}
		//int LeerProveedores();
		
	private:
		int Codigo;
		string Nombre;
		string Direccion;
		int Telefono;
		
		
};

class Categoria{
	
	public:
		Categoria()
			{
			Codigo = 0;
			Descripcion = "Nulo";			
			}
			
		Categoria(int _code, string _descripcion)
			{
			Codigo = _code;
			Descripcion = _descripcion;			
			}
		
		int getCodigo(){
			cout<<Codigo<<endl;
			return Codigo;
		}
		
		string getDescripcion(){
			cout<<Descripcion<<endl;
			return Descripcion;
		}
		
	private:
		int Codigo;
		string Descripcion;
};


class Producto{
	//CodProducto;CodCategoria;Nombre;PrecioUnit;CantidadStock
	public:
		Producto(){
			CodProducto = 0;
			CodCategoria = 0;
			Nombre = "Nulo";
			PrecioUnit = 0.0;
			CantidadStock = 1;
		}
		
		Producto(int _codP, int _codC, string _nomC, float _precio, int _stock){
			
			CodProducto = _codP;
			CodCategoria = _codC;
			Nombre = _nomC;
			PrecioUnit = _precio;
			CantidadStock = _stock;
		}
		
		int getCodProducto(){
			cout<<CodProducto<<endl;
			return CodProducto;
		}
		
		int getCodCategoria(){
			cout<<CodCategoria<<endl;
			return CodCategoria;
		}
		
		string getNombre(){
			cout<<Nombre<<endl;
			return Nombre;
		}
		
		float getPrecioUnit(){
			cout<<PrecioUnit<<endl;
			return PrecioUnit;
		}
		
		int getCantidadStock(){
			cout<<CantidadStock<<endl;
			return CantidadStock;
		}
	
	
	private:
		int CodProducto;
		int CodCategoria;
		string Nombre;
		float PrecioUnit;
		int CantidadStock;
};




class Cliente{
	//Cedula;Nombre_c;Direccion_c;Telefono_C
	public:
		Cliente(){
		Cedula = 0;
		Nombre_c = "Nulo";
		Direccion_c = "Nulo";
		Telefono_c = 0;
		}
		
		Cliente(int _ced, string _name, string _direccion, int _tel)
			{
			Cedula = _ced;
			Nombre_c = _name;
			Direccion_c = _direccion;
			Telefono_c = _tel;			
			}
		
		int getCedula(){
			cout<<"Este es el codiguito: ";
			cout<<Cedula<<endl;
			return Cedula;
		}
		
		string getNombre(){
			cout<<Nombre_c<<endl;
			return Nombre_c;
		}
		
		string getDireccion(){
			cout<<Direccion_c<<endl;
			return Direccion_c;
		}
		
		int getTelefono(){
			cout<<Telefono_c<<endl;
			return Telefono_c;
		}
		
	private:
		int Cedula;
		string Nombre_c;
		string Direccion_c;
		int Telefono_c;
		
		
};


//////////////END CLASES PARA LOS ARCHIVOS DE TEXTO//////////////









//////////////LISTA CIRCULAR DOBLE//////////////

class nodo {
	typedef nodo *pnodo;
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
		nodo(Proveedor *v)
			{
	    	valorP = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(Proveedor* v, nodo * signodo)
	    {
	    	
	       valorP = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Proveedor
		
		
		//Constructor Categoria
		nodo(Categoria* v)
			{
	    	valorC = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(Categoria* v, nodo * signodo)
	    {
	    	
	       valorC = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Categoria
		
		
		
		//Constructor Producto
		nodo(Producto* v)
			{
	    	valorPp = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(Producto* v, nodo * signodo)
	    {
	    	
	       valorPp = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Producto
		
		
		//Constructor Cliente
		nodo(Cliente* v)
			{
	    	valorCl = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(Cliente* v, nodo * signodo)
	    {
	    	
	       valorCl = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Cliente
		
		
 private:
    int valor;
    Proveedor* valorP;
    Categoria* valorC;
    Producto* valorPp;
    Cliente* valorCl;
    
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
    void InsertarInicio(Proveedor* v);
    int LeerCategorias();
    void InsertarInicio(Categoria* v);
    void InsertarInicio(Producto* v);
    int LeerProductos();
    void InsertarInicio(Cliente* v);
    
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
void listaDC::InsertarInicio(Proveedor* v)
{
  
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
     cout<<"PBA UNO"<<endl;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
     cout<<"PBA DOS"<<endl;
   }
}
//Fin Insertar para Proveedor



//Insertar para Categoria
void listaDC::InsertarInicio(Categoria* v)
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
//Fin Insertar para Categoria



//Insertar para Producto
void listaDC::InsertarInicio(Producto* v)
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
//Fin Insertar para Producto



//Insertar para Cliente
void listaDC::InsertarInicio(Cliente* v)
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
//Fin Insertar para Cliente



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
                  
      cout << aux->valorP << "-> ";
      aux = aux->siguiente;
     }
     cout<<aux->valorP<<"->";
     cout<<endl;
}   
//////////////END LISTA CIRCULAR DOBLE//////////////




int listaDC:: LeerProveedores() { //Leer Proveedores
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
				
			Proveedor * o = new Proveedor(int_cod, nom_p, dir_p, int_num);

			InsertarInicio(o);
			delete o;
			
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
  	tel_p = l;
  	int int_num = std::stoi(tel_p);
	int int_cod = std::stoi(cod_p);
  	Proveedor * o = new Proveedor(int_cod, nom_p, dir_p, int_num);
		
	InsertarInicio(o);
	delete o;
	
	std::cout << cod_p << endl;
	cout << nom_p << endl;
	cout << dir_p << endl;
	cout << tel_p << endl;
	
	//Mostrar();
	return 0;
}

int listaDC:: LeerCategorias() { //Leer Categorías

	string cod_c;
	string des_c;
  	int cont = 1;

	std::ifstream is("Categorías.txt");     // open file
	
	char c;
	string l;
	while (is.get(c))          // loop getting single characters
		{
		if (cont <= 2 )
			{
				
			if (c != ';')
		    	{
		    	if (c == '\n')
		    		{
		    		des_c = l;
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
					case 1: cod_c = l;
					break;
					
					case 2: des_c = l;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			
			//LLAMAR A LA FUNCION PARA CREAR EL PROVEEDOR//
			
			int int_cod = std::stoi(cod_c);
				
			Categoria * o = new Categoria(int_cod, des_c);

			InsertarInicio(o);
			delete o;
			
			l = c;
			std::cout << cod_c << endl;
			cout << des_c << endl;

			
			cod_c = "";
  			des_c = "";

  			
  			cont = 1;
  			
			}
		
		}

  	is.close();                // close file
  	des_c = l;
  	int int_cod = std::stoi(cod_c);
  	Categoria * o = new Categoria(int_cod, des_c);	
	InsertarInicio(o);
	delete o;
	std::cout << cod_c << endl;
	cout << des_c << endl;
	return 0;
}



int listaDC:: LeerProductos() { //Leer Productos
	
	cout<<"Productos: "<<endl;
	
	string CodProducto;
	string CodCategoria;
	string Nombre;
	string PrecioUnit;
	string CantidadStock;

  	int cont = 1;

	std::ifstream is("Productos.txt");     // open file
	
	char c;
	string l;
	while (is.get(c))          // loop getting single characters
		{
		if (cont <= 5 )
			{
				
			if (c != ';')
		    	{
		    	if (c == '\n')
		    		{
		    		CantidadStock = l;
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
					case 1: CodProducto = l;
					break;
					
					case 2: CodCategoria = l;
					break;
					
					case 3: Nombre = l;
					break;
					
					case 4: PrecioUnit = l;
					break;
					
					case 5: CantidadStock = l;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			int int_cod = std::stoi(CodProducto);
			int int_cat = std::stoi(CodCategoria);
			float int_precio = std::stoi(PrecioUnit);
			int int_stock = std::stoi(CantidadStock);
			
			cout<<CodProducto + " ";
			cout<<CodCategoria + " ";
			cout<<Nombre + " ";
			cout<<PrecioUnit + " ";
			cout<<CantidadStock<<endl;
						
			Producto * o = new Producto(int_cod, int_cat, Nombre, int_precio, int_stock); 

			InsertarInicio(o);
			delete o;
			
			l = c;

			CodProducto = "";
  			CodCategoria = "";
  			Nombre = "";
  			PrecioUnit = "";
  			CantidadStock = "";

  			
  			cont = 1;
  			
			}
		
		}

  	is.close();                // close file
  	CantidadStock = l;
  	
  	int int_cod = std::stoi(CodProducto);
	int int_cat = std::stoi(CodCategoria);
	float int_precio = std::stoi(PrecioUnit);
	int int_stock = std::stoi(CantidadStock);
	
	cout<<CodProducto + " ";
	cout<<CodCategoria + " ";
	cout<<Nombre + " ";
	cout<<PrecioUnit + " ";
	cout<<CantidadStock<<endl;
	
  	
  	Producto * o = new Producto(int_cod, int_cat, Nombre, int_precio, int_stock); 
	InsertarInicio(o);
	delete o;
	return 0;
}





int main()
	{
	listaDC ListaProveedores;

	listaDC ListaProductos;
	listaDC ListaClientes;

	listaDC ListaCategorias;
	
	//ListaProveedores.LeerProveedores();
	ListaCategorias.LeerCategorias();
	
	ListaProductos.LeerProductos();
	
	
	return 0;
	
	}
