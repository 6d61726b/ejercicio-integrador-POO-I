#include "Persona.h"

Persona::Persona(std::string DNI, std::string nombre, std::string apellido, std::string telefono, std::string mail)
{
	this->DNI = DNI;
	this->nombre = nombre;
	this->apellido = apellido;
	this->telefono = telefono;
	this->mail = mail;
}

Persona::Persona(const Persona& persona)
{
	this->DNI = persona.DNI;
	this->nombre = persona.nombre;
	this->apellido = persona.apellido;
	this->telefono = persona.telefono;
	this->mail = persona.mail;
}

Persona::~Persona()
{
}

std::string Persona::nombreCompleto()
{
	return this->nombre + " " + this->apellido;
}