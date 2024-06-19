#include <iostream>

using namespace std;

template<class T>
class A {
public:
	T a;
	A(T a) : a(a) {}
	A() {}
	T fun(T a);
	void print();
};

class B :public A<int> {

};



int main() {

	A<int> a(5);
	a.print();

}

template<typename T>
T A<T>::fun(T a) {
	return a;
}

template<class T>
void A<T>::print() {
	cout << a << endl;
}
