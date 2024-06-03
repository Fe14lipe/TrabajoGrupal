#define INVENTARIO_H

extern char productos[20][30];
extern int elementosdefault;
extern float precios[20];
extern int cantidades[20];

void Menu();
void limpiarconsola();
void EditarProducto();
void ImprimirInventario();
void IngresarProductos();
void EliminarProductos();
void Facturacion();
void Opciones(int a);

