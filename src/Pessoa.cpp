#include "Pessoa.hpp"
#include <iostream>
#include <string>

Pessoa::Pessoa(){
    nome_pessoa="";
    email= "";
    cpf="";
}
string Pessoa::get_nome_pessoa(){
    return nome_pessoa;
}
void Pessoa::set_nome_pessoa(string nome_pessoa){
    this->nome_pessoa = nome_pessoa;
}
string Pessoa::get_email(){
    return email;
}
void Pessoa::set_email(string email){
    this->email=email;
}
string Pessoa::get_cpf(){
    return cpf;
}
void Pessoa::set_cpf(string cpf){
    this->cpf=cpf;
}


