# Port Simulator

### Introdução

O trabalho tem como objetivo a implementação de
um simulador portuário em linguagem C, que visa
reproduzir e simular operações portuárias de um porto
fictício inspirado no Terminal de Puerto Nuevo,
localizado em Buenos Aires, Argentina.

O simulador de porto será desenvolvido com base em
um modelo de simulação conceitual, com foco no processo
de carregamento de contêineres. Serão considerados
diferentes cenários para a modelagem e implementação
do simulador, a fim de abranger as principais etapas
e elementos envolvidos nas operações portuárias.

No contexto do simulador, um terminal de contêineres
é representado como uma área aberta em um ancoradouro,
onde os navios chegam e ancoram em filas para permitir
o descarregamento de contêineres. O objetivo é simular o
fluxo de contêineres, desde a chegada do navio ao porto
até o seu transporte para o pátio de armazenamento.

Durante o processo de simulação, serão consideradas
diversas atividades que ocorrem em um terminal de
contêineres, tais como a chegada do navio ao porto,
o descarregamento de contêineres, e o transporte até
o patio.

O simulador de porto terá como base um pequeno porto
com quatro áreas de atracamento numeradas de 1 a 4.
Cada área de atracamento contará com uma grua que irão
descarregar os navios e empilhar os contêineres nas travessas.

O simulador de porto será contolado por unidades de
tempo, permitindo o avanço do processo em etapas.
A cada unidade de tempo novos navios poderão chegar,
às filas de atracamento, sendo atríbuidos identificadores
e quantidades aleatórias de contêineres.

A saída do simulador fornecerá informações detalhadas
sobre o estado do porto a cada unidade de tempo, facilitando
a compreensão e análise dos resultados. O objetivo é
criar um simulador eficiente e autoexplicativo, que
reproduza com fidelidade as operações portuárias e
permita a visualização do fluxo de contêineres.

No próximo tópico, serão apresentados os detalhes
do trabalho incluindo os processos envolvidos e as regras
de funcionamento do simulador de porto em linguagem C.

### Requisitos do Sistema

* Sistema Operacional Windows;
* Compilador C;

### Instalação

Para obter o código-fonte mais recente do Port Simulator,
você pode clonar o repositório Git. Siga as etapas 
abaixo para realizar a clonagem:

1. Abra o terminal ou prompt de comando.
2. Navegue até o diretório onde você deseja 
clonar o projeto.

   `cd /caminho/para/sua/pasta/`
3. Agora, clone o repositório Git executando o 
seguinte comando:
`git clone https://github.com/Joao-Lamounier/port-simulator.git`
4. Aguarde até que o Git termine de clonar o 
repositório. Você verá mensagens indicando o progresso da clonagem.

Após a conclusão dessas etapas, você terá o 
código-fonte do Port Simulator clonado em seu 
diretório local. Agora você pode prosseguir com as 
etapas de configuração e compilação conforme descrito
na documentação.
### Arquitetura e Design
O Port Simulator é projetado com arquitetura em camadas,
com o objetivo de promover uma separação clara das
responsabilidades e facilitar a manutenção e extensibilidade
do sistema. A arquitetura é composta por duas camadas
principais interface de usuário e lógica do negocio.

* Interface de usuário: A camada de interface de usuário
é responsável por fornecer uma interface interativa, para
que os usuários possam interagir com o Port Simulator.
Essa camada inclui o menu inicial e apresentação do
processo que ocorre no porto.

* Lógica de negócio:A camada de lógica de negócio 
é o coração do simulador de porto. Ela contém a lógica
principal para simular as operações do porto, como a
chegada de navios, movimentação de contêineres e
alocação de recursos. Essa camada é implementada
em um conjunto de módulos interconectados, cada um com 
responsabilidades específicas.


### Funcionalidades
* Chegada de saída de navios: O gerenciamento dos navios, que irão
partir quando descarregados, e chegarão de 0 à 3 navios por unidade
de tempo.
* Situação das travessas: Permitir a visualização das travessas em
tempo real, quantos contêineres possuem e quando serão levadas para 
serem esvaziadas
* Cálculo de tempo de espera: Calcular o tempo de espera 
dos navios para atracação com base na quantidade de contêineres
à serem descarregados.
* Movimentação dos veículos: Diz quantas vezes cada veículo saiu para
esvaziar alguma das travessas.

### Estrutura de Dados
* Pilha
  ![Pilha](/documentation/pilha.png)
* Navio
  ![Navio](/documentation/navio.png)
* Área de Atracamento
  ![Área de Atracamento](/documentation/areaAtracamento.png)
* Travessa
  ![Travessa](/documentation/travessas.png)

### Algoritmos
* Escalonamento de filas: Esse algoritmo é responsável
por equilibrar o tamanho das filas, inserindo sempre
na menor fila, assim, a maior diferença entre as filas
será sempre de um navio.
* Escalonamento de travessas: Este escalonamento
não permite a inserção paralela de contêineres nas
travessas, pois isso seria menos eficiente. A
inserção de contêineres é realizada sempre na primeira
travessa disponível.
* Escalonamento de transportes: Uniformalizar a
quantidade de idas ao patio de cada transporte, de modo que 
a diferença de idas entre eles seja no máximo 1.

### Compilação e Execução

* Abra um terminal no diretório raiz do projeto.
* Execute o comando make para compilar e executar o programa.

### Limitações e Possíveis Melhorias
O Port Simulator não perssiste dados em memória, 
isso impede o salvamento e restauração do estado
do simulador. Além disso, se o programa for 
encerrado abruptamente, todas as informações 
serão perdidas, o que pode ser inconveniente e 
frustrante para os usuários.

### Conclusão ====A fazer===
   