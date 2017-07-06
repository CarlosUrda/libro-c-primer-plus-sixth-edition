
#ifndef __UTILERR__
	#define __UTILERR__


/* Debug */
#define __UTILERR_DEBUG__			1

/* Mensajes de error */
#define UT_PREMENSAJE_ERR			""

/* Códigos de error */
#define UT_OK													0
#define UT_ERR												-1
#define UT_ERR_LECTURA_STDIN					-2
#define UT_ERR_ARGS										-3
#define UT_ERR_COMPROBAR_BUFER_BAJO		-4
#define UT_ERR_LIMPIAR_BUFFER_STDIN		-5

/* Herramientas */
#define PRIMER_ARG(_1, ...)				_1
#define RESTO_ARGS(_1, ...)				__VA_ARGS__


/* Funciones del módulo */
char * strUtilErr_int(int);
char * strUtilErr_void(void);
#define strUtilErr(_1)															\
	_Generic(((int)_1+0.0),	double: strUtilErr_int,		\
													int: strUtilErr_void)(_1)
void printUtilErr_pchar(char *);
void printUtilErr_int_pchar(int, char *);
void printUtilErr_int(int);
#define printUtilErr(...)																			\
	_Generic(																										\
		(PRIMER_ARG(__VA_ARGS__)),																\
		char *:	printUtilErr_pchar,																\
		int: _Generic((PRIMER_ARG(RESTO_ARGS(__VA_ARGS__))+0),			\
									int: printUtilErr_int,											\
									char *: printUtilErr_int_pchar))(__VA_ARGS__)
void setUtilErr(int);
int getUtilErr(void);
void limpiarUtilErr(void);

#endif
