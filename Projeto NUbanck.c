#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <wingdi.h>
void app ( char nome[], float limite, char email[]) {
	float fatura=0, valor, cobrar, boleto_depositar;
	int opc, operadora, depositar, copiar_codigo;
	int ajuda, amigo_portabilidade, pagina_util, contato;
	int assunto;
	char numero[20], cnpj[30], razao_social[25], chat[200];
	char enviar_email[300];
	while (opc!=9) {
	printf("\t\t\t\t\t\t  ____   \n");
	printf("\t\t\t\t\t\t  _____\\  __   __\n");
	printf("\t\t\t\t\t\t / |  | | | |  | |\n");
	printf("\t\t\t\t\t\t | |  | | | |  | |\n");
	printf("\t\t\t\t\t\t | |  | | | |__| | \n");
	printf("\t\t\t\t\t\t |_|  |_|  \\____/  ");
	sleep(2);
	printf("%s\n\n",nome);
	printf("\t\t\t____________________________________\n");
	printf("\t\t\t=      $ Cat�o de credito              \n\n");
	system("color 5B");
	printf("\t\t\t= FATURA ATUAL R$%.2f        \n\n ",fatura);
	printf("\t\t\t= Limite dispon�vel R$%.2f   \n ",limite);
	printf("\t\t\t____________________________________\n\n\n"); 
	printf("\t\t\t Compra mais recente em \n\n\n ");	
	
	printf("======================\t   ======================\t======================\t   ======================");
	printf ("\n | (1) Indicar amigos |\t   | (2) Recarga celular|\t| (3) Cobrar         |\t   | (4) Depositar      |\n ");
	printf("======================\t   ======================\t======================\t   ======================   Sair");
	printf("\n");
	printf("======================\t   ======================\t======================\t   ======================   (9)");
	printf ("\n | (5) Transferir     |\t   | (6) Ajustar Limite |\t| (7) Pagar          |\t   | (8) Cart�o virtual |\n ");
	printf("======================\t   ======================\t======================\t   ======================\n ");
	scanf("%d", & opc); 
	system("cls");
	if (opc==1) {
		printf("Retira seus amigos da lista de espera: \n copie o link: \n\n");
		printf("Voc� recebeu uma indica��o para conhecer o Nubank. Experimente uma vida\n");
		printf("financeira sem burocracias usando a NuConta e o cart�o de cr�dito Nubank.\n");
		printf("https://nubank.com.br/indicacao/nu/?id=HfK6eQwl7AwAAAFx\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		fflush(stdin);
		system("pause");	
		system("cls");	
	}
	else if (opc==2) {
		fflush(stdin);
		printf("Qual n�mero deseja recarregar?");
		fgets(numero,20,stdin);
		system("cls");
		printf("valor ");
		scanf("%f", &valor);
		system("cls");
		printf("Qual sua operadora \n");
		printf(" (1) Claro \n (2) Nextel \n (3) Oi \n (4) TIM \n (5) Vivo \n (6) Correios \n");
		scanf("%d", &operadora);
		system("cls");
		fflush(stdin);
		if (operadora==1) {
			printf("Recarga realizada com sucesso \n Valor R$%.2f \n Numero %s Operadora Claro ", valor, numero);
			sleep(5);
			system("cls");
		}
		else if (operadora==2) {
			printf("Recarga realizada com sucesso \n Valor R$%.2f \n Numero %s Operadora Nextel ", valor, numero);
			sleep(5);
			system("cls");
		}
		else if (operadora==3) {
			printf("Recarga realizada com sucesso \n Valor R$%.2f \n Numero %s Operadora Oi ", valor, numero);
			sleep(5);
			system("cls");
		}
		else if (operadora==4) {
			printf("Recarga realizada com sucesso \n Valor R$%.2f \n Numero %s Operadora TIM ", valor, numero);
			sleep(5);
			system("cls");
		}
		else if (operadora==5) {
			printf("Recarga realizada com sucesso \n Valor R$%.2f \n Numero %s Operadora Vivo ", valor, numero);
			sleep(5);
			system("cls");
		}
		else if (operadora==6) {
			printf("Recarga realizada com sucesso \n Valor R$%.2f \n Numero %s  Operadora Correios ", valor, numero);
			sleep(5);
			system("cls");
		}
	}
	if(opc==3) {
		printf("Quanto voc� quer cobrar? \nR$");
		scanf("%f", &cobrar);
		system("cls");
		printf("\n\t Envie a combran�a ou \n\t mostre o c�digo abaixo \n\n\t %.2f \n\n",cobrar);
		printf("\t#--~---~----~---~--#\n");
		printf("\t#--;--*--;--*--;---.\n");
		printf("\t#--&--*--!--**--�--.\n");
		printf("\t#--~--*--~---~--^-:#\n");
		printf("\t#--;--;--;--;--;---.\n");
		printf("\t#--&--*--!--**--�--.\n");
		printf("\t#--*--;--;--*--;---.\n");
		printf("\t#--&--*--!--``--�--.\n");
		printf("\n\n\tInserir imagem ('.')");
		printf("\n\n\n\n\n\n\t Enviar Cobran�a  \n    > \t Seu amigo pode usar a NuConta");
		printf("\n\t ou qualquer outro banco \n\t para te pagar\n\n");
		sleep(10);
		system("cls");
	}
	else if(opc==4) {
		printf("(1) Gerar um boleto de deposito \nPague onde preferir e receba o dinheiro na \nsua conta em at� 3 dias �teis \n\n");
		printf("(2) Depositar por TED ou DOC \nTransfira de outro banco para a sua \n conta Nubank, se \nfor TED cai no mesmo dia \n\n");
		printf("(3) Trazer seu s�lario \nReceba todo m�s direto na sua conta e n�o perca \nnenhum dia de rendimento \n\n");
		scanf("%d", &depositar);
		system("cls");
			if (depositar==1) {
				printf("Quanto voc� quer depositar? \n");
				printf("Digite um valor entre R$ 20,00 e R$ 15.000.00 \nR$");
				scanf("%f", &boleto_depositar);
				system("cls");
				if(boleto_depositar>=20 && boleto_depositar<=15000) {
					printf("\nR$ %.2f \n\n\n\nUtilize o n�mero do codigo de barras abaixo para \nrealizar o dep�sito na sua conta do Nubank \n\n",boleto_depositar);
					printf("\t\n\t 23793.38128 600023.662228  \n\t 82000.063303182 \n\t 110000010000");
					printf("\n\n\n\n\n(1) COPIAR C�DIGO \n(2) ENVIAR BOLETO POR E-MAIL ");
					scanf("%d", &copiar_codigo);
					system("cls");
					if(copiar_codigo==1) {
						printf("O c�digo de barra foi copiado com sucesso");
						sleep(5);
						system("cls");
				    }
					else if (copiar_codigo==2) {
						printf(" C�digo de barra enviado para o email %s ",email);
						sleep(5);
						system("cls");
					}
					else {
						printf("Op��o invalida");
						sleep(5);
						system("cls");
					}	
				}
				else {
					printf("Valor invalido");
					sleep(5);
					system("cls");
				}
			}
			else if (depositar==2) {
				printf("\n\t\t\t\t$\n\n");
				printf("Use os daods abaixo para fazer uma TED \nou DOC para sua sua NuConta:\n\n");
				printf("____________________________________________________________\n");
				printf(" Ag�cia \t\t\t\t\t\t001\n");	    	
				printf(" Conta \t\t\t\t\t\t 20525682-3\n");
				printf(" CPF \t\t\t\t\t     047.164.245-29\n");
				printf(" Banco \t\t\t\t    Nu Pagamentos S.A.(260)\n");
				printf(" Tipo \t\t\t\t\t Conta de Pagamento\n");
				printf(" M�todo \t\t\t\t\t TED ou DOC\n");
				sleep(5);
				system("cls");
			}
			else if (depositar==3) {
				printf("\nFA�A SEU SAL�RIO REDER \n\nVeja o seu sal�rio cair todo o m�s \nna NuConta e j� come�ar a reder \nautomaticamente. Acompanhe quanto \n");
				printf("j� ganhou e quanto deve receber nos pr�ximos meses.\n\n\n\n\n\n");
				printf(" (1)TRAZER MEU SALARIO \n (2) ? AJUDA \n");
				scanf("%d", &ajuda);
				system("cls");
				fflush(stdin);
				if (ajuda==1) {
					fflush(stdin);
					printf("QUAL O CNPJ da sua empresa?\n");
					printf("Voc� pode encontrar essa informa��o no \nholerite ou RH.\n");
					fgets(cnpj,30,stdin);
					fflush(stdin);
					system("cls");
					printf("QUAL A RAZ�O SOCIAL da sua empresa?\n");
					printf("Voc� pode encontrar essa informa��o no \nholerite ou RH.\n");
					fgets(razao_social,25,stdin);
					system("cls");
					printf("EM ANDAMENTO \n\nRecebemos seu pedido de portabilidade e vamos \nte avisando os pr�ximos passo por email ");
					sleep(5);
					system("cls");
					printf("VOC� ACABOU DE PEDIR A PORTABILIDADE \n DO SEU SAL�RIO PARA A CONTA DO NUBANK \n\n");
					printf("(1)Indique para aquele seu amigo que com certeza vai pedir tamb�m. \n (2) Agora n�o \n");
					scanf("%d", &amigo_portabilidade);
					if(amigo_portabilidade==1) {
						printf("Link copiado");
						sleep(5);
						system("cls");
					}
					else {
						printf("Obrigado");
						sleep(3);
						system("cls");
					} 
				}
				else if(ajuda==2) {
					printf("COMO FA�O PORTABILIDADE DO MEU SAL�RIO \nPARA CONTA DO NUBANK? \n\n");
					printf("Voc� j� pode fazer a portabilidade de conta sal�rio e come�ar a receber seu sal�rio em sua conta! \n");
					printf("Voc� precisar� da Raz�o Social e do CNPJ do seu empregador, informa��es que voc� encontrar� no \n");
					printf("seu demonstrativo de pagamentos ou no seu informe de rendimentos.\n\n");
					printf("Al�m do nome do banco em que sua empresa processa a folha de pagamentos, que n�o necessariamente � o banco em \n");
					printf("que voc� recebe hoje seu sal�rio. A �rea de Recursos Humanos da sua empresa conseguir� te passar essa informa��o. \n");
					printf("Assim que voc� tiver essas tr�s informa��es, basta selecionar  'Depositar'  na tela incial da sua conta, e depois 'Receber sal�rio'.\n\n");
					printf("Ao concluir todos os passos em seu app, n�s daremos in�cio � sua solicita��o e dentro de alguns dias voc� receber� \n");
					printf("um e-mail com todos os dados do seu pedido. \n\n");
					printf("Ap�s receber este e-mail, em at� 10 dias �teis te enviaremos um novo e-mail com a confirma��o de que sua \n");
					printf("portabilidade foi conclu�da, como consta na Res. CMN 4.684/2018. \n\n");
					printf("Esse artigo foi �til? \n (1) SIM \n(2) N�O \n");
					scanf("%d", &pagina_util);
					system("cls");
					if(pagina_util==1) {
						printf("COMO FA�O PORTABILIDADE DO MEU SAL�RIO \nPARA CONTA DO NUBANK? \n\n");
						printf("Voc� j� pode fazer a portabilidade de conta sal�rio e come�ar a receber seu sal�rio em sua conta! \n");
						printf("Voc� precisar� da Raz�o Social e do CNPJ do seu empregador, informa��es que voc� encontrar� no \n");
						printf("seu demonstrativo de pagamentos ou no seu informe de rendimentos.\n\n");
						printf("Al�m do nome do banco em que sua empresa processa a folha de pagamentos, que n�o necessariamente � o banco em \n");
						printf("que voc� recebe hoje seu sal�rio. A �rea de Recursos Humanos da sua empresa conseguir� te passar essa informa��o. \n");
						printf("Assim que voc� tiver essas tr�s informa��es, basta selecionar 'Depositar' na tela incial da sua conta, e depois 'Receber sal�rio'.\n\n");
						printf("Ao concluir todos os passos em seu app, n�s daremos in�cio � sua solicita��o e dentro de alguns dias voc� receber� \n");
						printf("um e-mail com todos os dados do seu pedido. \n\n");
						printf("Ap�s receber este e-mail, em at� 10 dias �teis te enviaremos um novo e-mail com a confirma��o de que sua \n");
						printf("portabilidade foi conclu�da, como consta na Res. CMN 4.684/2018. \n\n");
						printf("Ficamos felizes em ajudar\n\n\n\n\n\n");
						system("pause");
						system("cls");
					}
					else if(pagina_util==2) {
						printf("\nEntre em contato conosco. \n(1) E-MAIL \n(2) CHAT\n");
						scanf("%d", &contato);
						system("cls");
						if (contato==1) {
							fflush(stdin);
							printf("De  %s",email);
							printf("\nPara  meajuda@nubank.com.br\n");
							printf("Assunto: ");
							scanf("%d", &assunto);
							fflush(stdin);
							printf("\nEscrever e-mail: ");
							scanf(enviar_email,200,stdin);
							sleep(3);
							system("cls");
							printf("\nE-MAIL enviado com sucesso");
							fflush(stdin);
							sleep(5);
							system("cls");
						}
						else if(contato==2) {
							fflush(stdin);
							printf("\n\n\t\t\t\t\t\tCHAT\n\n\n\n");
							fflush(stdin);
							printf("Ol�, %s \nEm uma �nica mensagem, descreva \ncomo posso ajudar isso \nvai agilizar bastante meu atendimento\n",nome);
							fgets(chat,200,stdin);
							fflush(stdin);
							printf("\n\nEnt�o %s breve respondemos sua solicita��o",nome);
							sleep(6);
							system("cls");
						}
						
					}
				}
			}		
	}
	
	}
	
	
}	
int main () {
	char cpf[50], nome[50], email[50];
	char sobrenome[50], codigo_email[50], confirmar_cpf[50];
	char rg[50], expedicao[50], orgao_expeditor[50], proficao[50];
	char cep[50], cidade[50], rua[50], numero[50], bairro[50];
	float salario=0,limite;
	setlocale (LC_ALL, "portuguese");
	system("color 5f");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t  ____   \n");
	printf("\t\t\t\t\t\t  _____\\  __   __\n");
	printf("\t\t\t\t\t\t / |  | | | |  | |\n");
	printf("\t\t\t\t\t\t | |  | | | |  | |\n");
	printf("\t\t\t\t\t\t | |  | | | |__| | \n");
	printf("\t\t\t\t\t\t |_|  |_|  \\____/  ");
	sleep(2);
	printf("B");
	sleep(0,9);
	printf("a");
	sleep(0,9);
	printf("n");
	sleep(1);
	printf("k\n\n\n\n");
	sleep(2);
	system("cls");
	printf("\n");
	printf("  ____   \n");
	printf("  _____\\  __   __\n");
	printf(" / |  | | | |  | | \t\t\t\t\t\t\t\t\t\t BRASIL\n");
	printf(" | |  | | | |  | | \t\t\t\t\t\t\t\t\t\t   v \n");
	printf(" | |  | | | |__| | \n");
	printf(" |_|  |_|  \\____/ Bank ");
	printf("\n\n\n\n\n\n\n\n\n UM MUNDO \n financeiro sem \n complexibilidades");
	printf("\n\n\n\n\n\n\n\n\nCOME�AR \n\n");
	sleep(2);
	system("pause");
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tNU");
	sleep(1);
	printf("bank");
	sleep(2);	
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tNU");
	sleep(1);
	printf("bank");
	sleep(2);
	system("cls");
	system("color 70");
	printf("Para come�ar, digite seu CPF \n");
	fgets(cpf,20,stdin);
	system("cls");
	printf("Primeiro, precisamos do seu nome \n");
	fgets(nome,50,stdin);
	system("cls");
	printf("Sobrenome \n");
	fgets(sobrenome,50,stdin);
	system("cls");
	fflush(stdin);
	printf("Digite seu e-mail \n ");
	fgets(email,50,stdin);
	system("cls");
	printf("INFORMA��ES ENVIADAS \n Seu pedido sera analisado e, se estiver \n");
	printf("tudo certo, um codigo de convite ser� \nenviado para %s",email);
	sleep(5);
	system("cls");
	printf("Digite o c�digo que \n enviamos para seu e-mail \n");
	fgets(codigo_email,50,stdin);
	sleep(1);
	system("cls");
	printf("Infome CPF \n");
	fgets(confirmar_cpf,50,stdin);
	system("cls");
	printf ("Termos de uso \n\n\n");
	printf ("Pol�tica de privacidade \n\nNosso objetivo � acabar com a complexidade e tentamos \n");
	printf("deixar essa Pol�tica o mais simples poss�vel, mas caso \n");
	printf("ainda tenha d�vidas, canais de atendimento est�o � sua disposi��o.\n");
	printf("A Pol�tica de Privacidade da Nu Pagamentos S.A. e demais empresas do grupo\n");
	printf("(Nubank) foi criada para reafirmar o nosso compromisso com a seguran�a \n");
	printf("privacidade e a transpar�ncia no tratamento das suas informa��es. Ela \n ");
	printf("descreve como coletamos e tratamos dados quando Voc� baixa nosso \n");
	printf("aplicativo no seu celular/tablet, trafega em nossos websites, solicita algum dos \n");
	printf("nossos servi�os, se torna nosso cliente, usa nossos servi�os ou entra em \n");
	printf("contato com o Nubank por meio dos canais de comunica��o dispon�veis. \n\n");
	printf("Essas informa��es podem se referir �quelas necess�rias para identificar Voc� \n");
	printf("para fins de cadastro e cumprimento da legisla��o, tais como seu nome, CPF e \n");
	printf("foto, ou ainda �quelas necess�rias para prover os servi�os do Nubank de forma \n");
	printf("eficiente e segura, tais como seu hist�rico de cr�dito, seu endere�o para \n");
	printf("entregar o seu roxinho, dentre outras. Podemos ainda coletar e tratar dados \n");
	printf("locacionais para permitir ao Nubank oferecer melhores servi�os a Voc� e \n");
	printf("garantir a sua seguran�a, como, por exemplo, identificando compras indevidas. \n\n\n\n\n");
	system("pause");
	system("cls");
	printf("Informe RG \n");
	fflush(stdin);
	fgets(rg,50,stdin);
	system("cls");
	printf("Data de expedi��o \n");
	fgets(expedicao,50,stdin);
	fflush(stdin);
	system("cls");
	printf("Org�o expeditor \n");
	fgets(orgao_expeditor,50,stdin);
	fflush(stdin);
	system("cls");
	printf("Informe profiss�o \n");
	fgets(proficao,50,stdin);
	system("cls");
	printf("Informe seu sal�rio \n");
	scanf("%f", &salario);
	limite=salario/3;
	fflush(stdin);
	system("cls");
	printf("CEP da residencia \n");
	fgets(cep,50,stdin);
	system("cls");
	printf("Bairro \n");
	fgets(bairro,50,stdin);
	system("cls");
	printf("Cidade \n");
	fgets(cidade,50,stdin);
	system("cls");
	printf("Rua \n");
	fgets(rua,50,stdin);
	system("cls");
	printf("N�mero \n");
	fgets(numero,50,stdin);
	system("cls");
	printf("Status \n CART�O DE DE CREDITO APROVADO \n Um cartao de cretito foi gerado \n");
	printf("e chegar em ate 15 dias �teis no endere�o \n %s  N� %s %s %s",rua, numero, bairro,cidade);
	sleep(5);
	system("cls");
	system("color 5F");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t  ____   \n");
	printf("\t\t\t\t\t\t  _____\\  __   __\n");
	printf("\t\t\t\t\t\t / |  | | | |  | |\n");
	printf("\t\t\t\t\t\t | |  | | | |  | |\n");
	printf("\t\t\t\t\t\t | |  | | | |__| | \n");
	printf("\t\t\t\t\t\t |_|  |_|  \\____/  ");
	sleep(2);
	printf("%s",nome);
	sleep(3);
	system("cls");
	app (nome, limite, email);
}
