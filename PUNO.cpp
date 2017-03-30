
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <exception>
#include <cstdlib>



using namespace std;



class ItemFactura{
	
	public:
		ItemFactura()
			{
			CodigoProveedor;
			NombreCliente;
			Descuento;
			CodigoCategoria;
			NombreCategoria;
			cantidadProducto;
			NombreProducto;
			PrecioUnitario;
			PrecioTotal;
			
			}
		
		ItemFactura(int _CodigoProveedor, string _NombreCliente, 
		bool _Descuento, int _CodigoCategoria, 
		string _NombreCategoria, int _cantidadProducto, string _NombreProducto,
		int _PrecioUnitario, int _PrecioTotal)
			{
			CodigoProveedor=_CodigoProveedor;
			NombreCliente=_NombreCliente;
			Descuento=_Descuento;
			CodigoCategoria=_CodigoCategoria;
			NombreCategoria=_NombreCategoria;
			cantidadProducto=_cantidadProducto;
			NombreProducto=_NombreProducto;
			PrecioUnitario=_PrecioUnitario;
			PrecioTotal=_PrecioTotal;			
			}
		
		int getCodigoP(){
			return CodigoProveedor;
		}
		string getNombreCliente(){
			return NombreCliente;
		}
		string getCategoria(){
			return NombreCategoria;
		}
		int getCodCategoria(){
			return CodigoCategoria;
		}
		int getCantidadProducto(){
			return cantidadProducto;
		}
		
		string getNombreProducto(){
			return NombreProducto;
		}
		
		int getPrecioTotal(){
			return PrecioTotal;
		}
		int getPrecioUnitario(){
			return PrecioUnitario;
		}
			
		void facturar(){
			
			if (Descuento)
				{
				PrecioTotal = PrecioTotal - (PrecioTotal * 0.05);
				}
			string a = "||||||||||Codigo del proveedor: " +std::to_string(CodigoProveedor) +" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string b = "||||||||||Nombre del proveedor: " +std::to_string(CodigoProveedor) + "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string c = "||||||||||Cliente: " +NombreCliente + "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string d = "|||||Codigo: " + std::to_string(CodigoCategoria) + "  Categoria: " + NombreCategoria + "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string e = "|||||Producto: " + NombreProducto + "  Cantidad: " + std::to_string(cantidadProducto) + "  Precio unitario:" + std::to_string(PrecioUnitario)  + "|||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string f = "|||||Precio total: " + std::to_string(PrecioTotal) + "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			
			
			printf ("%.90s\n", "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","||||||||||||||||||||||||||||||||||INFORMACION DE COMPRA|||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n",a.c_str());
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n",b.c_str());
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			
			printf ("%.90s\n", c.c_str());
		
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			
			printf ("%.90s\n",d.c_str());
			
			printf ("%.90s\n",e.c_str());
			printf ("%.90s\n",f.c_str());
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			
		}
		
	
		
		
	private:
		int CodigoProveedor;
		string NombreCliente;
		bool Descuento;
		int CodigoCategoria;
		string NombreCategoria;
		int cantidadProducto;
		string NombreProducto;
		int PrecioUnitario;
		int PrecioTotal;
		
		
};




//////////////CLASES PARA LOS ARCHIVOS DE TEXTO//////////////
class Proveedor{
	
	public:
		Proveedor(){
		Codigo = 0;
		Nombre = "Nulo";
		Direccion = "Nulo";
		Telefono = 0;
		cont=0;
		}
		
		Proveedor(int _code, string _name, string _direccion, int _tel)
			{
			Codigo = _code;
			Nombre = _name;
			Direccion = _direccion;
			Telefono = _tel;			
			}
		
		int getCodigo(){
			//cout<<Codigo<<endl;
			return Codigo;
		}
		
		string getNombre(){
			//cout<<Nombre<<endl;
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
		
		int getCont(){
			return cont;
		}
		
		void sumarCont(){
			cont++;
			cout<<"El contadorcito"<<cont;
		}
		
	private:
		int Codigo;
		string Nombre;
		string Direccion;
		int Telefono;
		int cont=0;
		
		
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
			//cout<<Codigo<<endl;
			return Codigo;
		}
		
		string getDescripcion(){
			return Descripcion;
		}
		
		int getCont(){
			return cont;
		}
		
		void sumarCont(){
			cont++;
		}
		
