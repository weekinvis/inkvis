#include <stdio.h>
#include "ferros.h"

/**
 * @brief Metodo que faz o funcionamento como terminal, interpretando linha a linha
 */
void
interpretador_terminal() 
{

}

/**
 * @brief Metodo que le os arquivos e interpreta, como uma grande entrada no terminal
 */
void
interpretador_arquivos(const char * file_paths[])
{
	printf("Ponto de inicio: %s\n", file_paths[0]);
}

/**
 * @brief Funcao principal.
 * @param argc Numero de argumentos passados pela linha de comando
 * @param argv Valor dos argumentos passados pela linha de comando
 * @return 0 Caso Sucesso
 */
int
main(const int argc, const char * argv[])
{
	
	if(argc == 1)
	{
		interpretador_terminal();
	
		return SUCESSO;
	}


	interpretador_arquivos(argv);

	return SUCESSO;
}
