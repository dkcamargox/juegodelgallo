#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct{
	char situacao;
	char data[20];
}Jogada;
typedef struct{
	char nome[10];
	char datahora_uj[20];
	int n_vitorias;
	int n_derrotas;
	int n_empates;
	int pontuacao; // vitorias - derrotas
	Jogada *jogadas;
	int n_jogadas;
	
}Jogador;
void exibe_tab( char tab[][3] )
{
	int cont1;
	int cont2;
	for(cont1 = 0 ; cont1 < 3 ;  cont1++)//exibe tabuleiro
	{
		for(cont2 = 0 ; cont2 < 3 ; cont2++)
		{
			printf("[%c] " , tab[cont1][cont2]);
		}
		printf("\n");
	}
}
int testa_ganhou(char tab[][3]) //1 = ganhou
{
	int cont1;
	int cont2;
	if(tab[0][0] == tab[0][1] && tab[0][1] == tab[0][2])
	{
		return(1);
	}
	if(tab[1][0] == tab[1][1] && tab[1][1] == tab[1][2])
	{
		return(1);
	}
	if(tab[2][0] == tab[2][1] && tab[2][1] == tab[2][2])
	{
		return(1);
	}
	
	if(tab[0][0] == tab[1][0] && tab[0][0] == tab[2][0])
	{
		return(1);
	}
	if(tab[0][1] == tab[1][1] && tab[0][1] == tab[2][1])
	{
		return(1);
	}
	if(tab[0][2] == tab[1][2] && tab[0][2] == tab[2][2])
	{
		return(1);
	}
	
	if(tab[0][0] == tab[1][1] && tab[0][0] == tab[2][2])
	{
		return(1);
	}
	if(tab[2][0] == tab[1][1] && tab[2][0] == tab[0][2])
	{
		return(1);
	}
}
int juego_del_gallo()
{
	char tabuleiro[3][3] = {{'A' , 'B' , 'C' }, {'D' , 'E' , 'F'} , {'G' , 'H' , 'I'}};
	int cont1;
	int cont2;
	char jogador1 = 'X';
	char jogador2 = 'O';
	char jogada;
	int jogadavalida1 = 0;
	int jogadavalida2 = 0;
	int cont_j = 0 ;
	
	//jogador 1 começa jogando sempre
	
	exibe_tab(tabuleiro);
	while(cont_j < 8)
	{
		while(!jogadavalida1)
		{
			printf("\njogador1: insira sua jogada:\n");
			fflush(stdin);
			scanf("%c" , &jogada);
			switch(toupper(jogada))
			{
				case 'A':
					if ( tabuleiro[0][0] != 'X' && tabuleiro[0][0] != 'O' )
					{
						tabuleiro[0][0] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				case 'B':
					if ( tabuleiro[0][1] != 'X' && tabuleiro[0][1] != 'O' )
					{
						tabuleiro[0][1] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				case 'C':
					if ( tabuleiro[0][2] != 'X' && tabuleiro[0][2] != 'O' )
					{
						tabuleiro[0][2] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				case 'D':
					if ( tabuleiro[1][0] != 'X' && tabuleiro[1][0] != 'O' )
					{
						tabuleiro[1][0] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				case 'E':
					if ( tabuleiro[1][1] != 'X' && tabuleiro[1][1] != 'O' )
					{
						tabuleiro[1][1] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				case 'F':
					if ( tabuleiro[1][2] != 'X' && tabuleiro[1][2] != 'O' )
					{
						tabuleiro[1][2] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				case 'G':
					if ( tabuleiro[2][0] != 'X' && tabuleiro[2][0] != 'O' )
					{
						tabuleiro[2][0] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				case 'H':
					if ( tabuleiro[2][1] != 'X' && tabuleiro[2][1] != 'O' )
					{
						tabuleiro[2][1] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				case 'I':
					if ( tabuleiro[2][2] != 'X' && tabuleiro[2][2] != 'O' )
					{
						tabuleiro[2][2] = jogador1;
						jogadavalida1 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida1 = 0;
					}
					break;
				default:
					printf("jogada invalida\n");
					getch();
					jogadavalida1 = 0;
			}
			system("cls");
			exibe_tab(tabuleiro);
			
			
			if(testa_ganhou(tabuleiro) ==1)
			{
				printf("\njogador1 ganhou");
				getch();
				system("cls");
				return(1);
				
			}
		}
		jogadavalida1 = 0;
		while(!jogadavalida2 )
		{
			printf("\njogador2: insira sua jogada:\n");
			fflush(stdin);
			scanf("%c" , &jogada);
			switch(toupper(jogada))
			{
				case 'A':
					if ( tabuleiro[0][0] != 'X' && tabuleiro[0][0] != 'O' )
					{
						tabuleiro[0][0] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				case 'B':
					if ( tabuleiro[0][1] != 'X' && tabuleiro[0][1] != 'O' )
					{
						tabuleiro[0][1] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				case 'C':
					if ( tabuleiro[0][2] != 'X' && tabuleiro[0][2] != 'O' )
					{
						tabuleiro[0][2] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				case 'D':
					if ( tabuleiro[1][0] != 'X' && tabuleiro[1][0] != 'O' )
					{
						tabuleiro[1][0] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				case 'E':
					if ( tabuleiro[1][1] != 'X' && tabuleiro[1][1] != 'O' )
					{
						tabuleiro[1][1] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				case 'F':
					if ( tabuleiro[1][2] != 'X' && tabuleiro[1][2] != 'O' )
					{
						tabuleiro[1][2] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				case 'G':
					if ( tabuleiro[2][0] != 'X' && tabuleiro[2][0] != 'O' )
					{
						tabuleiro[2][0] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				case 'H':
					if ( tabuleiro[2][1] != 'X' && tabuleiro[2][1] != 'O' )
					{
						tabuleiro[2][1] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				case 'I':
					if ( tabuleiro[2][2] != 'X' && tabuleiro[2][2] != 'O' )
					{
						tabuleiro[2][2] = jogador2;
						jogadavalida2 = 1;
						cont_j++;
					}
					else
					{
						printf("jogada invalida\n");
						getch();
						jogadavalida2 = 0;
					}
					break;
				default:
					printf("jogada invalida\n");
					getch();
					jogadavalida2 = 0;
			}
			system("cls");
			exibe_tab(tabuleiro);
			
			if(testa_ganhou(tabuleiro) == 1)
			{
				printf("\njogador2 ganhou");
				getch();
				system("cls");
				return 2;
			}
		}
		jogadavalida2 = 0;
	}
	printf("\ndeu velha");
	getch();
	system("cls");
	return 0;
}
int testa_cadastrado(Jogador *jogadores , int njgds , char nom[] )
{
	int cont;

	for( cont = 0 ; cont < njgds ; cont++)
	{
		if(!strcmp(nom , (jogadores)[cont].nome))
		{
			
			return(cont);
		}
	}
	return(-1);
}
void organiza_top10( int top10[] , int njgds , Jogador **jgds )
{
	int vetor[njgds];
	int cont;
	int cont1, cont2;
	int aux;
	int aux2;
	for( cont = 0 ; cont < njgds ; cont++)
	{
		vetor[cont] = (*jgds)[cont].pontuacao;
		top10[cont] = cont; 
	}
	
	for(cont1 = 0; cont1 < njgds; cont1++)
	{
    	for(cont2 = 0; cont2 < njgds; cont2++)
    	{
    	    if(vetor[cont1] > vetor[cont2])
    	    {
    	        aux = vetor[cont1];
    	        aux2 = top10[cont1];
    	        
    	        vetor[cont1] = vetor[cont2];
    	        top10[cont1] = top10[cont2];
    	        
    	        
				vetor[cont2] = aux;
    	        top10[cont2] = aux2;
    	        
    	    }
    	}
    }
    
    
}
int login( Jogador **jogadores , int njgds )
{
	int cont;
	char aux_nom[5];
	printf("insira as suas iniciais:\n");
	fflush(stdin);
	gets(aux_nom);
	for( cont = 0 ; cont < njgds ; cont++)
	{
		if(!strcmp(aux_nom , (*jogadores)[cont].nome))
		{
			return(cont);
		}
	}
	return(-1);
}
int cadastro( Jogador **jogadores , int njgds)
{
	int cont;
	int cadastrado;
	char aux_nome[10];
	if( njgds == 0 )
	{
		*jogadores = (Jogador*) calloc((njgds+1) , sizeof(Jogador)); //alocando o vetor de jogadores
		if( *jogadores == NULL)
			{	exit(3);	}
	}
	else
	{
		*jogadores = (Jogador*) realloc( *jogadores , (njgds+1) * sizeof(Jogador) );// realocamaos o bagulho 
		if( jogadores == NULL)
			{	exit(2);	}
	}
	
	printf("insira suas iniciais:\n");
	fflush(stdin);
	gets(aux_nome);
	cadastrado = testa_cadastrado(*jogadores , njgds , aux_nome);
	if(cadastrado>=0)
	{
		printf("jogador ja cadastrado");
		getch();
		system("cls");
		return(0);
	}
	else
	{
		strcpy((*jogadores)[njgds].nome , aux_nome);
		strcpy((*jogadores)[njgds].datahora_uj , __DATE__);
		(*jogadores)[njgds].n_vitorias = 0;
		(*jogadores)[njgds].n_derrotas = 0;
		(*jogadores)[njgds].n_empates = 0;
		(*jogadores)[njgds].pontuacao = (*jogadores)[njgds].n_vitorias - (*jogadores)[njgds].n_derrotas;
		(*jogadores)[njgds].n_jogadas = 0;
		system("cls");
		return(1);
	}
	
}
int menu()
{
	int c;
	printf("\t\tEL JUEGO DEL GALLO\n\n");
	printf("\t1 - cadastro\n"); //ok
	printf("\t2 - jogar\n"); // login fica aqui
	printf("\t3 - historico\n");
	printf("\t4 - ranking\n");
	printf("\t0 - sair\n");
	
	
	scanf("%d" , &c );
	system("cls");
	return c;
	
}
int main()
{
	Jogador *jogadores;
	Jogador *jg1 , *jg2;
	FILE *arquivo_jogadores;
	FILE *historico_jg;
	char aux_str_hist_arq[10];
	int *top10;
	int njg_cadastrados;
	int vazio;
	int cont;
	char dia[20];
	char mes[20];
	char ano[20];
	int pos1 , pos2;
	char aux_info_jogador[200];
	char aux_info_hist[100];
	char aux_str_top10[100];
	int ganhador;
	int cont2;
	int vazio_hist;
	char contrabarran;
	int jg_escolhido;
	/*pedro passei todas as informações do arquivo para um vetor de struct, achei mais facil de fazer assim, e não precisa manipular o arquivo toda hora
	assim a gente só abre ele e depois salva a coisa fica mais simples */	
	top10 = (int*) calloc( 10 , sizeof(int));	
	arquivo_jogadores = fopen("arquivo_jogadores.txt" , "at+");
	if(arquivo_jogadores == NULL)
	{	exit(2);	}
	fseek(arquivo_jogadores , 0, SEEK_END); //isso aqui ve se o bagulho ta vazio
    vazio = ftell(arquivo_jogadores);
    if( vazio == 0 )
	{
		fputs( "0" ,arquivo_jogadores );//isso é pra quando não tiver porra nenhuma no arquivo
	}
	else
	{
		rewind(arquivo_jogadores);	//vai pro inico do arquivo
		fscanf(arquivo_jogadores , "%d" , &njg_cadastrados);	//le o numero de jogadores do arquivo
		if(njg_cadastrados != 0 )
		{
			jogadores = (Jogador*) calloc(njg_cadastrados , sizeof(Jogador)); //alocando o vetor de jogadores
			if( jogadores == NULL)
			{	exit(3);	}
			fseek(arquivo_jogadores , sizeof(char)+2 , 0 );	//seta o cursor para pular a leitura do numero de jogadores
			/*por ser somente a primeira linha eu fiz com que o primeiro a ser lido pule essa coisa, ai os outros vão seguir linearmente as informações
			uma embaixo da outra, sacada de genio né ? */
			fscanf( arquivo_jogadores , "%s" , &jogadores[0].nome );			
			if(jogadores[0].nome[(strlen(jogadores[0].nome) - 1)] == '\n')//tirar o contrabarra n pra coisa não se escafude
			{
				jogadores[0].nome[(strlen(jogadores[0].nome) - 1)] = '\0';
			}
			fscanf(arquivo_jogadores , "%s %s %s"  , &mes , &dia , &ano);
			if(dia[(strlen(dia) - 1)] == '\n')
			{
				dia[(strlen(dia) - 1)] == '\0';//tirar o contrabarra n pra coisa não se escafude (dnv)
			}	
			if(mes[(strlen(mes) - 1)] == '\n')
			{
				mes[(strlen(mes) - 1)] == '\0';//tirar o contrabarra n pra coisa não se escafude (dnv)
			}	
			if(ano[(strlen(ano) - 1)] == '\n')
			{
				ano[(strlen(ano) - 1)] == '\0';//tirar o contrabarra n pra coisa não se escafude (dnv)
			}			
			sprintf( jogadores[0].datahora_uj , "%s %s %s" , mes , dia , ano);			
			fscanf( arquivo_jogadores , "%d" , &jogadores[0].n_vitorias);
			fscanf( arquivo_jogadores , "%d" , &jogadores[0].n_derrotas);			
			fscanf( arquivo_jogadores , "%d" , &jogadores[0].n_empates);			
			fscanf( arquivo_jogadores , "%d" , &(jogadores)[0].pontuacao );			
			fscanf( arquivo_jogadores , "%d" , &jogadores[0].n_jogadas );			
			sprintf(aux_str_hist_arq , "%s_hist.txt" , jogadores[0].nome);
			historico_jg = fopen(aux_str_hist_arq , "at+"); //abriu o historico
			if(historico_jg == NULL)
			{	exit(2);	}
			fseek(historico_jg , 0, SEEK_END); //isso aqui ve se o bagulho ta vazio
		    vazio = ftell(historico_jg);
		    if( vazio == 0 )
			{
				fputs( "0" , historico_jg );//isso é pra quando não tiver porra nenhuma no arquivo
			}
			else
			{
				rewind(historico_jg);	
				fscanf(historico_jg , "%d" , &jogadores[0].n_jogadas);
				fscanf(historico_jg , "%c"  , &contrabarran);
				if(jogadores[0].n_jogadas != 0 )
				{
					jogadores[0].jogadas = (Jogada*) calloc(jogadores[0].n_jogadas , sizeof(Jogada));
					if( jogadores == NULL)
					{	exit(3);	}
					fseek(historico_jg , sizeof(char)+2 , 0 );
					fscanf(historico_jg , "%c" , &jogadores[0].jogadas[0].situacao);
					fscanf(historico_jg , "%c"  , &contrabarran);
					fgets( jogadores[0].jogadas[0].data , 20 , historico_jg);
					if(jogadores[0].jogadas[0].data[(strlen(jogadores[0].jogadas[0].data)-1)] == '\n' )
					{
						jogadores[0].jogadas[0].data[(strlen(jogadores[0].jogadas[0].data)-1)] = '\0';
					}
					for ( cont2 = 1 ; cont2 < jogadores[0].n_jogadas ; cont2++)
					{
						fscanf(historico_jg , "%c" , &jogadores[0].jogadas[cont2].situacao);
						fscanf(historico_jg , "%c"  , &contrabarran);
						fgets( jogadores[0].jogadas[cont2].data , 20 , historico_jg);
						if(jogadores[0].jogadas[cont2].data[(strlen(jogadores[0].jogadas[cont2].data)-1)] == '\n' )
						{
							jogadores[0].jogadas[cont2].data[(strlen(jogadores[0].jogadas[cont2].data)-1)] = '\0';
						}
					}	
				}
			}
			fclose(historico_jg);


			for(cont = 1 ; cont<njg_cadastrados ; cont++)	//aqui a coisa fica mais dinamica, eu fiz ele ler quantos jogadores tiver informando no arquivo que existem, demorei umas 2 hrs pra pensar em como fazer isso huashuah
			{
				fscanf( arquivo_jogadores , "%s" , &jogadores[cont].nome );
				if(jogadores[cont].nome[(strlen(jogadores[cont].nome) - 1)] == '\n')
				{
					jogadores[cont].nome[(strlen(jogadores[cont].nome) - 1)] == '\0';//tirar o contrabarra n pra coisa não se escafude (dnv)
				}					
				fscanf(arquivo_jogadores , "%s %s %s"  , &mes , &dia , &ano);
				if(dia[(strlen(dia) - 1)] == '\n')
				{
					dia[(strlen(dia) - 1)] == '\0';//tirar o contrabarra n pra coisa não se escafude (dnv)
				}	
				if(mes[(strlen(mes) - 1)] == '\n')
				{
					mes[(strlen(mes) - 1)] == '\0';//tirar o contrabarra n pra coisa não se escafude (dnv)
				}	
				if(ano[(strlen(ano) - 1)] == '\n')
				{
					ano[(strlen(ano) - 1)] == '\0';//tirar o contrabarra n pra coisa não se escafude (dnv)
				}
				sprintf( jogadores[cont].datahora_uj , "%s %s %s" , mes , dia , ano);				
				fscanf( arquivo_jogadores , "%d" , &jogadores[cont].n_vitorias);				
				fscanf( arquivo_jogadores , "%d" , &jogadores[cont].n_derrotas);				
				fscanf( arquivo_jogadores , "%d" , &jogadores[cont].n_empates);				
				fscanf( arquivo_jogadores , "%d" , &(jogadores)[cont].pontuacao );				
				fscanf( arquivo_jogadores , "%d" , &jogadores[cont].n_jogadas );
				sprintf(aux_str_hist_arq , "%s_hist.txt" , jogadores[cont].nome);
				historico_jg = fopen(aux_str_hist_arq , "at+"); //abriu o historico
				if(historico_jg == NULL)
				{	exit(2);	}
				fseek(historico_jg , 0, SEEK_END); //isso aqui ve se o bagulho ta vazio
			    vazio = ftell(historico_jg);
			    if( vazio == 0 )
				{
					fputs( "0" , historico_jg );//isso é pra quando não tiver porra nenhuma no arquivo
				}
				else
				{
					rewind(historico_jg);	
					fscanf(historico_jg , "%d" , &jogadores[cont].n_jogadas);
					fscanf(historico_jg , "%c"  , &contrabarran);
					if(jogadores[cont].n_jogadas != 0 )
					{
						jogadores[cont].jogadas = (Jogada*) calloc(jogadores[cont].n_jogadas , sizeof(Jogada));
						if( jogadores == NULL)
						{	exit(3);	}
						fseek(historico_jg , sizeof(char)+2 , 0 );
						fscanf(historico_jg , "%c" , &jogadores[cont].jogadas[0].situacao);
						fscanf(historico_jg , "%c"  , &contrabarran);
						fgets( jogadores[cont].jogadas[0].data , 20 , historico_jg);
						if(jogadores[cont].jogadas[0].data[(strlen(jogadores[cont].jogadas[0].data)-1)] == '\n' )
						{
							jogadores[cont].jogadas[0].data[(strlen(jogadores[cont].jogadas[0].data)-1)] = '\0';
						}
						for ( cont2 = 1 ; cont2 < jogadores[cont].n_jogadas ; cont2++)
						{
							fscanf(historico_jg , "%c" , &jogadores[cont].jogadas[cont2].situacao);
							fscanf(historico_jg , "%c"  , &contrabarran);
							fgets( jogadores[cont].jogadas[cont2].data , 20 , historico_jg);
							if(jogadores[cont].jogadas[cont2].data[(strlen(jogadores[cont].jogadas[cont2].data)-1)] == '\n' )
							{
								jogadores[cont].jogadas[cont2].data[(strlen(jogadores[cont].jogadas[cont2].data)-1)] = '\0';
							}
						}	
					}
				}
				fclose(historico_jg);	
			}
		}
	}
	fclose(arquivo_jogadores); //fecho o arquivo
	int c = menu();//menuzinho padrão
	while(1) //laço infinito kkj 
	{
		if(c == 1)
		{
			njg_cadastrados = (njg_cadastrados + cadastro(&jogadores , njg_cadastrados)); //essa função retorna 1, então se tudo der certo no cadastro vai contar mais um jogador
			c = menu();
		}
		else if ( c == 2 )
		{
			if (njg_cadastrados>=2)
			{
				/*aqui a gente ta logando os jogadores, para que a gente possa mexer só neles*/
				printf("jogador1:\n");
				pos1 = login(&jogadores , njg_cadastrados); //retorna -1 se não tem jogador com o mesmo nome cadastrado
				while(pos1<0)
				{
					printf("jogador invalido ou nao cadastrado\n");
					pos1 = login(&jogadores , njg_cadastrados);
				}
				
				jg1 = &jogadores[pos1];	//jg1 aponta para esse jogador, no caso se alterarmos ko jg1 alteramos o jogadores[pos1]
				printf("name:%s\nultimo acesso:%s\n" , (*jg1).nome , (*jg1).datahora_uj );
				getch();
				system("cls");
				printf("jogador2:\n");
				pos2 = login(&jogadores , njg_cadastrados);
				while(pos1 == pos2 || pos2 < 0)
				{
					printf("jogador invalido ou nao cadastrado\n");
					pos2 = login(&jogadores , njg_cadastrados);
				}
				jg2 = &jogadores[pos2];
				printf("name:%s\nultimo acesso:%s\n" , (*jg2).nome , (*jg2).datahora_uj );
				getch();
				system("cls");	
				ganhador = juego_del_gallo(); //retorna 1 para jogador 1 ; retorna 2 para jogador 2 ; retorna 0 para empate ;
				switch( ganhador )
				{
					case 0:
						(*jg1).n_empates++;
						(*jg2).n_empates++;
						if( (*jg1).n_jogadas == 0 )
						{
							(*jg1).jogadas = (Jogada*) calloc(((*jg1).n_jogadas+1) , sizeof(Jogada)); //alocando o vetor de jogadores
							if( (*jg1).jogadas == NULL)
							{	exit(3);	}
						}
						else
						{
							
							(*jg1).jogadas = (Jogada*) realloc( (*jg1).jogadas, ((*jg1).n_jogadas+1) * sizeof(Jogada)); //REalocando o vetor de jogadores
							if( (*jg1).jogadas == NULL)
							{	exit(3);	}
						}
						if( (*jg2).n_jogadas == 0 )
						{
							(*jg2).jogadas = (Jogada*) calloc(((*jg2).n_jogadas+1) , sizeof(Jogada)); //alocando o vetor de jogadores
							if( (*jg2).jogadas == NULL)
							{	exit(3);	}
						}
						else
						{
							(*jg2).jogadas = (Jogada*) realloc( (*jg2).jogadas, ((*jg2).n_jogadas+1) * sizeof(Jogada)); //REalocando o vetor de jogadores
							if( (*jg2).jogadas == NULL)
							{	exit(3);	}
						}
						
						(*jg1).jogadas[(*jg1).n_jogadas].situacao = 'e';
						strcpy(((*jg1).jogadas[(*jg1).n_jogadas].data) , __DATE__);
						if(((*jg1).jogadas[(*jg1).n_jogadas].data)[(strlen(((*jg1).jogadas[(*jg1).n_jogadas].data)) - 1 )] == '\n' )
						{
							((*jg1).jogadas[(*jg1).n_jogadas].data)[(strlen(((*jg1).jogadas[(*jg1).n_jogadas].data)) - 1 )] = '\0';
						}
						(*jg2).jogadas[(*jg2).n_jogadas].situacao = 'e';
						strcpy(((*jg2).jogadas[(*jg2).n_jogadas].data) , __DATE__);
						if(((*jg2).jogadas[(*jg2).n_jogadas].data)[(strlen(((*jg2).jogadas[(*jg2).n_jogadas].data)) - 1 )] == '\n' )
						{
							((*jg2).jogadas[(*jg2).n_jogadas].data)[(strlen(((*jg2).jogadas[(*jg2).n_jogadas].data)) - 1 )] = '\0';
						}
						(*jg1).n_jogadas++;
						(*jg2).n_jogadas++;
						break;

					case 1:
						(*jg1).n_vitorias++;
						(*jg2).n_derrotas++;
						if( (*jg1).n_jogadas == 0 )
						{
							(*jg1).jogadas = (Jogada*) calloc(((*jg1).n_jogadas+1) , sizeof(Jogada)); //alocando o vetor de jogadores
							if( (*jg1).jogadas == NULL)
							{	exit(3);	}
						}
						else
						{
							(*jg1).jogadas = (Jogada*) realloc( (*jg1).jogadas, ((*jg1).n_jogadas+1) * sizeof(Jogada)); //REalocando o vetor de jogadores
							if( (*jg1).jogadas == NULL)
							{	exit(3);	}
						}
						if( (*jg2).n_jogadas == 0 )
						{
							(*jg2).jogadas = (Jogada*) calloc(((*jg2).n_jogadas+1) , sizeof(Jogada)); //alocando o vetor de jogadores
							if( (*jg2).jogadas == NULL)
							{	exit(3);	}
						}
						else
						{
							
							(*jg2).jogadas = (Jogada*) realloc( (*jg2).jogadas, ((*jg2).n_jogadas+1) * sizeof(Jogada)); //REalocando o vetor de jogadores
							if( (*jg2).jogadas == NULL)
							{	exit(3);	}
						}
						(*jg1).jogadas[(*jg1).n_jogadas].situacao = 'v';
						strcpy(((*jg1).jogadas[(*jg1).n_jogadas].data) , __DATE__);
						if(((*jg1).jogadas[(*jg1).n_jogadas].data)[(strlen(((*jg1).jogadas[(*jg1).n_jogadas].data)) - 1 )] == '\n' )
						{
							((*jg1).jogadas[(*jg1).n_jogadas].data)[(strlen(((*jg1).jogadas[(*jg1).n_jogadas].data)) - 1 )] = '\0';
						}
						(*jg2).jogadas[(*jg2).n_jogadas].situacao = 'd';
						strcpy(((*jg2).jogadas[(*jg2).n_jogadas].data) , __DATE__);
						if(((*jg2).jogadas[(*jg2).n_jogadas].data)[(strlen(((*jg2).jogadas[(*jg2).n_jogadas].data)) - 1 )] == '\n' )
						{
							printf("a");
							((*jg2).jogadas[(*jg2).n_jogadas].data)[(strlen(((*jg2).jogadas[(*jg2).n_jogadas].data)) - 1 )] = '\0';
						}
						(*jg1).n_jogadas++;
						(*jg2).n_jogadas++;
						break;
						
						
					case 2:
						(*jg2).n_vitorias++;
						(*jg1).n_derrotas++;
						if( (*jg1).n_jogadas == 0 )
						{
							(*jg1).jogadas = (Jogada*) calloc(((*jg1).n_jogadas+1) , sizeof(Jogada)); //alocando o vetor de jogadores
							if( (*jg1).jogadas == NULL)
								{	exit(3);	}
						}
						else
						{
							
							(*jg1).jogadas = (Jogada*) realloc( (*jg1).jogadas, ((*jg1).n_jogadas+1) * sizeof(Jogada)); //REalocando o vetor de jogadores
							if( (*jg1).jogadas == NULL)
								{	exit(3);	}
						}
						if( (*jg2).n_jogadas == 0 )
						{
							(*jg2).jogadas = (Jogada*) calloc(((*jg2).n_jogadas+1) , sizeof(Jogada)); //alocando o vetor de jogadores
							if( (*jg2).jogadas == NULL)
								{	exit(3);	}
						}
						else
						{
							
							(*jg2).jogadas = (Jogada*) realloc( (*jg2).jogadas, ((*jg2).n_jogadas+1) * sizeof(Jogada)); //REalocando o vetor de jogadores
							if( (*jg2).jogadas == NULL)
								{	exit(3);	}
						}
						
						(*jg1).jogadas[(*jg1).n_jogadas].situacao = 'd';
						strcpy(((*jg1).jogadas[(*jg1).n_jogadas].data) , __DATE__);
						if(((*jg1).jogadas[(*jg1).n_jogadas].data)[(strlen(((*jg1).jogadas[(*jg1).n_jogadas].data)) - 1 )] == '\n' )
						{
							((*jg1).jogadas[(*jg1).n_jogadas].data)[(strlen(((*jg1).jogadas[(*jg1).n_jogadas].data)) - 1 )] = '\0';
						}
						(*jg2).jogadas[(*jg2).n_jogadas].situacao = 'v';
						strcpy(((*jg2).jogadas[(*jg2).n_jogadas].data) , __DATE__);
						if(((*jg2).jogadas[(*jg2).n_jogadas].data)[(strlen(((*jg2).jogadas[(*jg2).n_jogadas].data)) - 1 )] == '\n' )
						{
							((*jg2).jogadas[(*jg2).n_jogadas].data)[(strlen(((*jg2).jogadas[(*jg2).n_jogadas].data)) - 1 )] = '\0';
						}
						
						(*jg1).n_jogadas++;
						(*jg2).n_jogadas++;
						break;
				}
				(*jg1).pontuacao = ((*jg1).n_vitorias-(*jg1).n_derrotas);
				(*jg2).pontuacao = ((*jg2).n_vitorias-(*jg2).n_derrotas);
				
				c = menu();
			}
			else
			{
				c = menu();
			}
			
		}
		else if ( c == 3 )
		{
			jg_escolhido = login(&jogadores , njg_cadastrados); //retorna -1 se não tem jogador com o mesmo nome cadastrado
			while(pos1<0)
			{
				printf("jogador invalido ou nao cadastrado\n");
				jg_escolhido = login(&jogadores , njg_cadastrados);
			}
			for(cont2 = 0 ; cont2 < jogadores[jg_escolhido].n_jogadas ; cont2++)
			{
				sprintf( aux_info_hist , "%c\n%s\n" , jogadores[jg_escolhido].jogadas[cont2].situacao , jogadores[jg_escolhido].jogadas[cont2].data );
				printf("%s" , aux_info_hist);
			}
			getch();
			system("cls");
			c = menu();
		}	
		else if ( c == 4 )
		{
			printf("\n\n\t\t\tTOP 10\n\n\n");
			printf("\tiniciais:\tpontuacao:\tdata:\n");
			if ( njg_cadastrados < 10 )
			{
				top10 = (int*) realloc (top10 ,  njg_cadastrados * sizeof(int));
			}
			organiza_top10(top10 , njg_cadastrados , &jogadores );
			if ( njg_cadastrados < 10 )
			{
				for(cont = 0 ; cont < njg_cadastrados ; cont++)
				{
				if(jogadores[(top10[cont])].pontuacao<0)
					{
						sprintf(aux_str_top10 , "\t  %3s\t\t  %.3d\t\t  %s\n" , jogadores[(top10[cont])].nome , jogadores[(top10[cont])].pontuacao , jogadores[(top10[cont])].datahora_uj);
						puts(aux_str_top10);
					}
					else
					{
						sprintf(aux_str_top10 , "\t  %3s\t\t   %.3d\t\t  %s\n" , jogadores[(top10[cont])].nome , jogadores[(top10[cont])].pontuacao , jogadores[(top10[cont])].datahora_uj);
						puts(aux_str_top10);
					}
				}
			}
			else
			{
				for(cont = 0 ; cont < 10 ; cont++)
				{
					if(jogadores[(top10[cont])].pontuacao<0)
					{
						sprintf(aux_str_top10 , "\t  %3s\t\t  %.3d\t\t  %s\n" , jogadores[(top10[cont])].nome , jogadores[(top10[cont])].pontuacao , jogadores[(top10[cont])].datahora_uj);
						puts(aux_str_top10);
					}else
					{
						sprintf(aux_str_top10 , "\t  %3s\t\t   %.3d\t\t  %s\n" , jogadores[(top10[cont])].nome , jogadores[(top10[cont])].pontuacao , jogadores[(top10[cont])].datahora_uj);
						puts(aux_str_top10);
					}
				}
			}
			
			getch();
			system("cls");
			c = menu();
		}
		else if ( c == 0 )
		{
			/*aqui a gente salva o arquivo depois de rodar todo o programa*/
			if( njg_cadastrados > 0)
			{		
				arquivo_jogadores = fopen("arquivo_jogadores.txt" , "wt");
				if(arquivo_jogadores == NULL)
				{	exit(3);	}
				fprintf( arquivo_jogadores , "%d" ,  njg_cadastrados);
				for(cont = 0 ; cont < njg_cadastrados ; cont++)
				{
					sprintf(aux_info_jogador , "\n%s\n%s\n%d\n%d\n%d\n%d\n%d" , jogadores[cont].nome , jogadores[cont].datahora_uj , 
					jogadores[cont].n_vitorias , jogadores[cont].n_derrotas , jogadores[cont].n_empates ,
					 (jogadores[cont].n_vitorias - jogadores[cont].n_derrotas) , jogadores[cont].n_jogadas);
					fputs(aux_info_jogador , arquivo_jogadores);
					sprintf(aux_str_hist_arq , "%s_hist.txt" , jogadores[cont].nome);
					historico_jg = fopen(aux_str_hist_arq , "wt");
					if(historico_jg == NULL)
					{	exit(3);	}
					fprintf( historico_jg , "%d" , jogadores[cont].n_jogadas);
					for(cont2 = 0 ; cont2 < jogadores[cont].n_jogadas ; cont2++)
					{
						sprintf( aux_info_hist , "\n%c\n%s" , jogadores[cont].jogadas[cont2].situacao , jogadores[cont].jogadas[cont2].data );
						fprintf( historico_jg , "%s" , aux_info_hist);
					}
					fclose(historico_jg);
				}
				fclose(arquivo_jogadores);
				free(jogadores);
				return(0);
			}
			else
			{
				return(0);	
			}
		}
	}
	free(jogadores);
	return (0);
}
