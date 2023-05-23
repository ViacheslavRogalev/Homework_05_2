#include <iostream>
#include <windows.h>

class Figure
{
protected:
	int sides_count;
	std::string name;

public:
	Figure()
	{
		sides_count = 0;
		name = "������";
	}

	Figure(int sides_count, std::string name)
	{
		this->sides_count = sides_count;
		this->name = name;
	}

	std::string get_name()
	{
		return name;
	};

	int get_sides_count()
	{
		return sides_count;
	};
};

class Triangle : public Figure
{
public:

	int length_side_a;
	int length_side_b;
	int length_side_c;
	int value_angle_A;
	int value_angle_B;
	int value_angle_C;

	Triangle()
	{
		length_side_a = 10;
		length_side_b = 20;
		length_side_c = 30;
		value_angle_A = 50;
		value_angle_B = 60;
		value_angle_C = 70;
		sides_count = 3;
		name = "�����������:";
	}

	Triangle(int length_side_a, int length_side_b, int length_side_c,
		int value_angle_A, int value_angle_B, int value_angle_C)
	{
		this->length_side_a = length_side_a;
		this->length_side_b = length_side_b;
		this->length_side_c = length_side_c;
		this->value_angle_A = value_angle_A;
		this->value_angle_B = value_angle_B;
		this->value_angle_C = value_angle_C;
		sides_count = 3;
		name = "�����������";
	}

	int get_lenght_side_a()
	{
		return length_side_a;
	};

	int get_lenght_side_b()
	{
		return length_side_b;
	};

	int get_lenght_side_c()
	{
		return length_side_c;
	};

	int get_value_angle_A()
	{
		return value_angle_A;
	};

	int get_value_angle_B()
	{
		return value_angle_B;
	};

	int get_value_angle_C()
	{
		return value_angle_C;
	};

	void print_info()
	{
		std::cout << get_name() << std::endl;
		std::cout << "�������: " << " a=" << get_lenght_side_a() << " b=" << get_lenght_side_b() << " c=" << get_lenght_side_c() << std::endl;
		std::cout << "����: " << " A=" << get_value_angle_A() << " B=" << get_value_angle_B() << " C=" << get_value_angle_C() << std::endl << std::endl;
	}
};

class Right_triangle : public Triangle
{
public:
    Right_triangle()
    {
        value_angle_C = 90;
        name = "������������� �����������:";
    }

    Right_triangle(int length_side_a, int length_side_b, int length_side_c,
        int value_angle_A, int value_angle_B)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        this->length_side_c = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        value_angle_C = 90;
        name = "������������� �����������";
    }
};

class Isosceles_triangle : public Triangle 
{
public:
    Isosceles_triangle()
    {
        length_side_a = 10;
        length_side_c = 10;
        value_angle_A = 50;
        value_angle_C = 50;
        name = "�������������� �����������:";
    }

    Isosceles_triangle(int length_side_a, int length_side_b,
        int value_angle_A, int value_angle_B)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        length_side_c = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        value_angle_C = value_angle_A;
        name = "�������������� �����������";
    }
};

class Equilateral_triangle : public Triangle 
{
public:
    Equilateral_triangle()
    {
        length_side_a = 30;
        length_side_b = 30;
        length_side_c = 30;
        value_angle_A = 60;
        value_angle_B = 60;
        value_angle_C = 60;
        name = "�������������� �����������:";
    }

    Equilateral_triangle(int length_side_a)
    {
        this->length_side_a = length_side_a;
        length_side_b = length_side_a;
        length_side_c = length_side_b;
        value_angle_A = 60;
        value_angle_B = value_angle_A;
        value_angle_C = value_angle_B;
        name = "�������������� �����������";
    }
};

class Quadrangle : public Triangle
{
public:
    int length_side_d;
    int value_angle_D;

    Quadrangle()
    {
        length_side_a = 10;
        length_side_b = 20;
        length_side_c = 30;
        length_side_d = 40;
        value_angle_A = 50;
        value_angle_B = 60;
        value_angle_C = 70;
        value_angle_D = 80;
        name = "��������������:";
    }

