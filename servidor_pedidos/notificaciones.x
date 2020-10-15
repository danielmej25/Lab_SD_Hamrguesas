/*Declaracion de datos a transferir entre el el servidor de pedidos y el servidor de notificaciones*/

/*Declaracion de constantes*/
const MAX_PEDIDO=10;


/*Declaracion de la estructura que permite almacenar los datos de una hamburguesa*/
struct nodo_hamburguesa2{	
	char tipo;
	int cantidadIngredientesExtra;	
};

struct pedido2{
    int mesa;
	nodo_hamburguesa2  pedido_hamburguesas[MAX_PEDIDO];
};


/*Definicion de las operaciones que se pueden realizar*/
program notificacion_hamburguesas{
	version notificacion_hamburguesas_version{
		bool notificarPedidoSistema(pedido2 objPedido)=1;
	}=1;
}=0x20000002;





