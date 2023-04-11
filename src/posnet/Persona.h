#ifndef PERSONA
#define PERSONA

class Persona
{
	string DNI;
	string nombre;
	string apellido;
	string telefono;
	string mail;

public:
	Persona(string DNI, string nombre, string apellido, string telefono, string mail);
	~Persona();
	string nombreCompleto();
};

#endif