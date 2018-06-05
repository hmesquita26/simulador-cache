#ifndef _MP_H_
#define _MP_H_

#include <iostream>
using std::ostream;
using std::istream;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

class Mp {
	protected:
		int bloco;
		vector<int> endereco;
		vector<int> conteudo;

	public:
		Mp();
		~Mp();

		int getBloco();
		vector<int> getEndereco();
		vector<int> getConteudo();

		void setBloco(int b);
		void setEndereco(vector<int> e);
		void setConteudo(vector<int> c);

		void inserirConteudo(int co);
		void inserirEndereco(int en);

		friend ostream& operator<<(ostream &os, Mp &m);

		friend istream& operator>>(istream &is, Mp &m);
};

#endif//_MP_H_
