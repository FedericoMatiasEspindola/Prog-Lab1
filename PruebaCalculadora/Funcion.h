
/** \brief Menu Principal
 *
 * \return int Devuelve Menu Principal
 *
 */
int menuPrincipal();

void subMenu(void);

/** \brief Suma de 2 operandos
 *
 * \param float Primer Operando
 * \param float Segundo Operando
 * \return float Devuelve Resultado De La Suma De Los 2 Operandos
 *
 */
float suma(float,float);


/** \brief Resta de 2 Operandos
 *
 * \param float Primer Operando
 * \param float Segundo Operando
 * \return float Devuelve Resultado De La Resta De 2 Operandos
 *
 */
float resta(float,float);


/** \brief Divide 2 Operandos
 *
 * \param float Primer Operando
 * \param float Segundo Operando
 * \return void Devuelve Resultado De La Division De 2 Operandos (En Caso De Dividir Por 0 Devuelve Verificaion De Division Por 0)
 *
 */
float division(float,float);


/** \brief Multiplica 2 Operandos
 *
 * \param float Primer Operando
 * \param float Segundo Operando
 * \return float Devuelve Resultado De La Multiplicacion De 2 Operandos
 *
 */
float multiplicacion(float,float);


/** \brief Aplica Factorial A Un Entero y Verifica Que Sea Mayor De 1
 *
 * \param int Operando Al Que Se Le Aplica Factorial
 * \return unsigned long int Devuelve Resultado de Factorial A (Entero Sin Signo Largo)
 *
 */
unsigned long int factorial(int);


/** \brief Verifica Si Continuar Con 'S' O Salir Con 'N', Vuelve A Pedir En Caso De Cualquier Otra Opcion
 *
 * \param void No Recibe Nada
 * \return char Devuelve 'S' Para Continuar 'N' Para Salir
 *
 */
char verificacionOpcion(void);
