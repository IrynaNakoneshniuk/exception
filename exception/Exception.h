#pragma once
#include <iostream>
#include <exception>
using namespace std;
template<typename T>
class ExceptionSize :public exception{
private:
	T size;
public:
	ExceptionSize(char* msg, T size) : exception(msg){
		this->size = size;
	}
};

template<typename T>
class DataStay :public exception {
private:
	T data;
	string msg;
public:
	DataStay(T data,string msg) {
		this->data = data;
		this->msg = msg;
	} 
	T getDataStay() {
		return this->data;
	}
	string getMsg() { return this->msg; }
};

template<typename T>
class ExceptionPtr :public exception {
private:
	T *ptr;
	string  msg;
public:
	ExceptionPtr(string msg, T* ptr) {
		this->ptr = ptr;
		this->msg = msg;
	}
	T* getPtr() {
		return this->ptr;
	}
	string getMsg() { return this->msg; }
};
