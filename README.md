# Algoritmos e Programação de Computadores
Repositório criado para as aulas teoricas e atividades práticas da disciplina.
## Organização do Repositório
Este repositório está organizado da seguite forma:
- **aulas/**: Pasta que contém os codigos das atividades teóricas.
- **praticas/**: Pasta que contem os codigos das atividades práticas.
## Comandos Básicos do Shell no Linux
Aqui estão alguns comandos basicos do shell no linux que podem ser úteis ao utilizar o git-bash.
- Listagem de Arquivos e Pastas
```shell
ls #Lista arquivos e pastas da pasta atual
ls -1 #Lista detalhadamente com informações adicionais
```
- Acesso a Pastas
```Shell
cd nome_da_pasta #Acessa a pasta especificada
cd .. #Volta uma pasta (subir um nivel)
cd ~ #Volta diretamente para a pasta home
```
- Executar um Programa Local
```shell
./nome_do_programa #Executa um programa da pasta atual
```
- Limpar Tela do Terminal
```shell
clear
```
## Instruções para Compilar um Programa C
1. Acesse a Pasta com os Códigos
```shell
cd aulas
cd aula01
```
2. Compile o programa
```shell
gcc nome_do_arquivo.c -lm
```
3. Execute o Programa Compilado
```shell
./a.exe
```
## Comandos para salvar seu arquivo no GitHub
```shell
git add seu_arquivo.algo #Adiciona o arquivo à área de espera (prepara pra commit)
git add . #Faz a mesma coisa que o de cima, mas com todos os arquivos e pastas
git commit -m "Exemplo de texto para salvar as mudanças" #Cria um commit com a mensagem, salvando as mudanças preparadas
git push origin develop #Envia os commits da branch develop pro pré repositório remoto
git switch main #Necessario trocar para (main)
git merge develop #Mescla as mudanças da branch develop na branch atual (main)
git push origin main #Envia as mudanças da branch main pro repositório remoto
```