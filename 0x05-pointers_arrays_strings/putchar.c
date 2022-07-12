#include <unistd.h>

/**
 * _putchar - écrit le caractère c à stdout
 * @c : Le personnage à imprimer
 *
 * Retour: Sur le succès 1.
 * on error, -1 is returned, and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
