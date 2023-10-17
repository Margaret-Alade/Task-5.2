// Task-5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;
	std::string name;
public:
	Figure() {
		a = 0; b = 0; c = 0; d = 0;
		A = 0; B = 0; C = 0; D = 0;
		name = "Фигура";
	}
	Figure(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		name = "Фигура";
	}
	virtual void print_info(Figure* figure) {
		std::cout << name << ": \n";
		std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << '\n';
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << '\n';
	}
};


class Triangle : public Figure {
public:
	Triangle() {
		name = "Треугольник";
	}
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		name = "Треугольник";
	}
	void print_info(Figure* figure) override {
		std::cout << name << ": \n";
		std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << '\n';
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << '\n';
	}
};


class Quadrangl : public Figure {
public:
	Quadrangl() {
		name = "Четырёхугольник";
	}
	Quadrangl(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		name = "Четырёхугольник";
	}
	void print_info(Figure* figure) override {
		std::cout << name << ": \n";
		std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << '\n';
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << '\n';
	}
};


class Right_triangle : public Triangle {
public:
	Right_triangle() {
		C = 90;
		name = "Прямоугольный треугольник";
	}
	Right_triangle(int a, int b, int c, int A, int B) {
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B;
		C = 90;
		name = "Прямоугольный треугольник";
	}
};


class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle() {
		name = "Равнобедренный треугольник";
	}
	Isosceles_triangle(int a, int b, int A, int B) {
		this->a = a; this->b = b;
		this->A = A; this->B = B;
		c = a;
		C = B;
		name = "Равнобедренный треугольник";
	}
};


class Equal_triangle : public Triangle {
public:
	Equal_triangle() {
		A = 60; B = A; C = A;
		name = "Равносторонний треугольник";
	}
	Equal_triangle(int b) {
		this->b = b;
		a = b; c = b;
		A = 60; B = A; C = A;
		name = "Равносторонний треугольник";
	}
};


class Restangle : public Quadrangl {
public:
	Restangle() {
		A = 90; B = A; C = A; D = A;
		name = "Прямоугольник";
	}
	Restangle(int a, int b) {
		this->a = a; this->b = b;
		c = a; d = b;
		A = 90; B = A; C = A; D = A;
		name = "Прямоугольник";
	}
};


class Square : public Restangle {
public:
	Square() {
		name = "Квадрат";
	}
	Square(int a) {
		this->a = a;
		c = a; d = a; b = a;
		name = "Квадрат";
	}
};


class Parallelogram : public Quadrangl {
public:
	Parallelogram() {
		name = "Параллелограм";
	}
	Parallelogram(int a, int b, int A, int B) {
		this->a = a; this->b = b;
		this->A = A; this->B = B;
		c = a; d = b;
		C = A; D = B;
		name = "Параллелограм";
	}
};


class Rhomb : public Parallelogram {
public:
	Rhomb() {
		name = "Ромб";
	}
	Rhomb(int a, int A, int B) {
		this->a = a;
		this->A = A; this->B = B;
		c = a; d = a; b = a;
		C = A; D = B;
		name = "Ромб";
	}
};


int main() {

	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	Triangle triangle{ 10, 20, 30, 50, 60, 70 };
	triangle.print_info(&triangle);
	Right_triangle right_triangle{ 10, 20, 30, 40, 50 };
	right_triangle.print_info(&right_triangle);
	Isosceles_triangle isosceles_triangle{ 10, 20, 50, 60 };
	isosceles_triangle.print_info(&isosceles_triangle);
	Equal_triangle equal_triangle{ 30 };
	equal_triangle.print_info(&equal_triangle);
	Quadrangl quadrangl{ 10, 20, 30, 40, 50, 60, 70, 80 };
	quadrangl.print_info(&quadrangl);
	Restangle restangle{ 10,20 };
	restangle.print_info(&restangle);
	Square square{ 20 };
	square.print_info(&square);
	Parallelogram parallelogram{ 20,30,30,40 };
	parallelogram.print_info(&parallelogram);
	Rhomb rhomb{ 30, 30, 40 };
	rhomb.print_info(&rhomb);












	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
