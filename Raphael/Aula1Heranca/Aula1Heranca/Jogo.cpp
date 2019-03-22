#include "Jogo.h"



void Jogo::definePersonagem(Personagem * p)
{
	this->personagem = p;
}

Jogo::Jogo()
{
}


Jogo::~Jogo()
{
}

void Jogo::escolhePersonagem(int per)
{
	if (per == 1)
		definePersonagem(new Mago());
	if (per == 2)
		definePersonagem(new Guerreiro());
}

Personagem * Jogo::obterPersonagem()
{
	return this->personagem;
}