	private:
		int Codigo;
		string Descripcion;
		int cont=0;
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
			//cout<<CodProducto<<endl;
			return CodProducto;
		}
		
		int getCodCategoria(){
			//cout<<CodCategoria<<endl;
			return CodCategoria;
		}
		
		string getNombre(){
			//cout<<Nombre<<endl;
			return Nombre;
		}
		
		float getPrecioUnit(){
			cout<<PrecioUnit<<endl;
			return PrecioUnit;
		}
		
		int getCantidadStock(){
			//cout<<CantidadStock<<endl;
			return CantidadStock;
		}
		
		void reducirStock(int num){
			CantidadStock = CantidadStock - num;
		}
		
		int getCont(){
			return cont;
		}
		
		void sumarCont(int n){
			cont = cont+n;
		}
	
	
	private:
		int CodProducto;
		int CodCategoria;
		string Nombre;
		float PrecioUnit;
		int CantidadStock;
		int cont=0;
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
			//cout<<Nombre_c<<endl;
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
		
		int getCont(){
			return cont;
		}
		
		void sumarCont(){
			cont++;
		}
		
		
		
	private:
		int Cedula;
		string Nombre_c;
		string Direccion_c;
		int Telefono_c;
		int cont=0;
		
		
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
		
		//Constructor Cliente
		nodo(ItemFactura* v)
			{
	    	valorF = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(ItemFactura* v, nodo * signodo)
	    {
	    	
	       valorF = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Cliente
		
		
 private:
    int valor;
    Proveedor* valorP;
    Categoria* valorC;
    Producto* valorPp;
    Cliente* valorCl;
    ItemFactura* valorF;
    
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
    
    bool LeerProveedores();
    void InsertarInicio(Proveedor* v);
    bool LeerCategorias();
    void InsertarInicio(Categoria* v);
    void InsertarInicio(Producto* v);
    bool LeerProductos();
    void InsertarInicio(Cliente* v);
    bool LeerClientes();
    void InsertarInicio(ItemFactura* v);
    
    bool VerificarProveedor(int cod);
    bool VerificarCliente(string nom);
    bool MostrarProductos(string cat, listaDC&  Cats);
    string MostrarCategoria(int cod);
    void MostrarProveedores();
    void MostrarClientes();
    void MostrarTodasCategorias();
    bool VerificarCodUnico(int cod);
    bool RevisarCod();
    int MostrarCodigoCategoria(string cat);
    int MostrarPrecio(string producto);
    int MostrarStock(string producto);
    bool VerificarCategoria(string cat);
    void ReducirStock(string producto, int num);
    bool VerificarProducto(string prod);
    bool RevisarCodCategoria();
	bool VerificarCodUnicoCategoria(int cod);
	void ImprimirFactura();
	string ProveedorMayoresVentas();
	string CategoriaMayoresVentas();
	string ProductoMayoresVentas();
	string ClienteMayoresVentas();
    
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



//Insertar para ItemFactura
void listaDC::InsertarInicio(ItemFactura* v)
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
     (aux->valorPp)->getCodProducto();         
      cout << aux->valorPp << "-> ";
      aux = aux->siguiente;
     }
     cout<<aux->valorPp<<"->";
     cout<<endl;
}   
//////////////END LISTA CIRCULAR DOBLE//////////////




///////## Verificar entero ##///////
bool VerificarEntero(string num)
	{
	int int_num;
	try{
		int_num = std::stoi(num);
		}
	catch (std::exception& e) {
    	std::cerr << "******************ERROR******************\n";
    	return false;
    	//std::terminate();
 		}
	return true;			
	}
	
int RetornarEntero(string num)
	{
	int int_num;
	int_num = std::stoi(num);
	
	return int_num;
	}
///////## END Verificar entero ##///////



bool listaDC:: LeerProveedores() { //Leer Proveedores
  	string cod_p;
  	string nom_p;
  	string dir_p;
  	string tel_p;
  	int cont = 1;
  	int int_num;
	int int_cod;
	
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
			if (VerificarEntero(tel_p) && VerificarEntero(cod_p))
				{
				
				int_num = RetornarEntero(tel_p);
				int_cod = RetornarEntero(cod_p);
				
		
				Proveedor * o = new Proveedor(int_cod, nom_p, dir_p, int_num);
		
				InsertarInicio(o);
					
					
				l = c;
				
				cod_p = "";
		  		nom_p = "";
		  		dir_p = "";
		  		tel_p = "";
		  			
		  		cont = 1;
		  			
		  	
				
				}
			else
				{
				cout<<"Error en los códigos de los proveedores.";
				return false;
				}
			
  			
			}
		
		}

  	is.close();                // close file
  	tel_p = l;
  	
  	if (VerificarEntero(tel_p) && VerificarEntero(cod_p))
  		{
		  
	  	int_num = RetornarEntero(tel_p);
		int_cod = RetornarEntero(cod_p);
		
	  	Proveedor * o = new Proveedor(int_cod, nom_p, dir_p, int_num);
			
		InsertarInicio(o);
		return true;
		}
	cout<<"*********Error en los codigos de los proveedores*********"<<endl;
	return false;
}

