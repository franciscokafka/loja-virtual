#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <string>
#include <vector>


 using namespace std;

 class Produto {
    private:
        
            string nome;
            string quantidade;
	    string categoria;
            string preco;
        
    public:
    
            Produto(); 
            Produto(string nome,string quantidade,string categoria,string preco);
     
            
     string get_nome();
     string get_categoria();
     string get_quantidade();
     string get_preco();

     void set_nome(string nome);
     void set_categoria(string nome);
     void set_quantidade(string quantidade);
     void set_preco(string preco);
     


};

