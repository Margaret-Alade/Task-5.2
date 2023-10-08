// Task-5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Triangle {
protected:
	int a, b, c;
	int A, B, C;
	std::string name;

public:
	Triangle() {
		a = 20; b = 30; c = 40;
		A = 50; B = 60; C = 70;
		name = "Треугольник";
	}
	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}

	std::string get_name() {
		return name;
	}
};
class Quadrangl {
protected:
	int a, b, c, d;
	int A, B, C, D;
	std::string name;
public:
	Quadrangl() {
		a = 10; b = 20; c = 30; d = 40;
		A = 50; B = 60; C = 70; D = 80;
		name = "Четырёхугольник";
	}
	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_d() {
		return d;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	int get_D() {
		return D;
	}
	std::string get_name() {
		return name;
	}
};


class Right_triangle : public Triangle {
public:
	Right_triangle() {
		C = 90;
		name = "Прямоугольный треугольник";
	}
};
class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle() {
		c = a;
		C = B;
		name = "Равнобедренный треугольник";
	}
};

class Equal_triangle : public Triangle {
public:
	Equal_triangle() {
		a = b; c = b;
		A = 60; B = A; C = A;
		name = "Равносторонний треугольник";
	}
};

class Restangle : public Quadrangl {
public:
	Restangle() {
		c = a; d = b;
		A = 90; B = A; C = A; D = A;
		name = "Прямоугольник";
	}
};

class Square : public Restangle {
public:
	Square() {
		d = a; b = a;
		name = "Квадрат";
	}
};

class Parallelogram : public Quadrangl {
public:
	Parallelogram() {
		c = a; d = b;
		C = A; D = B;
		name = "Параллелограм";
	}
};

class Rhomb : public Parallelogram {
public:
	Rhomb() {
		d = a; b = a;
		name = "Ромб";
	}
};

void print_info_triangle(Triangle* triangle) {
	std::cout << triangle->get_name() << ": \n";
	std::cout << "Стороны: a = " << triangle->get_a() << " b = " << triangle->get_b() << " c = " << triangle->get_c() << '\n';
	std::cout << "Углы: A = " << triangle->get_A() << " B = " << triangle->get_B() << " C = " << triangle->get_C() << '\n';
	std::cout << "\n";
}

void print_info_quadrangl(Quadrangl* quadrangl) {
	std::cout << quadrangl->get_name() << ": \n";
	std::cout << "Стороны: a = " << quadrangl->get_a() << " b = " << quadrangl->get_b() << " c = " << quadrangl->get_c() << " d = " << quadrangl->get_d() << '\n';
	std::cout << "Углы: A = " << quadrangl->get_A() << " B = " << quadrangl->get_B() << " C = " << quadrangl->get_C() << " D = " << quadrangl->get_D() << '\n';
	std::cout << "\n";
}










int main() {

	setlocale(LC_ALL,"Russian");
	system("chcp 1251");

	Triangle triangle;
	print_info_triangle(&triangle);
	Right_triangle right_triangle;
	print_info_triangle(&right_triangle);
	Isosceles_triangle isosceles_triangle;
	print_info_triangle(&isosceles_triangle);
	Equal_triangle equal_triangle;
	print_info_triangle(&equal_triangle);
	Quadrangl quadrangl;
	print_info_quadrangl(&quadrangl);
	Restangle restangle;
	print_info_quadrangl(&restangle);
	Square square;
	print_info_quadrangl(&square);
	Parallelogram parallelogram;
	print_info_quadrangl(&parallelogram);
	Rhomb rhomb;
	print_info_quadrangl(&rhomb);











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