bool listaDC:: LeerCategorias() { //Leer Categorías

	string cod_c;
	string des_c;
  	int cont = 1;
  	int int_cod;

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
			if (VerificarEntero(cod_c))
				{
				int_cod = RetornarEntero(cod_c);
					
				Categoria * o = new Categoria(int_cod, des_c);
	
				InsertarInicio(o);
				
				
				l = c;
				
				cod_c = "";
	  			des_c = "";
	
	  			
	  			cont = 1;
	  			}
	  		else{
	  			cout<<"*********Error en las categorias*********"<<endl;
	  			return false;
			  	}
			}
		
		}

  	is.close();                // close file
  	des_c = l;
  	
  	if (VerificarEntero(cod_c))
	  	{
		int_cod = RetornarEntero(cod_c);
		
		Categoria * o = new Categoria(int_cod, des_c);	
		InsertarInicio(o);
		return true;
		}
	cout<<"*********Error en las categorias*********"<<endl;
	return false;
}



bool listaDC:: LeerProductos() { //Leer Productos
	
	string CodProducto;
	string CodCategoria;
	string Nombre;
	string PrecioUnit;
	string CantidadStock;
	
	int int_cod;
	int int_cat;
	float int_precio;
	int int_stock;

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
			if (VerificarEntero(CodProducto) && VerificarEntero(CodCategoria) && VerificarEntero(PrecioUnit) && VerificarEntero(CantidadStock))
				{
				int_cod = RetornarEntero(CodProducto);
				int_cat = RetornarEntero(CodCategoria);
				int_precio = RetornarEntero(PrecioUnit);
				int_stock = RetornarEntero(CantidadStock);
						
				Producto * o = new Producto(int_cod, int_cat, Nombre, int_precio, int_stock); 
				
				InsertarInicio(o);
		
				
				l = c;
	
				CodProducto = "";
	  			CodCategoria = "";
	  			Nombre = "";
	  			PrecioUnit = "";
	  			CantidadStock = "";
	
	  			
	  			cont = 1;
	  			}
	  		else{
	  			cout<<"*********Error en los productos*********"<<endl;
				return false;
			  }
			}
		
		}

  	is.close();                // close file
  	CantidadStock = l;
  	
  	if (VerificarEntero(CodProducto) && VerificarEntero(CodCategoria) && VerificarEntero(PrecioUnit) && VerificarEntero(CantidadStock)){
  		int_cod = RetornarEntero(CodProducto);
		int_cat = RetornarEntero(CodCategoria);
		int_precio = RetornarEntero(PrecioUnit);
		int_stock = RetornarEntero(CantidadStock);
		Producto * o = new Producto(int_cod, int_cat, Nombre, int_precio, int_stock); 
		InsertarInicio(o);
		return true;
	  	}
	cout<<"*********Error en los productos*********"<<endl;
	return false;
}


bool listaDC:: LeerClientes() { //Leer Clientes

	string CedulaCliente;
	string NombreCliente;
	string DireccionCliente;
	string TelefonoCliente;
	
	int int_ced;
	int int_tel;


  	int cont = 1;

	std::ifstream is("Clientes.txt");     // open file
	
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
		    		TelefonoCliente = l;
		    		cont++;	
					l = "";
					}
				else
					{
					l = l + c;
					}
				}
			else
				{
				switch (cont)
					{
					case 1: CedulaCliente = l;
					break;
					case 2: NombreCliente = l;
					break;
					case 3: DireccionCliente = l;
					break;
					case 4: TelefonoCliente = l;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			if (VerificarEntero(CedulaCliente) && VerificarEntero(TelefonoCliente))
				{
				int_ced = RetornarEntero(CedulaCliente);
				int_tel = RetornarEntero(TelefonoCliente);
			
				Cliente * o = new Cliente(int_ced, NombreCliente, DireccionCliente, int_tel); 
	
				InsertarInicio(o);
				
				
				l = c;
	
				CedulaCliente = "";
	  			NombreCliente = "";
	  			DireccionCliente = "";
	  			TelefonoCliente = "";
		
	  			cont = 1;
  				}
  			else{
  				cout<<"*********Error en el archivo de clientes*********"<<endl;
				return false;
			  }
			}
		}

  	is.close();                // close file
  	TelefonoCliente = l;
  	if (VerificarEntero(CedulaCliente) && VerificarEntero(TelefonoCliente))
		{
		int_ced = RetornarEntero(CedulaCliente);
		int_tel = RetornarEntero(TelefonoCliente);
		Cliente * o = new Cliente(int_ced, NombreCliente, DireccionCliente, int_tel); 

		InsertarInicio(o);
		return true;
		}
	cout<<"*********Error en el archivo de clientes*********"<<endl;
	return false;
}


