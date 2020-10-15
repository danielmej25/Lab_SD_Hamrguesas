
/*Declaracion de datos a transferir entre el cliente y el servidor de pedidos*/

/*Declaracion de constantes*/
const MAXNOM = 30;
const CANTIDAD_PRODUCTOS=20;
const MAX_PEDIDO=10;

struct empresa{
    char nombreEmpresa[MAXNOM];
    char NIT[MAXNOM];
};

struct producto{
    char nombreIngrediente[MAXNOM];
    float valor;
};

struct listaProductos{
    producto product[CANTIDAD_PRODUCTOS];
};

struct nodo_hamburguesa1{
	char identificador[MAXNOM];
	char tipo;
	int cantidadIngredientesExtra;
	float costo;
};

struct pedido1{
    int idPedido;
	nodo_hamburguesa1  pedido_hamburguesas[MAX_PEDIDO];
    float valorNeto;
    float valorTotal;
};


/*Definicion de las operaciones que se pueden realizar*/
program gestion_hamburguesas{
	version gestion_hamburguesas_version{
        empresa consultarEmpresa()=1;
        listaProductos consultarProductos()=2;
		bool registrarPedidoSistema(pedido1 objPedido)=3;
	}=3;
}=0x20000001;




