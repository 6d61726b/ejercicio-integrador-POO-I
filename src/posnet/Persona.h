#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
	std::string DNI;
	std::string nombre;
	std::string apellido;
	std::string telefono;
	std::string mail;

public:
	Persona();
	Persona(std::string DNI, std::string nombre, std::string apellido, std::string telefono, std::string mail);
	Persona(const Persona& persona);
	~Persona();
	std::string nombreCompleto();
};

#endif