    Quadrangle(int length_side_a, int length_side_b, int length_side_c, int length_side_d,
        int value_angle_A, int value_angle_B, int value_angle_C, int value_angle_D)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        this->length_side_c = length_side_c;
        this->length_side_d = length_side_d;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        this->value_angle_C = value_angle_C;
        this->value_angle_D = value_angle_D;
        sides_count = 4;
        name = "��������������";
    }

    int get_lenght_side_d()
    {
        return length_side_d;
    };

    int get_value_angle_D()
    {
        return value_angle_D;
    };

    void print_info() {
        std::cout << get_name() << std::endl;
        std::cout << "�������: " << " a=" << get_lenght_side_a() << " b=" << get_lenght_side_b() << " c=" << get_lenght_side_c() <<
            " d = " << get_lenght_side_d() << std::endl;
        std::cout << "����: " << " �=" << get_value_angle_A() << " B=" << get_value_angle_B() << " C=" << get_value_angle_C() <<
            " D = " << get_value_angle_D() << std::endl << std::endl;
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram()
    {
        length_side_a = 20;
        length_side_b = 30;
        length_side_c = 20;
        length_side_d = 30;
        value_angle_A = 30;
        value_angle_B = 40;
        value_angle_C = 30;
        value_angle_D = 40;
        sides_count = 4;
        name = "��������������:";
    }

    Parallelogram(int length_side_a, int length_side_b,
        int value_angle_A, int value_angle_B)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        length_side_c = length_side_a;
        length_side_d = length_side_b;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        value_angle_C = value_angle_A;
        value_angle_D = value_angle_B;
        sides_count = 4;
        name = "��������������";
    }
};

class Rectangle1 : public Parallelogram
{
public:
    Rectangle1()
    {
        length_side_a = 10;
        length_side_b = 20;
        length_side_c = 10;
        length_side_d = 20;
        value_angle_A = 90;
        value_angle_B = 90;
        value_angle_C = 90;
        value_angle_D = 90;
        name = "�������������:";
    }

    Rectangle1(int length_side_a, int length_side_b)
    {
        this->length_side_a = length_side_a;
        length_side_b = length_side_b;
        length_side_c = length_side_a;
        length_side_d = length_side_b;
        this->value_angle_A = 90;
        value_angle_B = value_angle_A;
        value_angle_C = value_angle_B;
        value_angle_D = value_angle_C;
        sides_count = 4;
        name = "�������������";
    }
};

class Rhombus : public Parallelogram
{
public:
    Rhombus()
    {
        length_side_a = 30;
        length_side_b = 30;
        length_side_c = 30;
        length_side_d = 30;
        value_angle_A = 30;
        value_angle_B = 40;
        value_angle_C = 30;
        value_angle_D = 40;
        name = "����:";
    }

    Rhombus(int length_side_a, int value_angle_A, int value_angle_B)
    {
        this->length_side_a = length_side_a;
        length_side_b = length_side_a;
        length_side_c = length_side_b;
        length_side_d = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        value_angle_C = value_angle_A;
        value_angle_D = value_angle_B;
        sides_count = 4;
        name = "����";
    }
};

class Square : public Quadrangle
{
public:
    Square()
    {
        length_side_a = 20;
        length_side_b = 20;
        length_side_c = 20;
        length_side_d = 20;
        value_angle_A = 90;
        value_angle_B = 90;
        value_angle_C = 90;
        value_angle_D = 90;
        name = "�������:";
    }

    Square(int length_side_a)
    {
        this->length_side_a = length_side_a;
        length_side_b = length_side_a;
        length_side_c = length_side_b;
        length_side_d = length_side_c;
        value_angle_A = 90;
        value_angle_B = value_angle_A;
        value_angle_C = value_angle_B;
        value_angle_D = value_angle_C;
        sides_count = 4;
        name = "�������";
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    //������ �����������
    Triangle tr1;
    Triangle* par_tr1 = &tr1;
    par_tr1->print_info();

    //������ ������������� �����������
    Right_triangle rt1;
    Right_triangle* par_rt1 = &rt1;
    par_rt1->print_info();

    //������ �������������� �����������
    Isosceles_triangle itr1;
    Isosceles_triangle* par_itr1 = &itr1;
    par_itr1->print_info();

    //������ �������������� �����������
    Equilateral_triangle etr1;
    Equilateral_triangle* par_etr1 = &etr1;
    par_etr1->print_info();

    //������ ��������������
    Quadrangle qv1;
    Quadrangle* par_qv1 = &qv1;
    par_qv1->print_info();

    //������ �������������
    Rectangle1 rct;
    Rectangle1* par_rct = &rct;
    par_rct->print_info();

    //������ �������
    Square sq1;
    Square* par_sq1 = &sq1;
    par_sq1->print_info();

    //������ ��������������
    Parallelogram prl1;
    Parallelogram* par_prl1 = &prl1;
    par_prl1->print_info();

    //������ ����
    Rhombus rh1;
    Rhombus* par_rh1 = &rh1;
    par_rh1->print_info();
}