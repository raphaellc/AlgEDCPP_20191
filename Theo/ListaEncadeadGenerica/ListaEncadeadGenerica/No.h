#pragma once
template <class T>
class No
{
public:
	No();
	~No();
	T * info; //informa��o que ser� armazenada
	No<T> * proximo, * anterior; //ponteiro para o pr�ximo n� e para o anterior

};
template <class T>
No<T>::No()
{
	this->proximo = nullptr;
	this->anterior = nullptr;
}

template <class T>
No<T>::~No()
{
}