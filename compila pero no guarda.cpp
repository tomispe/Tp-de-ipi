#include<iostream>
#include<cstdlib>
using namespace std;


// Declaramos las estructuras para crear los arreglos


struct A_categoria{

    int codigo_categoria;
    string descripcion;

};

struct A_prestamo{

    int categoria;
    int prestatario;
    string descripcion;
    bool estado;

};

struct A_prestatario{

    int codigo_prestatario;
    string apellido;
    string nombres;
};



// Declaramos las estructuras para guardar los arreglos y sus dimensiones

const int DIM_FISICA = 600;  //constante inicializada en 600 para las estructuras

struct categorias{

    A_categoria categoria[DIM_FISICA];
    int DIM_LOGICA {0};

};


struct prestamos{

    A_prestamo prestamo[DIM_FISICA];
    int DIM_LOGICA {0};
};


struct prestatarios{

    A_prestatario prestatario[DIM_FISICA];
    int DIM_LOGICA {0};
};


//FUNCIONES        ******SUBMENU 1*******

/*
Proposito: agregar categorias al struct catecoria1
Retorno: VOID
*/
void agregar_categoria(int codigo, string descripcion, int dl){
    //Inserta elementos(codigo_categoria, descripcion)
    if(dl<DIM_FISICA){
        system("cls||clear");
        cout<<"Ingrese el codigo de la categoria: "<<flush;
        cin >> codigo;
        cout<<"Ingrese una descripcion de la categoria: "<<flush;
        cin >> descripcion;
        dl++;
        cout<<"La categoria se agrego correctamente"<<endl;
    }
    else
        cout<<"No se puede agregar mas categorias(limite alcanzado)"<<endl;

}

/*
Proposito: modificar categorias creadas
Retorno VOID
*/
void modificar_categoria(){
    //Muetra las categorias iterando sobre ellas y el usuario elije cual modificar segun el codigo de categoria

}

//Porposito: eliminar categorias
//Retorno VOID
void eliminar_categoria(){
    //Muetra las categorias iterando sobre ellas y el usuario elije cual eliminar segun el codigo de categoria
    //Se le pedira una confirmacion antes de eliminarlo
}

//Proposito agregar prestatario
//Retorno VOID
void agregar_prestatario(){
    //Inserta elementos(codigo_prestatario, apellidos, nombres)
}

//Proposito: modificar prestatario
//retorno VOID
void modificar_prestatario(){
    //Es la opcion para modificar a un prestatario del sistema
}

//Proposito: eliminar prestatario
//retorno VOID
void eliminar_prestatario(){
    //Es la opcion para remover a un prestatrio del sistema
    //Se le pedira confirmacionn para eliminar al prestatario
}

// ******SUBMENU 2*******

//Proposito: agregar un prestamo
//retorno VOID
void agregar_prestamo(){
    //agregar un prestamo
}
//Proposito: Modificar un prestamo
//Retorno VOID
void modificar_prestamo(){
    //modificar un prestamo por algun error
}
//Proposito: Eliminar prestamo
//Retorno VOID
void eliminar_prestamo(){
    //Eliminar un prestramo por cancelacion o algun otro motivo
}
//Proposito: devolver prestamo
//Retorno VIOD
void devolver_prestamo(){
    //devolver prestamo ...................................................................
}

//  ******SUBMENU 3*******

//Proposito: Cantidad de objetos prestados por categoria
//Retorno VOID
void cantidad_de_objetos_prestados_por_categoria(){
    //Contar las cantidades de objetos prestados segun la categoria que elija
}
//Proposito: Listado de prestamos por categoria
//Retorno VOID
void listado_de_prestamos_por_categoria(){
    //Muesta la lista de prestamos por categoria que se elija
}
//Proposito: listado_de_prestamos_ordenados_por_categoria_o_prestatario
//Retorno VOID
void listado_de_prestamos_ordenados_por_categoria_o_prestatario(){
    //muestra un listado ordenado de los prestamos ordenados por categoria o por prestatario
}
//Proposito: Listar todos los prestatarios que tienen al menos un objeto prestado
//Proposito VOID
void listar_todos_los_prestatarios_que_tienen_al_menos_un_objeto_prestado(){
    //Muestra una lista de todos los prestatarios que tienen al menos un objeto prestado
}

void intentar_de_nuevo(){
    system ("cls||clear");
    cin.ignore();
    cout<<"\t***Opcion invalida***"<<endl;
    cout<<"Presione ENTER para intentarlo de vuelta";
    cin.get();
    system("cls||clear");
}

// SUBMENU 1
int submenu_1(char opcion){
    cout<<"Elija una opcion: "; cin >> opcion;
    while(opcion != '0'){
        switch(opcion){

            case '1':
                agregar_categoria(A_categoria().codigo_categoria, A_categoria().descripcion, categorias().DIM_LOGICA);
                break;
            case '2':
                modificar_categoria();
                break;
            case '3':
                eliminar_categoria();
                break;
            case '4':
                agregar_prestatario();
                break;
            case '5':
                modificar_prestatario();
                break;
            case '6':
                eliminar_prestatario();
                break;
            case '0':
                break;
            default:
                intentar_de_nuevo();
                break;
        }
        cout<<"\tAdministrar y consultar Categorias y Prestatarios."<<endl<<endl;
        cout<<"1. Agregar categoria"<<endl;
        cout<<"2. Modificar categoria"<<endl;
        cout<<"3. Eliminar categoria"<<endl;
        cout<<"4. Agregar prestatario"<<endl;
        cout<<"5. Modificar prestatario"<<endl;
        cout<<"6. Eliminar prestatario"<<endl;
        cout<<"0. Volver"<<endl<<endl;

        cout<<"Elija una opcion: "; cin >> opcion;
    }
    system("cls||clear");
    return 0;
}