bool listaDC:: VerificarCodUnico(int cod)
	{
	int cont = 1;
	pnodo aux = primero;
	int temp;
	
	if ((aux->valorP)->getCodigo() == cod && cont == 2)
		{
		cout<<"**********************************************ERROR***************************************"<<endl<<"                              NO SE ACEPTAN CODIGOS REPETIDOS EN LOS PROVEEDORES"<<endl;
		return false;
		}
	else{
		if ((aux->valorP)->getCodigo() == cod)
			{
			cont++;
			}
	}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorP)->getCodigo();
		
		if (temp == cod && cont==2)
			{
			cout<<"**********************************************ERROR***************************************"<<endl<<"                           NO SE ACEPTAN CODIGOS REPETIDOS EN LOS PROVEEDORES"<<endl;
			return false;
			}
		else
			{
			if (temp == cod){
				cont++;
			}
			
			}
		aux=aux->siguiente;
		}
	return true;
	}


bool listaDC::VerificarProveedor(int cod) //Verifica que el proveedor exista
	{
	pnodo aux = primero;
	int temp;
	
	if ((aux->valorP)->getCodigo() == cod)
		{
			(aux->valorP)->sumarCont();
		return true;
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorP)->getCodigo();
		
		if (temp == cod)
			{
			cout<<"************************ Codigo aceptado ************************"<<endl;
			(aux->valorP)->sumarCont();
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	cout<<"************************ ¡Proveedor invalido! ************************\n"<<endl;
	return false;
	}
	
bool listaDC::VerificarProducto(string prod) //Verifica que el producto exista
	{
	pnodo aux = primero;
	string temp;
	
	if ((aux->valorPp)->getNombre() == prod)
		{
		return true;
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorPp)->getNombre();
		
		if (temp == prod)
			{
			printf ("%.90s\n", "\n||||||||||||||||| Producto aceptado ||||||||||||||||||||||||||||||||");
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	cout<<"************************ ¡Producto invalido! ************************\n"<<endl;
	return false;
	}
	
bool listaDC::VerificarCliente(string nom)
	{
	pnodo aux = primero;
	string temp;
	
	if ((aux->valorCl)->getNombre() == nom)
		{
		(aux->valorCl)->sumarCont();
		return true;
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorCl)->getNombre();
		
		if (temp == nom)
			{
			cout<<"|||||Se aplica un descuento del 5% por ser cliente frecuente|||||"<<endl;
			(aux->valorCl)->sumarCont();
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	cout<<"Cliente nuevo\n"<<endl;
	return false;
	}

bool listaDC::VerificarCategoria(string cat)
	{
	pnodo aux = primero;
	string temp;
	
	if ((aux->valorC)->getDescripcion() == cat)
		{
		(aux->valorC)->sumarCont();
		return true;
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorC)->getDescripcion();
		
		if (temp == cat)
			{                   
			printf ("%.90s\n", "\n||||||||||||||||||||||||||||||||||||||| Categoria valida |||||||||||||||||||||||||||||||||||||||||||||");
			(aux->valorC)->sumarCont();
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	printf ("%.90s\n", "\n************************************** Categoria incorrecta ***********************************************");
	//cout<<"Categoria invalida\n"<<endl;
	return false;
	}


string listaDC::MostrarCategoria(int cod) //Muestra la categoria segun el codigo de la misma
	{
	pnodo aux = primero;
	string _categoria;
	
	if ((aux->valorC)->getCodigo() == cod)
		{
		_categoria = (aux->valorC)->getDescripcion();
		return _categoria;
		//return (aux->valorC)->getDescripcion();
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		if ((aux->valorC)->getCodigo() == cod)
			{
			return (aux->valorC)->getDescripcion();
			}
		aux = aux->siguiente;
		}

	return "No está";
	}


int listaDC::MostrarPrecio(string producto) //Muestra el precio de un producto
	{
	pnodo aux = primero;
	
	if ((aux->valorPp)->getNombre() == producto)
		{
			
		//cout<<(aux->valorPp)->getPrecioUnit();
		return (aux->valorPp)->getPrecioUnit();

		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		if ((aux->valorPp)->getNombre() == producto)
			{
			return (aux->valorPp)->getPrecioUnit();
			}
		aux = aux->siguiente;
		}

	return 0;
	}
	
void listaDC::ReducirStock(string producto, int num) //Disminuye el stock de un producto
	{
	pnodo aux = primero;
	
	if ((aux->valorPp)->getNombre() == producto)
		{
		(aux->valorPp)->sumarCont(num);
		(aux->valorPp)->reducirStock(num);
		}
		
	else{
		aux = aux->siguiente;
		
		while (aux != primero)
			{
			if ((aux->valorPp)->getNombre() == producto)
				{
				(aux->valorPp)->sumarCont(num);
				(aux->valorPp)->reducirStock(num);
				}
			aux = aux->siguiente;
			}
		}
	}
	
	

int listaDC::MostrarStock(string producto) //Muestra el stock de un producto
	{
	pnodo aux = primero;
	
	if ((aux->valorPp)->getNombre() == producto)
		{
			
		cout<<(aux->valorPp)->getCantidadStock();
		return (aux->valorPp)->getCantidadStock();

		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		if ((aux->valorPp)->getNombre() == producto)
			{
				cout<<(aux->valorPp)->getCantidadStock();
			return (aux->valorPp)->getCantidadStock();
			}
		aux = aux->siguiente;
		}

	return 0;
	}



int listaDC::MostrarCodigoCategoria(string cat) //Retorna la el codigo de una categoria
	{
	pnodo aux = primero;

	
	if ((aux->valorC)->getDescripcion() == cat)
		{
		//cout<<(aux->valorC)->getCodigo();
		return (aux->valorC)->getCodigo();


		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		if ((aux->valorC)->getDescripcion() == cat)
			{
			return (aux->valorC)->getCodigo();
			}
		aux = aux->siguiente;
		}

	return 0;
	}

bool listaDC::MostrarProductos(string cat, listaDC&  Cats) //Muestra todos los productos de una categoria en especifico
	{
	pnodo aux = primero;
	int cont = 1;
	int cont2 = 0;
	string temp = Cats.MostrarCategoria((aux->valorPp)->getCodCategoria());


	if (temp == cat)
		{
		cout<<cont<<". ";
		cout<<(aux->valorPp)->getNombre()<<endl;
		cont++;
		}
	aux = aux->siguiente;
	while (aux != primero)
		{
			
		temp = Cats.MostrarCategoria((aux->valorPp)->getCodCategoria());
		if (temp == cat)
			{
			cout<<cont<<". "<<(aux->valorPp)->getNombre()<<endl;
			cont++;
			cont2++;
			}
		aux = aux->siguiente;		
		}
	if (cont2 == 0)
		{
		printf ("%.90s\n", "\n******************* No hay productos disponibles en esta categeoria *************************************************");
		return false;
		}
	return true;	
	}

void listaDC::MostrarProveedores() //Muestra en pantalla los proveedores
	{
	pnodo aux = primero;
	int cont = 1;
	cout<<"------------------------Proveedores disponibles------------------------"<<endl;
	cout<<"   Codigo    "<<"Nombre"<<endl;
	cout<<cont<<". "<<(aux->valorP)->getCodigo()<<"  "<<(aux->valorP)->getNombre()<<endl;
	aux = aux->siguiente;
	cont++;
	 
	while (aux != primero)
		{
		cout<<cont<<". "<<(aux->valorP)->getCodigo()<<"  "<<(aux->valorP)->getNombre()<<endl;
		aux = aux->siguiente;
		cont++;
		}
	}

void listaDC::MostrarClientes() //Muestra en pantalla los clientes regulares
	{
	pnodo aux = primero;
	int cont = 1;
	
	cout<<cont<<". "<<(aux->valorCl)->getNombre()<<endl;
	aux = aux->siguiente;
	cont++;
	 
	while (aux != primero)
		{
		cout<<cont<<". "<<(aux->valorCl)->getNombre()<<endl;
		aux = aux->siguiente;
		cont++;
		}
	}

void listaDC::MostrarTodasCategorias() //Muestra en pantalla la categoria de los productos
	{
	pnodo aux = primero;
	int cont = 1;
	//cout<<"------------------------Categorias disponibles------------------------"<<endl;
	
	cout<<cont<<". "<<(aux->valorC)->getDescripcion()<<endl;
	aux = aux->siguiente;
	cont++;
	 
	while (aux != primero)
		{
		cout<<cont<<". "<<(aux->valorC)->getDescripcion()<<endl;
		aux = aux->siguiente;
		cont++;
		}
	}

bool listaDC::RevisarCod() //RETORNA TRUE SI HAY ALGUN CODIGO REPETIDO
	{
	pnodo aux = primero;
	int temp;
	
	temp = (aux->valorP)->getCodigo();

	if (!VerificarCodUnico(4)){
		return true;
	}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorP)->getCodigo();
		
		if (!VerificarCodUnico(temp))
			{
			cout<<"******************************************************************************************"<<endl;
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	return false;
	}

bool listaDC:: VerificarCodUnicoCategoria(int cod) //REVISA QUE LOS CODIGOS DE LAS CATEGORIAS SEAN UNICOS
	{
	int cont = 1;
	pnodo aux = primero;
	int temp;
	
	if ((aux->valorC)->getCodigo() == cod && cont == 2)
		{
		cout<<"******************************************ERROR*********************************************"<<endl<<"                        NO SE ACEPTAN CODIGOS REPETIDOS EN LAS CATEGORIAS"<<endl;
		return false;
		}
	else{
		if ((aux->valorC)->getCodigo() == cod)
			{
			cont++;
			}
	}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorC)->getCodigo();
		
		if (temp == cod && cont==2)
			{
			cout<<"****************************************ERROR*********************************************"<<endl<<"                    NO SE ACEPTAN CODIGOS REPETIDOS EN LAS CATEGORIAS"<<endl;
			return false;
			}
		else
			{
			if (temp == cod){
				cont++;
			}
			
			}
		aux=aux->siguiente;
		}
	return true;
	}
	
bool listaDC::RevisarCodCategoria() //RETORNA TRUE SI HAY ALGUN CODIGO REPETIDO EN LAS CATEGORIAS
	{
	pnodo aux = primero;
	int temp;
	
	temp = (aux->valorC)->getCodigo();

	if (!VerificarCodUnicoCategoria(4)){
		return true;
	}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorC)->getCodigo();
		
		if (!VerificarCodUnicoCategoria(temp))
			{
			cout<<"******************************************************************************************"<<endl;
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	return false;
	}


string listaDC::ProveedorMayoresVentas(){ //BUSCA EL PROVEEDOR CON MAS VENTAS
	pnodo aux = primero;
	pnodo temp = aux;
	do {
  		if ((temp->valorP)->getCont() <(aux->valorP)->getCont()) 
			{
			temp = aux;
			aux = aux->siguiente;
			}
		else{
			aux= aux->siguiente;
			
		}
		} while (aux != primero);
	cout<<(temp->valorP)->getNombre()<<endl;;
	return (temp->valorP)->getNombre();
	}
	
string listaDC::CategoriaMayoresVentas(){ //BUSCA LA CATEGORIA CON MAS VENTAS
	pnodo aux = primero;
	pnodo temp = aux;
	do {
  		if ((temp->valorC)->getCont() <(aux->valorC)->getCont()) 
			{
			temp = aux;
			aux = aux->siguiente;
			}
		else{
			aux= aux->siguiente;
			
		}
		} while (aux != primero);
	cout<<(temp->valorC)->getDescripcion()<<endl;;
	return (temp->valorC)->getDescripcion();
	}

string listaDC::ProductoMayoresVentas(){ //BUSCA EL PRODUCTO CON MAS VENTAS
	pnodo aux = primero;
	pnodo temp = aux;
	do {
  		if ((temp->valorPp)->getCont() <(aux->valorPp)->getCont()) 
			{
			temp = aux;
			aux = aux->siguiente;
			}
		else{
			aux= aux->siguiente;
			
		}
		} while (aux != primero);
	cout<<(temp->valorPp)->getNombre()<<endl;;
	return (temp->valorPp)->getNombre();
	}
	
string listaDC::ClienteMayoresVentas(){ //BUSCA EL PROVEEDOR CON MAS VENTAS
	pnodo aux = primero;
	pnodo temp = aux;
	do {
  		if ((temp->valorCl)->getCont() <(aux->valorCl)->getCont()) 
			{
			temp = aux;
			aux = aux->siguiente;
			}
		else{
			aux= aux->siguiente;
			
		}
		} while (aux != primero);
	cout<<(temp->valorCl)->getNombre()<<endl;;
	return (temp->valorCl)->getNombre();
	}

		

void listaDC::ImprimirFactura(){
	pnodo aux = primero;
	
	cout<<"Imprimiendo factura..."<<endl;
		
	ofstream myfile;
	myfile.open ("Factura.txt");
	myfile << "---------------------------------------------------------------\n";
	myfile << "---------------------------------------------------------------\n";
	myfile << "Codigo del proveedor: " <<(aux->valorF)->getCodigoP() <<endl;
	myfile << "Nombre del proveedor: " <<endl;
	myfile << "---------------------------------------------------------------\n";
	myfile << "---------------------------------------------------------------\n";
	myfile << "Cliente: " << (aux->valorF)->getNombreCliente() << endl;
	myfile << "---------------------------------------------------------------\n";
	myfile << "Codigo                      Producto                   Cantidad"<<endl;
	myfile << (aux->valorF)->getCodCategoria() << "                             "<< (aux->valorF)->getNombreProducto() 
															<< "                          " << (aux->valorF)->getCantidadProducto()<< endl;
	myfile << "---------------------------------------------------------------\n";
	myfile << "Precio por unidad: " << (aux->valorF)->getPrecioUnitario() << endl;
		/*
		if (Desc){
			myfile << "Precio total: " << precio*int_cant_input - (precio*int_cant_input*0.05)<<endl;
			
		}
		else{*/
	myfile << "Precio total: " << (aux->valorF)->getPrecioTotal() <<endl;
		//}
		
		
		
	//	myfile.close();
		
		cout<<"Factura lista"<<endl;
	
	aux = aux->siguiente;
	
	while (aux != primero){
	//	ofstream myfile;
	//	myfile.open ("Factura.txt");
		myfile << "\n\n---------------------------------------------------------------\n";
		myfile << "---------------------------------------------------------------\n";
		myfile << "Codigo del proveedor: " <<(aux->valorF)->getCodigoP() <<endl;
		myfile << "Nombre del proveedor: " <<endl;
		myfile << "---------------------------------------------------------------\n";
		myfile << "---------------------------------------------------------------\n";
		myfile << "Cliente: " << (aux->valorF)->getNombreCliente() << endl;
		myfile << "---------------------------------------------------------------\n";
		myfile << "Codigo                      Producto                   Cantidad"<<endl;
		myfile << (aux->valorF)->getCodCategoria() << "                             "<< (aux->valorF)->getNombreProducto() 
															<< "                                 " << (aux->valorF)->getCantidadProducto()<< endl;
		myfile << "---------------------------------------------------------------\n";
		myfile << "Precio por unidad: " << (aux->valorF)->getPrecioUnitario() << endl;
		/*
		if (Desc){
			myfile << "Precio total: " << precio*int_cant_input - (precio*int_cant_input*0.05)<<endl;
			
		}
		else{*/
			myfile << "Precio total: " << (aux->valorF)->getPrecioTotal() <<endl;
		//	myfile.close();
		aux = aux->siguiente;
		}
		
		
		//ofstream myfile;
	myfile << "---------------------------------------------------------------\n";
	myfile << "---------------------------------------------------------------\n";
	myfile << "------------------- Gracias por preferirnos :) ----------------\n";
	myfile.close();	
		}


int main()
	{

	printf ("%.90s\n", "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","||||||||||||||||||||||||||||||||Bienvenido al sistema|||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
	
	string cod_input;
	
	int cod_input_int;
	string nom_input;
	string cat_input;
	string pro_input;
	bool Desc=false;
	int cod_categoria;
	int int_cant_input;
	string cant_input;
	int precio;
	char yes_no;
	
	listaDC Items;
	listaDC ListaProveedores;

	listaDC ListaProductos;
	listaDC ListaClientes;

	listaDC ListaCategorias;

	if (ListaProveedores.LeerProveedores() && ListaClientes.LeerClientes() && ListaCategorias.LeerCategorias() && ListaProductos.LeerProductos())
		{
			
		if (ListaProveedores.RevisarCod())
			{
			cout<<endl<<"************************ERROR************************"<<endl<<"No se aceptan codigos repetidos en los proveedores"<<endl;
			cout<<"Revise el archivo de texto con los proveedores"<<endl<<"**Ningun codigo puede estar repetido**"<<endl;
			
			return 0;
			}
		
		if (ListaCategorias.RevisarCodCategoria()){
			cout<<"Error"<<endl;
			return 0;
		}
		while (true)
			{
			ListaProveedores.MostrarProveedores();
			
			cout<<"Ingrese el codigo del proveedor: "; 
			std::getline(std::cin,cod_input);
			try{
				cod_input_int = std::stoi(cod_input);
			}
			catch (std::exception& e) {
    			std::cerr << "******************ERROR******************\n";
    			//return 0;
 				}
			
	
	
			if (ListaProveedores.VerificarProveedor(cod_input_int))
				{
				cout<<"------------------------ Clientes regulares: ------------------------"<<endl;
				
				ListaClientes.MostrarClientes();
				
				cout<<"\nIngrese el nombre completo del cliente: ";
				std::getline(std::cin,nom_input);
				if (ListaClientes.VerificarCliente(nom_input)){
					Desc = true;
				}
				
				cout<<"------------------------ Categorias de productos disponibles: ------------------------"<<endl;
				ListaCategorias.MostrarTodasCategorias();
				
				while (true){
				
				cout<<"\nIngrese el nombre de la categoria: ";
				std::getline(std::cin,cat_input);
				
				if (ListaCategorias.VerificarCategoria(cat_input)){
					cout<<"------------------------  Productos disponibles en esta categoria: ------------------------"<<endl;//CORRER ESTO PARA ARRIBA
					if (ListaProductos.MostrarProductos(cat_input, ListaCategorias))
						{
						
						while (true){
									cout<<"\nIngrese el nombre del producto: ";
									std::getline(std::cin,pro_input);
									
									if (ListaProductos.VerificarProducto(pro_input))
										{
										break;
										}
									}
						
						
						while (true){
									cout<<"\nIngrese el cantidad que desea comprar: ";
									std::getline(std::cin,cant_input);
									
									try{
										int_cant_input = std::stoi(cant_input);
										}
									catch (std::exception& e) {
					    				std::cerr << "******************ERROR******************\n";
					    				//return 0;
					 					}
					 				
									 
					 				if (ListaProductos.MostrarStock(pro_input)<int_cant_input){
										cout<<endl<<"******************No hay tantas unidades en stock******************"<<endl;
										
										}
									else{
										break;
										}
									}
								break;
						}
					}
				//break;
				}
				
				
				cod_categoria = ListaCategorias.MostrarCodigoCategoria(cat_input);
				precio = ListaProductos.MostrarPrecio(pro_input);
										
				ItemFactura* Item = new ItemFactura(cod_input_int, nom_input, Desc,cod_categoria, cat_input, int_cant_input, pro_input, precio, precio*int_cant_input);
										
				Item->facturar();
				
				printf ("%.90s\n", "\n///////////////// ¿Desea efectuar la compra? (Y/N) \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
				yes_no = cin.get();
				
				if (yes_no == 'Y')
					{
					Items.InsertarInicio(Item);
					
					ListaProductos.ReducirStock(pro_input, int_cant_input);	
					}
				cin.sync();	
					printf ("%.90s\n", "\n///////////////// ¿Desea comprar otro producto? (Y/N) \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
					char comprar_otra_vez;
					//std::getline(std::cin,comprar_otra_vez);
					comprar_otra_vez = cin.get();
					
					if (comprar_otra_vez == 'N')
						{
						break;
						}
						
				}
			
				
				
			cin.sync();
			cod_input="";
			}
		
		cout<<"||||||||||||||||||||||||||||||||||| Resumen del dia ||||||||||||||||||||||||||||||||||||||"<<endl;
		cout<<"Proveedor que mas vendio: ";
		ListaProveedores.ProveedorMayoresVentas();
		
		cout<<"Categoria mas vendida: ";
		ListaCategorias.CategoriaMayoresVentas();
		
		cout<<"Producto mas vendido: ";
		ListaProductos.ProductoMayoresVentas();
		
		cout<<"Cliente que mas compro: ";
		ListaClientes.ClienteMayoresVentas();
		
		cout<<endl;
		
		
		Items.ImprimirFactura();
		}
	else{
		return 0;
	}

	}
