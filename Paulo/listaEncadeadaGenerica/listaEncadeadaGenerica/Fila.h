#pragma once
#include "Lista.h"
template <class T>
class Fila
{
public:
	Fila();
	~Fila();
	bool *inserirElementoFila(T * elemento); //true - sucesso; false - falha
	T * removerPrimeiroFila(); //Elemento - sucesso; nullptr - falha | RemoveNóLista
	T * obterPrimeiroFila(); //Elemento - sucesso; nullptr - falha | NãoRemoveNóLista
	T * removerUltimoFila(); //Elemento - sucesso; nullptr - falha | RemoveNóLista
	T * obterUltimoFila(); //Elemento - sucesso; nullptr - falha | NãoRemoveNóLista

private:
	Lista<T> fila = new Lista<T>
};

template<class T>
inline Fila<T>::Fila()
{
}

template<class T>
inline Fila<T>::~Fila()
{
}

template <class T>
bool Fila<T>::inserirElementoFila(T * elemento) {
	fila->insereFimLista(elemento);
	return true;
}

template <class T>
T * Fila<T>::removerPrimeiroFila() {
	T * primElemento = fila->obtemPrimeiroElemento();
	fila->removerPrimeiroNo();
	return primElemento;
}

template <class T>
T * Fila<T>::obterPrimeiroFila() {
	return fila->obtemPrimeiroElemento();
}

template <class T>
T * Fila<T>::removerUltimoFila() {
	T * ultimoElemento = fila->obterUltimoElemento();
	fila->removeUltimoNo();
	return ultimoElemento;
}

template <class T>
T * Fila<T>::obterUltimoFila() {
	return fila->obterUltimoElemento();
}