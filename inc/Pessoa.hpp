#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <string>

using namespace std;
class Pessoa{
        private:
            string nome_pessoa="";
            string email="";
            string cpf="";
 
        public:
            Pessoa();

            string get_nome_pessoa();
            void set_nome_pessoa( string nome_pessoa);
            string get_email();
            void set_email(string email);
            string get_cpf();
            void set_cpf(string cpf);
        

};
#endif