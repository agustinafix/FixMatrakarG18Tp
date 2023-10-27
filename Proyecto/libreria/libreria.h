#ifndef LIBRERIA_H
#define LIBRERIA_H
#include <stdio.h>
#include <ctime>
enum dias {Lunes = 1, Martes= 2, Miercoles= 3, jueves = 4, viernes = 5 , Sabado = 6 };
struct ListaCLientes{
    *int idClientesTotales;
    int cantidadClientes;
};typedef ListaClientes sListaClientes;

struct Clientes{
    int IdCliente;
    time_t FechaInscripcion;
}; typedef Clientes MisClientes;

struct Cursos{
    int IdCurso;
    //ENUMDIA, ENUMHORARIO;
    int CupoMaximo;
    int CupoActual;
    *Clientes MisClientes;
}; typedef Cursos CursosGym;

struct Gimnasio{
    *Cursos CursosGym;
    int CantidadCursos;
}; typedef Gimnasio MiGimnasio;
//-------------------------------------------------//
struct Inscripcion{
    int IdClase;
    time_t FechaInscripcion;
    *Inscripciones MisInscripciones;
}; typedef Inscripcion MisInscripciones;


struct Clases{
    int IdCliente;
    int CantidadInscripciones;
    *Inscripciones MisInscripciones;
};



};

#endif // LIBRERIA_H

#endif // LIBRERIA_H
