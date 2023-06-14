#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - A function that prints bytes information
 * @p: python
 * Return: no return.
 */
void print_python_bytes(PyObject *p)
{
	char *str;
	long int s, j, limit;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	s = ((PyVarObject *)(p))->ob_size;
	str = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", s);
	printf("  trying string: %s\n", str);

	if (s >= 10)
		limit = 10;
	else
		limit = s + 1;

	printf("  first %ld bytes:", limit);

	for (j = 0; j < limit; j++)
		if (str[j] >= 0)
			printf(" %02x", str[j]);
		else
			printf(" %02x", 256 + str[j]);

	printf("\n");
}

/**
 * print_python_list - A function that prints list information
 * @p: python
 * Return: no return
 */
void print_python_list(PyObject *p)
{
	long int s, j;
	PyListObject *list;
	PyObject *obj;

	s = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", s);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (j = 0; j < size; j++)
	{
		obj = ((PyListObject *)p)->ob_item[j];
		printf("Element %ld: %s\n", j, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}
}
