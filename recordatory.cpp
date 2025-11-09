#include <iostream> // etiqueta basica
#include <vector> // biblioteca de funciones 
#include <cmath> // matematica 




// namespace // para variables repetidas y su uso
namespace first {
    int x = 1;
}
// example std::cout << first::x;




// typedef 
typedef char holas;
using equisde = int;




int main() {


    // bases bariables
    int cero = 0;

    int x = 10;
    holas a = 'a';
    equisde e = 20;

    std::string sapo = "holas ";
    std::string teta = "chicas";

    double decis = 10.10;

    char A = 'a';

    bool message = true;

    double mixed = x + cero + first::x;




    // bariables constantes 
    const double pi = 1.4765;
    const int three = 3;




    // conversion de tipos por ahora solo veo sirve para numeros para char y de int a double 
    char codm = 100;

    int buenas = 8;
    int total = 10;
    double chengji = buenas / (double)total * 100;




    // mini programa de cin y cout 
    std::string name;
    int age;

    std::cout << "whats your name?";
    std::cin >> name;
    std::cout << name;




    // escogedor de mayor y menor y otras funciones matematicas 
    double y = 4;
    double b = 23.23;
    double z;
    //z = std::min(y, b);
    // z = std::max(y, b);
    // z = pow(2, 4); potencia
    // z = sqrt(9); cuadrado
    //z = abs(3); distancia positi
    // z = round(b); redon cercano
    // z = floor(b); redon down
    // z = ceil(b); redon hacia up




    // if statement 
    int edadd = 10;


    if (edadd >= 18) {
        std::cout << "entraste";
    }
    else {
        std::cout << "no entras";
    }




    // switch 
    /*  switch() {
      case 1:
      jsjsjsjs;
      break;
      default:
      djdjdj
      break;
   }
   */




    // ternary 
    int cinco = 5656;

    cinco >= 100 ? std::cout << "holaszzzz": std::cout << "my dadsss";




    // strings functions 
    // parentesis no siempre es parametro, tambien significa ejecucion. //
    /*
    .length(); cantidad de caracteres
    .empty(); vacio
    .clear(); limpiar
    .append("@gmail.com"); agregar lo que sea al final
    .at(1); mostrar por indice
    .insert(0, '@'); igual que append pero indice customizado
    .find(''); buscar
    .erase(0, 3); clear pero custom indice
    */




    /* WHILE // si es false, termina.

    char continuar = 's';
    while (continuar == 's' || continuar == 'S') {
        cout << "Ejecutando programa..." << endl;
        cout << "¿Deseas continuar? (s/n): ";
        cin >> continuar;
    }
    cout << "Programa terminado" << endl;
    //

    // DO WHILE  si es false, igual mostrara 1 vez y termina , si es true, sigue.
    int nammber = 10;
    do {
        cout << "Do-while: " << nammber << endl;
    } while (nammber < 5);
    return 0;
}

*/




    // for loop = declarar variable, condicion y por ultimo ejecucion.
    
    for (int i = 0; i <= 10; i++) {
        std::cout << "hola mundo\n";
    }




    // console
    std::cout << sapo << teta << std::endl;

    std::cout << decis << pi << " este es " << x << " ademas es " << mixed << e << std::endl;

    std::cout << (char) 100 << '\n' << codm << std::endl;

    std::cout << chengji << '%';

    std::cout << z;



    return 0;
}