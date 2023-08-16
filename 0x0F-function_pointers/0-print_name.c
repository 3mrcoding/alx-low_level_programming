
/**
 * print_name - function that points to two functions
 *
 * @name: name wanted to be printed
 * @f: pointer to the required function to be called
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
