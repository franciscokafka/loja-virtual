#include "Produto.hpp"
#include <iostream>
#include <string>
#include <vector>


Produto::Produto(){
	nome = "";
	categoria = "";
	quantidade = "";
	preco = "";
	
}
Produto::Produto(string nome,string quantidade, string categoria,string preco){
	set_nome(nome);
	set_quantidade(quantidade);
	set_categoria(categoria);
	set_preco(preco);
}
string Produto::get_nome(){
	return nome;
}
string Produto::get_categoria(){
	return categoria;
}
string Produto::get_quantidade(){
	return quantidade;
}
string Produto::get_preco(){
	return preco;
}
void Produto::set_preco(string preco){
	this->preco=preco;
}
void Produto::set_nome(string nome){
	this->nome=nome;
}
void Produto::set_categoria(string categoria){
	this->categoria = categoria;
}
void Produto::set_quantidade(string quantidade){
	this->quantidade = quantidade;
}
