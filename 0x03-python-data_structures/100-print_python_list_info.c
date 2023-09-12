#include <Python.h>

/**
<<<<<<< HEAD
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
	int size, alloc, i;
	PyObject *obj;

	size = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);

		obj = PyList_GetItem(p, i);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
=======
 *  * print_python_list_info - Prints basic info about Python lists.
 *   * @p: A PyObject list.
 *    */
void print_python_list_info(PyObject *p)
{
		int size, alloc, i;
			PyObject *obj;

				size = Py_SIZE(p);
					alloc = ((PyListObject *)p)->allocated;

						printf("[*] Size of the Python List = %d\n", size);
							printf("[*] Allocated = %d\n", alloc);

								for (i = 0; i < size; i++)
										{
													printf("Element %d: ", i);

															obj = PyList_GetItem(p, i);
																	printf("%s\n", Py_TYPE(obj)->tp_name);
																		}
>>>>>>> e4cd99aeaf9fef6a5f87f6b631aff85ca09d197a
}

