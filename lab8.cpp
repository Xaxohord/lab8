#include <iostream>
#include <cassert>
#include "matrix.hpp"

using mtmath::Mat22d;
using mtmath::Mat33i;
using mtmath::Vec2d;



int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	/*Mat33i A({{
			 {1,1,1},
			 {1,1,1},
			 {9,11,-1},
		} });
		*/

		/*Mat33i B({ {
			 {-1,2,6},
			 {3,4,2},
			 {9,11,-1},
		} });
		*/
	std::cout << "Тест работы нахождения определителя матрицы A: " << endl;
	{
		Mat33i A({ {
			 {1,2,3},
			 {2,4,12},
			 {9,11,5},
		} });
		try
		{
			std::cout << A.determ() << endl;
			std::cout << "After inv in main" << std::endl;
		}
		catch (const std::bad_alloc& e)
		{
			std::cerr << "BAD ALLOC!!!! " << e.what() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}


	cout << "-----------------: " << endl;
	std::cout << "Тест работы нахождения обратной матрицы A (3 на 3): " << endl;
	{
		Mat33i A({ {
			 {1,2,3},
			 {2,4,12},
			 {9,11,5},
		} });
		try
		{
			auto q = A.inv();
			std::cout << q << endl;
			std::cout << "After inv in main" << std::endl;
		}
		catch (const std::bad_alloc& e)
		{
			std::cerr << "BAD ALLOC!!!! " << e.what() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	cout << "-----------------: " << endl;
	std::cout << "Тест работы нахождения обратной матрицы A (2 на 2): " << endl;
	{
		Mat22d B({ {
			 {1,2},
			 {2,5},
		} });
		try
		{
			auto q = B.inv();
			std::cout << q << endl;
			std::cout << "After inv in main" << std::endl;
		}
		catch (const std::bad_alloc& e)
		{
			std::cerr << "BAD ALLOC!!!! " << e.what() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	cout << "Тест работы нахождения транспонированной матрицы А: " << endl;
	{
		Mat33i A({ {
			 {1,2,3},
			 {2,4,12},
			 {9,11,5},
		} });
		try
		{
			std::cout << A.trans() << endl;
			std::cout << "After inv in main" << std::endl;
		}
		catch (const std::bad_alloc& e)
		{
			std::cerr << "BAD ALLOC!!!! " << e.what() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	//auto q = A.inv();
	//cout << q << endl;
	/*
	cout << "-----------------: " << endl;
	cout << "Матрица А - B: " << endl;
	cout << A - B << endl;
	cout << "-----------------: " << endl;
	cout << "Транспонировання матрица: " << endl;
	cout << A.trans() << endl;
	//setlocale(LC_ALL, "Russian");

	*/
	system("pause");
	return 0;
}