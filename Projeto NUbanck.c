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
	printf("\t\t\t=      $ Catão de credito              \n\n");
	system("color 5B");
	printf("\t\t\t= FATURA ATUAL R$%.2f        \n\n ",fatura);
	printf("\t\t\t= Limite disponível R$%.2f   \n ",limite);
	printf("\t\t\t____________________________________\n\n\n"); 
	printf("\t\t\t Compra mais recente em \n\n\n ");	
	
	printf("======================\t   ======================\t======================\t   ======================");
	printf ("\n | (1) Indicar amigos |\t   | (2) Recarga celular|\t| (3) Cobrar         |\t   | (4) Depositar      |\n ");
	printf("======================\t   ======================\t======================\t   ======================   Sair");
	printf("\n");
	printf("======================\t   ======================\t======================\t   ======================   (9)");
	printf ("\n | (5) Transferir     |\t   | (6) Ajustar Limite |\t| (7) Pagar          |\t   | (8) Cartão virtual |\n ");
	printf("======================\t   ======================\t======================\t   ======================\n ");
	scanf("%d", & opc); 
	system("cls");
	if (opc==1) {
		printf("Retira seus amigos da lista de espera: \n copie o link: \n\n");
		printf("Você recebeu uma indicação para conhecer o Nubank. Experimente uma vida\n");
		printf("financeira sem burocracias usando a NuConta e o cartão de crédito Nubank.\n");
		printf("https://nubank.com.br/indicacao/nu/?id=HfK6eQwl7AwAAAFx\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		fflush(stdin);
		system("pause");	
		system("cls");	
	}
	else if (opc==2) {
		fflush(stdin);
		printf("Qual número deseja recarregar?");
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
		printf("Quanto você quer cobrar? \nR$");
		scanf("%f", &cobrar);
		system("cls");
		printf("\n\t Envie a combrança ou \n\t mostre o código abaixo \n\n\t %.2f \n\n",cobrar);
		printf("\t#--~---~----~---~--#\n");
		printf("\t#--;--*--;--*--;---.\n");
		printf("\t#--&--*--!--**--¨--.\n");
		printf("\t#--~--*--~---~--^-:#\n");
		printf("\t#--;--;--;--;--;---.\n");
		printf("\t#--&--*--!--**--¨--.\n");
		printf("\t#--*--;--;--*--;---.\n");
		printf("\t#--&--*--!--``--¨--.\n");
		printf("\n\n\tInserir imagem ('.')");
		printf("\n\n\n\n\n\n\t Enviar Cobrança  \n    > \t Seu amigo pode usar a NuConta");
		printf("\n\t ou qualquer outro banco \n\t para te pagar\n\n");
		sleep(10);
		system("cls");
	}
	else if(opc==4) {
		printf("(1) Gerar um boleto de deposito \nPague onde preferir e receba o dinheiro na \nsua conta em até 3 dias úteis \n\n");
		printf("(2) Depositar por TED ou DOC \nTransfira de outro banco para a sua \n conta Nubank, se \nfor TED cai no mesmo dia \n\n");
		printf("(3) Trazer seu sálario \nReceba todo mês direto na sua conta e não perca \nnenhum dia de rendimento \n\n");
		scanf("%d", &depositar);
		system("cls");
			if (depositar==1) {
				printf("Quanto você quer depositar? \n");
				printf("Digite um valor entre R$ 20,00 e R$ 15.000.00 \nR$");
				scanf("%f", &boleto_depositar);
				system("cls");
				if(boleto_depositar>=20 && boleto_depositar<=15000) {
					printf("\nR$ %.2f \n\n\n\nUtilize o número do codigo de barras abaixo para \nrealizar o depósito na sua conta do Nubank \n\n",boleto_depositar);
					printf("\t\n\t 23793.38128 600023.662228  \n\t 82000.063303182 \n\t 110000010000");
					printf("\n\n\n\n\n(1) COPIAR CÓDIGO \n(2) ENVIAR BOLETO POR E-MAIL ");
					scanf("%d", &copiar_codigo);
					system("cls");
					if(copiar_codigo==1) {
						printf("O código de barra foi copiado com sucesso");
						sleep(5);
						system("cls");
				    }
					else if (copiar_codigo==2) {
						printf(" Código de barra enviado para o email %s ",email);
						sleep(5);
						system("cls");
					}
					else {
						printf("Opção invalida");
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
				printf(" Agêcia \t\t\t\t\t\t001\n");	    	
				printf(" Conta \t\t\t\t\t\t 20525682-3\n");
				printf(" CPF \t\t\t\t\t     047.164.245-29\n");
				printf(" Banco \t\t\t\t    Nu Pagamentos S.A.(260)\n");
				printf(" Tipo \t\t\t\t\t Conta de Pagamento\n");
				printf(" Método \t\t\t\t\t TED ou DOC\n");
				sleep(5);
				system("cls");
			}
			else if (depositar==3) {
				printf("\nFAÇA SEU SALÁRIO REDER \n\nVeja o seu salário cair todo o mês \nna NuConta e já começar a reder \nautomaticamente. Acompanhe quanto \n");
				printf("já ganhou e quanto deve receber nos próximos meses.\n\n\n\n\n\n");
				printf(" (1)TRAZER MEU SALARIO \n (2) ? AJUDA \n");
				scanf("%d", &ajuda);
				system("cls");
				fflush(stdin);
				if (ajuda==1) {
					fflush(stdin);
					printf("QUAL O CNPJ da sua empresa?\n");
					printf("Você pode encontrar essa informação no \nholerite ou RH.\n");
					fgets(cnpj,30,stdin);
					fflush(stdin);
					system("cls");
					printf("QUAL A RAZÃO SOCIAL da sua empresa?\n");
					printf("Você pode encontrar essa informação no \nholerite ou RH.\n");
					fgets(razao_social,25,stdin);
					system("cls");
					printf("EM ANDAMENTO \n\nRecebemos seu pedido de portabilidade e vamos \nte avisando os próximos passo por email ");
					sleep(5);
					system("cls");
					printf("VOCÊ ACABOU DE PEDIR A PORTABILIDADE \n DO SEU SALÁRIO PARA A CONTA DO NUBANK \n\n");
					printf("(1)Indique para aquele seu amigo que com certeza vai pedir também. \n (2) Agora não \n");
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
					printf("COMO FAÇO PORTABILIDADE DO MEU SALÁRIO \nPARA CONTA DO NUBANK? \n\n");
					printf("Você já pode fazer a portabilidade de conta salário e começar a receber seu salário em sua conta! \n");
					printf("Você precisará da Razão Social e do CNPJ do seu empregador, informações que você encontrará no \n");
					printf("seu demonstrativo de pagamentos ou no seu informe de rendimentos.\n\n");
					printf("Além do nome do banco em que sua empresa processa a folha de pagamentos, que não necessariamente é o banco em \n");
					printf("que você recebe hoje seu salário. A área de Recursos Humanos da sua empresa conseguirá te passar essa informação. \n");
					printf("Assim que você tiver essas três informações, basta selecionar  'Depositar'  na tela incial da sua conta, e depois 'Receber salário'.\n\n");
					printf("Ao concluir todos os passos em seu app, nós daremos início à sua solicitação e dentro de alguns dias você receberá \n");
					printf("um e-mail com todos os dados do seu pedido. \n\n");
					printf("Após receber este e-mail, em até 10 dias úteis te enviaremos um novo e-mail com a confirmação de que sua \n");
					printf("portabilidade foi concluída, como consta na Res. CMN 4.684/2018. \n\n");
					printf("Esse artigo foi útil? \n (1) SIM \n(2) NÃO \n");
					scanf("%d", &pagina_util);
					system("cls");
					if(pagina_util==1) {
						printf("COMO FAÇO PORTABILIDADE DO MEU SALÁRIO \nPARA CONTA DO NUBANK? \n\n");
						printf("Você já pode fazer a portabilidade de conta salário e começar a receber seu salário em sua conta! \n");
						printf("Você precisará da Razão Social e do CNPJ do seu empregador, informações que você encontrará no \n");
						printf("seu demonstrativo de pagamentos ou no seu informe de rendimentos.\n\n");
						printf("Além do nome do banco em que sua empresa processa a folha de pagamentos, que não necessariamente é o banco em \n");
						printf("que você recebe hoje seu salário. A área de Recursos Humanos da sua empresa conseguirá te passar essa informação. \n");
						printf("Assim que você tiver essas três informações, basta selecionar 'Depositar' na tela incial da sua conta, e depois 'Receber salário'.\n\n");
						printf("Ao concluir todos os passos em seu app, nós daremos início à sua solicitação e dentro de alguns dias você receberá \n");
						printf("um e-mail com todos os dados do seu pedido. \n\n");
						printf("Após receber este e-mail, em até 10 dias úteis te enviaremos um novo e-mail com a confirmação de que sua \n");
						printf("portabilidade foi concluída, como consta na Res. CMN 4.684/2018. \n\n");
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
							printf("Olá, %s \nEm uma única mensagem, descreva \ncomo posso ajudar isso \nvai agilizar bastante meu atendimento\n",nome);
							fgets(chat,200,stdin);
							fflush(stdin);
							printf("\n\nEntão %s breve respondemos sua solicitação",nome);
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
	printf("\n\n\n\n\n\n\n\n\nCOMEÇAR \n\n");
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
	printf("Para começar, digite seu CPF \n");
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
	printf("INFORMAÇÕES ENVIADAS \n Seu pedido sera analisado e, se estiver \n");
	printf("tudo certo, um codigo de convite será \nenviado para %s",email);
	sleep(5);
	system("cls");
	printf("Digite o código que \n enviamos para seu e-mail \n");
	fgets(codigo_email,50,stdin);
	sleep(1);
	system("cls");
	printf("Infome CPF \n");
	fgets(confirmar_cpf,50,stdin);
	system("cls");
	printf ("Termos de uso \n\n\n");
	printf ("Política de privacidade \n\nNosso objetivo é acabar com a complexidade e tentamos \n");
	printf("deixar essa Política o mais simples possível, mas caso \n");
	printf("ainda tenha dúvidas, canais de atendimento estão à sua disposição.\n");
	printf("A Política de Privacidade da Nu Pagamentos S.A. e demais empresas do grupo\n");
	printf("(Nubank) foi criada para reafirmar o nosso compromisso com a segurança \n");
	printf("privacidade e a transparência no tratamento das suas informações. Ela \n ");
	printf("descreve como coletamos e tratamos dados quando Você baixa nosso \n");
	printf("aplicativo no seu celular/tablet, trafega em nossos websites, solicita algum dos \n");
	printf("nossos serviços, se torna nosso cliente, usa nossos serviços ou entra em \n");
	printf("contato com o Nubank por meio dos canais de comunicação disponíveis. \n\n");
	printf("Essas informações podem se referir àquelas necessárias para identificar Você \n");
	printf("para fins de cadastro e cumprimento da legislação, tais como seu nome, CPF e \n");
	printf("foto, ou ainda àquelas necessárias para prover os serviços do Nubank de forma \n");
	printf("eficiente e segura, tais como seu histórico de crédito, seu endereço para \n");
	printf("entregar o seu roxinho, dentre outras. Podemos ainda coletar e tratar dados \n");
	printf("locacionais para permitir ao Nubank oferecer melhores serviços a Você e \n");
	printf("garantir a sua segurança, como, por exemplo, identificando compras indevidas. \n\n\n\n\n");
	system("pause");
	system("cls");
	printf("Informe RG \n");
	fflush(stdin);
	fgets(rg,50,stdin);
	system("cls");
	printf("Data de expedição \n");
	fgets(expedicao,50,stdin);
	fflush(stdin);
	system("cls");
	printf("Orgão expeditor \n");
	fgets(orgao_expeditor,50,stdin);
	fflush(stdin);
	system("cls");
	printf("Informe profissão \n");
	fgets(proficao,50,stdin);
	system("cls");
	printf("Informe seu salário \n");
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
	printf("Número \n");
	fgets(numero,50,stdin);
	system("cls");
	printf("Status \n CARTÃO DE DE CREDITO APROVADO \n Um cartao de cretito foi gerado \n");
	printf("e chegar em ate 15 dias úteis no endereço \n %s  N° %s %s %s",rua, numero, bairro,cidade);
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