// SUBMENU 2
int submenu_2(char opcion){
    cout<<"Elija una opcion: "; cin >> opcion;
    while(opcion != '0'){
        switch(opcion){

            case '1': agregar_prestamo();
                break;
            case '2': modificar_prestamo();
                break;
            case '3': eliminar_prestamo();
                break;
            case '4': devolver_prestamo();
                break;
            case '0':
                break;
            default:
                intentar_de_nuevo();
                break;
        }
        cout<<"\tAdministrar Prestamos"<<endl<<endl;
        cout<<"1. Agregar prestamo"<<endl;
        cout<<"2. Modificar prestamo"<<endl;
        cout<<"3. Eliminar prestamo"<<endl;
        cout<<"4. Devolver prestamo"<<endl;
        cout<<"0. Volver"<<endl<<endl;

        cout<<"Elija una opcion: "; cin >> opcion;
    }
    system("cls||clear");
    return 0;
}

// SUBMENU 3
int submenu_3(char opcion){
    cout<<"Elija una opcion: "; cin >> opcion;
    while(opcion != '0'){
        switch(opcion){

            case '1': cantidad_de_objetos_prestados_por_categoria();
                break;
            case '2': listado_de_prestamos_por_categoria();
                break;
            case '3': listado_de_prestamos_ordenados_por_categoria_o_prestatario();
                break;
            case '4': listar_todos_los_prestatarios_que_tienen_al_menos_un_objeto_prestado ();
                break;
            case '0':
                break;
            default:
                intentar_de_nuevo();
                break;
        }
        cout<<"\tConsultar Prestamos"<<endl<<endl;
        cout<<"1. Cantidad de objetos prestados por categoria"<<endl;
        cout<<"2. Listado de prestamos por categoria"<<endl;
        cout<<"3. Listado de prestamos ordenados por categoria o prestatario"<<endl;
        cout<<"4. Listar todos los prestatarios que tienen al menos un objeto prestado"<<endl;
        cout<<"0. Volver"<<endl<<endl;

        cout<<"Elija una opcion: "; cin >> opcion;
    }
    system("cls||clear");
    return 0;
}

int main(){

    //Inicializacion de variables
    char opcion = 0;

    //Declaracion de variables
    categorias categoria;
    prestamos prestamo;
    prestatarios prestario;


                    //MENU PRINCIPAL
    while(opcion != '9'){

        cout<<"\tBienvenido al Consultor de Prestamos."<<endl;
        cout<<"1. Administrar y consultar Categorias y Prestatarios"<<endl;
        cout<<"2. Administrar Prestamos"<<endl;
        cout<<"3. Consultar Prestamos"<<endl;
        cout<<"9. Salir"<<endl<<endl;

        cout<<"Elija una opcion: "; cin >> opcion;

        switch(opcion)
        {
            case '1':       //SUBMENU 1
            system ("cls||clear");
                cout<<"\tAdministrar y consultar Categorias y Prestatarios."<<endl<<endl;
                cout<<"1. Agregar categoria"<<endl;
                cout<<"2. Modificar categoria"<<endl;
                cout<<"3. Eliminar categoria"<<endl;
                cout<<"4. Agregar prestatario"<<endl;
                cout<<"5. Modificar prestatario"<<endl;
                cout<<"6. Eliminar prestatario"<<endl;
                cout<<"0. Volver"<<endl<<endl;

                submenu_1(opcion); //llama a la funcion para elejir que hacer en el submenu 1

                break;
            case '2':       //SUBMENU 2
            system ("cls||clear");
                cout<<"\tAdministrar Prestamos"<<endl<<endl;
                cout<<"1. Agregar prestamo"<<endl;
                cout<<"2. Modificar prestamo"<<endl;
                cout<<"3. Eliminar prestamo"<<endl;
                cout<<"4. Devolver prestamo"<<endl;
                cout<<"0. Volver"<<endl<<endl;

                submenu_2(opcion); //llama a la funcion para elejir que hacer en el submenu 2

                break;
            case '3':       //SUBMENU 3
            system ("cls||clear");
                cout<<"\tConsultar Prestamos"<<endl<<endl;
                cout<<"1. Cantidad de objetos prestados por categoria"<<endl;
                cout<<"2. Listado de prestamos por categoria"<<endl;
                cout<<"3. Listado de prestamos ordenados por categoria o prestatario"<<endl;
                cout<<"4. Listar todos los prestatarios que tienen al menos un objeto prestado"<<endl;
                cout<<"0. Volver"<<endl<<endl;

                submenu_3(opcion); //llama a la funcion para elejir que hacer en el submenu 3

                break;
            case '9':
                break;
            default:        //En caso de no elejir una opcion disponible
                intentar_de_nuevo();
                break;
        }

    }
    system("cls||clear");
    return 0;
}
