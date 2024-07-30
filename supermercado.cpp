#include <iostream>
#include <string>
using namespace std;

// Función para calcular el descuento
double calcularDescuento(double subtotal) {
    const double PORCENTAJE_DESCUENTO = 0.20;
    if (subtotal > 1000) {
        return subtotal * PORCENTAJE_DESCUENTO;
    } else {
        return 0.0;
    }
}

int main() {
    string nombreCliente, producto;
    double precioUnitario, cantidad, subtotal, descuento, total;
    char continuar;

    do {
        cout << "Ingrese el nombre del cliente: ";
        cin.ignore(); // Para evitar problemas con getline
        getline(cin, nombreCliente);

        cout << "Ingrese el nombre del producto: ";
        getline(cin, producto);

        cout << "Ingrese el precio unitario del producto (en bs): ";
        cin >> precioUnitario;

        cout << "Ingrese la cantidad comprada: ";
        cin >> cantidad;

        subtotal = precioUnitario * cantidad;
        descuento = calcularDescuento(subtotal);
        total = subtotal - descuento;

        cout << "\nResumen de la compra:" << endl;
        cout << "Cliente: " << nombreCliente << endl;
        cout << "Producto: " << producto << endl;
        cout << "Precio unitario: " << precioUnitario << " bs" << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Subtotal: " << subtotal << " bs" << endl;
        cout << "Descuento: " << descuento << " bs" << endl;
        cout << "Total a pagar: " << total << " bs" << endl;

        cout << "\n¿Desea realizar otra compra? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    cout << "¡Gracias por usar nuestro programa! ¡Hasta luego!" << endl;

    return 0;
}
