/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PEDIDOS_H_RPCGEN
#define _PEDIDOS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXNOM 30
#define CANTIDAD_PRODUCTOS 20
#define MAX_PEDIDO 10

struct empresa {
	char nombreEmpresa[MAXNOM];
	char NIT[MAXNOM];
};
typedef struct empresa empresa;

struct producto {
	char nombreIngrediente[MAXNOM];
	float valor;
};
typedef struct producto producto;

struct listaProductos {
	producto product[CANTIDAD_PRODUCTOS];
};
typedef struct listaProductos listaProductos;

struct nodo_hamburguesa1 {
	char identificador[MAXNOM];
	char tipo;
	int cantidadIngredientesExtra;
	float costo;
};
typedef struct nodo_hamburguesa1 nodo_hamburguesa1;

struct pedido1 {
	int idPedido;
	nodo_hamburguesa1 pedido_hamburguesas[MAX_PEDIDO];
	float valorNeto;
	float valorTotal;
};
typedef struct pedido1 pedido1;

#define gestion_hamburguesas 0x20000001
#define gestion_hamburguesas_version 3

#if defined(__STDC__) || defined(__cplusplus)
#define consultarEmpresa 1
extern  empresa * consultarempresa_3(void *, CLIENT *);
extern  empresa * consultarempresa_3_svc(void *, struct svc_req *);
#define consultarProductos 2
extern  listaProductos * consultarproductos_3(void *, CLIENT *);
extern  listaProductos * consultarproductos_3_svc(void *, struct svc_req *);
#define registrarPedidoSistema 3
extern  bool_t * registrarpedidosistema_3(pedido1 *, CLIENT *);
extern  bool_t * registrarpedidosistema_3_svc(pedido1 *, struct svc_req *);
extern int gestion_hamburguesas_3_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define consultarEmpresa 1
extern  empresa * consultarempresa_3();
extern  empresa * consultarempresa_3_svc();
#define consultarProductos 2
extern  listaProductos * consultarproductos_3();
extern  listaProductos * consultarproductos_3_svc();
#define registrarPedidoSistema 3
extern  bool_t * registrarpedidosistema_3();
extern  bool_t * registrarpedidosistema_3_svc();
extern int gestion_hamburguesas_3_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_empresa (XDR *, empresa*);
extern  bool_t xdr_producto (XDR *, producto*);
extern  bool_t xdr_listaProductos (XDR *, listaProductos*);
extern  bool_t xdr_nodo_hamburguesa1 (XDR *, nodo_hamburguesa1*);
extern  bool_t xdr_pedido1 (XDR *, pedido1*);

#else /* K&R C */
extern bool_t xdr_empresa ();
extern bool_t xdr_producto ();
extern bool_t xdr_listaProductos ();
extern bool_t xdr_nodo_hamburguesa1 ();
extern bool_t xdr_pedido1 ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PEDIDOS_H_RPCGEN */
