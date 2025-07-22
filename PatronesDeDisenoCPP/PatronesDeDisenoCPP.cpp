#include <iostream>
#include "Personaje.h"
#include "InputHandler.h"

int main()
{
    char tecla;
    Personaje* personaje = new Personaje(20, 20, 10, 10, 10);
    InputHandler inputHandler;

    std::cout << "=======================================\n";
    std::cout << "Bienvenido al Juego (con Patron Command)\n";
    std::cout << "Controles: 'w' = Saltar, 'f' = Disparar\n";
    std::cout << "=======================================\n";

    // Update
    while (true)
    {
        std::cin >> tecla;

        // Pasamos la tecla al InputHandler para obtener un comando
        ICommand* command = inputHandler.handleInput(tecla);

        if (command != nullptr)
        {
            command->execute(*personaje); // El bucle principal no sabe qué acción se ejecuta, solo ejecuta el comando.
        }
        else
        {
            std::cout << "=======================================\n";
            std::cout << "Esa tecla no es valida\n";
            std::cout << "=======================================\n";
        }

        std::cout << "\n\n\n*************Next Frame***********\n";
        tecla = ' ';
    }

    
    delete personaje;
}