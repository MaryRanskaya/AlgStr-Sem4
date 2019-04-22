#include "stdafx.h"
#include "cassert"
#include "CppUnitTest.h"
#include "../project_1/class_1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TEST_PROJECT
{		
	TEST_CLASS(UnitTest_for_int)
	{
	private:
		List<int> list_int;
	public:
		TEST_METHOD(At_int)
		{
			list_int.push_front(90);
			list_int.push_front(80);
			list_int.push_front(70);
			
			Assert::IsTrue(list_int.at(1) == 70 && list_int.at(2) == 80 && list_int.at(3) == 90);
		}

		TEST_METHOD(IsEmpty_int_list_is_empty)
		{
			Assert::IsTrue(list_int.isEmpty());
		}

		TEST_METHOD(IsEmpty_int_list_is_not_empty)
		{
			list_int.push_front(90);
			list_int.push_front(80);
			list_int.push_front(70);

			Assert::IsTrue(!list_int.isEmpty());
		}

		TEST_METHOD(Get_size_int_list_is_empty)
		{
			Assert::IsTrue(list_int.get_size() == 0);
		}

		TEST_METHOD(Get_size_int_list_is_not_empty)
		{
			list_int.push_front(3);
			list_int.push_front(2);
			list_int.push_front(1);

			Assert::IsTrue(list_int.get_size() == 3);
		}

		TEST_METHOD(Push_back_int_list_is_empty)
		{
			list_int.push_back(1);

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 1 && list_int.get_size() == 1);
		}

		TEST_METHOD(Push_back_list_contain_many_elements)
		{
			list_int.push_back(1);
			list_int.push_back(2);
			list_int.push_back(3);

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 1 && list_int.at(2) == 2 && list_int.at(3) == 3 && list_int.get_size() == 3);
		}

		TEST_METHOD(Push_front_list_is_empty)
		{
			list_int.push_front(189);

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 189 && list_int.get_size() == 1);
		}

		TEST_METHOD(Push_front_int_list_contain_many_elements)
		{
			list_int.push_front(1);
			list_int.push_front(2);
			list_int.push_front(3);

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 3 && list_int.at(2) == 2 && list_int.at(3) == 1 && list_int.get_size() == 3);
		}

		TEST_METHOD(Set_int)
		{
			list_int.push_back(11);
			list_int.push_back(22);
			list_int.push_back(33);

			list_int.set(5, 2);

			Assert::IsTrue(list_int.at(2) == 5 && list_int.get_size() == 3);
		}

		TEST_METHOD(Pop_front_int_one_elem)
		{
			list_int.push_back(890);

			list_int.pop_front();

			Assert::IsTrue(list_int.isEmpty() && list_int.get_size() == 0);
		}

		TEST_METHOD(Pop_front_int_many_elements)
		{
			list_int.push_back(1);
			list_int.push_back(2);
			list_int.push_back(3);

			list_int.pop_front();

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 2 && list_int.at(2) == 3 && list_int.get_size() == 2);
		}

		TEST_METHOD(Pop_back_int_one_elem)
		{
			list_int.push_back(10);
	
			list_int.pop_back();

			Assert::IsTrue(list_int.isEmpty() && list_int.get_size() == 0);
		}

		TEST_METHOD(Pop_back_int_many_elements)
		{
			list_int.push_back(1);
			list_int.push_back(2);
			list_int.push_back(3);

			list_int.pop_back();

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 1 && list_int.at(2) == 2 && list_int.get_size() == 2);
		}

		TEST_METHOD(Insert_int_in_head)
		{
			list_int.push_back(5);
			list_int.push_back(6);

			list_int.insert(999, 1);
		
			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 999 && list_int.at(2) == 5 && list_int.at(3) == 6 && list_int.get_size() == 3);
		}

		TEST_METHOD(Insert_int_in_tail)
		{
			list_int.push_back(1);
			list_int.push_back(2);

			list_int.insert(999, 2);

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 1 && list_int.at(2) == 999 && list_int.at(3) == 2 && list_int.get_size() == 3);
		}

		TEST_METHOD(Remove_int_one_elem)
		{
			list_int.push_back(123);

			list_int.remove(1);

			Assert::IsTrue(list_int.isEmpty() && list_int.get_size() == 0);
		}

		TEST_METHOD(Remove_int_in_head)
		{
			list_int.push_back(5);
			list_int.push_back(6);

			list_int.remove(1);

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 6 && list_int.get_size() == 1);
		}

		TEST_METHOD(TestMethodForRemove_int_in_tail)
		{
			list_int.push_back(1);
			list_int.push_back(2);

			list_int.remove(2);

			Assert::IsTrue(!list_int.isEmpty() && list_int.at(1) == 1 && list_int.get_size() == 1);
		}

		TEST_METHOD(Clear_int)
		{
			list_int.push_front(11);
			list_int.push_front(12);
			list_int.push_front(13);

			list_int.clear();

			Assert::IsTrue(list_int.isEmpty() && list_int.get_size() == 0);
		}
	};

	TEST_CLASS(UnitTest_for_char)
	{
	private:
		List<char> list_char;
	public:
		TEST_METHOD(At_char)
		{
			list_char.push_front('A');
			list_char.push_front('B');

			Assert::IsTrue(list_char.at(1) == 'B' && list_char.at(2) == 'A');
		}

		TEST_METHOD(IsEmpty_char_list_is_empty)
		{
			Assert::IsTrue(list_char.isEmpty());
		}

		TEST_METHOD(IsEmpty_char_list_is_not_empty)
		{
			list_char.push_front('r');
			list_char.push_front('k');
			list_char.push_front('m');
			list_char.push_front('l');

			Assert::IsTrue(!list_char.isEmpty());
		}

		TEST_METHOD(Get_size_char_list_is_empty)
		{
			Assert::IsTrue(list_char.get_size() == 0);
		}

		TEST_METHOD(Get_size_list_char_is_not_empty)
		{
			list_char.push_front('+');
			list_char.push_front('-');

			Assert::IsTrue(list_char.get_size() == 2);
		}

		TEST_METHOD(Push_back_char_list_is_empty)
		{
			list_char.push_back('x');

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == 'x' && list_char.get_size() == 1);
		}

		TEST_METHOD(Push_back_char_list_contain_one_element)
		{
			list_char.push_back('c');
			list_char.push_back('v');
		
			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == 'c' && list_char.at(2) == 'v' && list_char.get_size() == 2);
		}

		TEST_METHOD(Push_back_char_list_contain_many_elements)
		{
			list_char.push_back('c');
			list_char.push_back('v');
			list_char.push_back('z');

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == 'c' && list_char.at(2) == 'v' && list_char.at(3) == 'z' && list_char.get_size() == 3);
		}

		TEST_METHOD(Push_front_char_list_is_empty)
		{
			list_char.push_front('N');

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == 'N' && list_char.get_size() == 1);
		}

		TEST_METHOD(Push_front_char_list_contain_many_elements)
		{
			list_char.push_front('Q');
			list_char.push_front('P');
			list_char.push_front('O');

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == 'O' && list_char.at(2) == 'P' && list_char.at(3) == 'Q' && list_char.get_size() == 3);
		}

		TEST_METHOD(Set_char_in_head)
		{
			list_char.push_back('*');
			list_char.push_back('-');
			list_char.push_back(')');
	
			list_char.set('^', 1);

			Assert::IsTrue(list_char.at(1) == '^' && list_char.get_size() == 3);
		}

		TEST_METHOD(Set_char_in_tail)
		{
			list_char.push_back('!');
			list_char.push_back('$');
			list_char.push_back('&');

			list_char.set('%', 3);

			Assert::IsTrue(list_char.at(3) == '%' && list_char.get_size() == 3);
		}

		TEST_METHOD(Set_char_in_center)
		{
			list_char.push_back('!');
			list_char.push_back('$');
			list_char.push_back('&');

			list_char.set('#', 2);

			Assert::IsTrue(list_char.at(2) == '#' && list_char.get_size() == 3);
		}

		TEST_METHOD(Pop_front_char_one_elem)
		{
			list_char.push_back('~');

			list_char.pop_front();

			Assert::IsTrue(list_char.isEmpty() && list_char.get_size() == 0);
		}

		TEST_METHOD(Pop_front_char_many_elements)
		{
			list_char.push_back('$');
			list_char.push_back('='); 
			list_char.push_back('-');

			list_char.pop_front();

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == '=' && list_char.at(2) == '-' && list_char.get_size() == 2);
		}

		TEST_METHOD(Pop_back_char_one_elem)
		{
			list_char.push_back('<');

			list_char.pop_back();

			Assert::IsTrue(list_char.isEmpty() && list_char.get_size() == 0);
		}

		TEST_METHOD(Pop_back_char_many_elements)
		{
			list_char.push_back(':');
			list_char.push_back(';');

			list_char.pop_back();

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == ':' && list_char.get_size() == 1);
		}

		TEST_METHOD(Insert_char_in_head)
		{
			list_char.push_back('-');
			list_char.push_back('_');

			list_char.insert('+', 1);

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == '+' && list_char.at(2) == '-' && list_char.at(3) == '_' && list_char.get_size() == 3);
		}

		TEST_METHOD(Insert_char_in_tail)
		{
			list_char.push_back('*');
			list_char.push_back('/');

			list_char.insert('@', 2);

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == '*' && list_char.at(2) == '@' && list_char.at(3) == '/' && list_char.get_size() == 3);
		}

		TEST_METHOD(Remove_char_one_elem)
		{
			list_char.push_back('F');

			list_char.remove(1);

			Assert::IsTrue(list_char.isEmpty() && list_char.get_size() == 0);
		}

		TEST_METHOD(Remove_char_in_head)
		{
			list_char.push_back('*');
			list_char.push_back('/');

			list_char.remove(1);

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == '/' && list_char.get_size() == 1);
		}

		TEST_METHOD(Remove_char_in_tail)
		{
			list_char.push_back('*');
			list_char.push_back('/');
			list_char.push_back('-');

			list_char.remove(3);

			Assert::IsTrue(!list_char.isEmpty() && list_char.at(1) == '*' && list_char.at(2) == '/' && list_char.get_size() == 2);
		}

		TEST_METHOD(Clear_char)
		{
			list_char.push_back('*');
			list_char.push_back('/');
			list_char.push_back('"');
			list_char.push_back('&');

			list_char.clear();

			Assert::IsTrue(list_char.isEmpty() && list_char.get_size() == 0);
		}
	};

	TEST_CLASS(UnitTest_for_float)
	{
	private:
		List<float> list_float;
	public:
		TEST_METHOD(At_float)
		{
			list_float.push_front(123.456);
			list_float.push_front(456.789);

			Assert::IsTrue(list_float.at(1) == (float)456.789 && list_float.at(2) == (float)123.456);
		}

		TEST_METHOD(IsEmpty_float_list_is_empty)
		{
			Assert::IsTrue(list_float.isEmpty());
		}

		TEST_METHOD(IsEmpty_float_list_is_not_empty)
		{
			list_float.push_front(56.78);
			list_float.push_front(78.98);
			list_float.push_front(24.45);

			Assert::IsTrue(!list_float.isEmpty());
		}

		TEST_METHOD(Get_size_float_list_is_empty)
		{
			Assert::IsTrue(list_float.get_size() == 0);
		}

		TEST_METHOD(Get_size_list_float_is_not_empty)
		{
			list_float.push_front(13.356);
			list_float.push_front(45.67);

			Assert::IsTrue(list_float.get_size() == 2);
		}

		TEST_METHOD(Push_back_float_list_is_empty)
		{
			list_float.push_back(11.6);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)11.6 && list_float.get_size() == 1);
		}

		TEST_METHOD(Push_back_float_list_contain_one_element)
		{
			list_float.push_back(13.356);
			list_float.push_back(45.67);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)13.356 && list_float.at(2) == (float)45.67 && list_float.get_size() == 2);
		}

		TEST_METHOD(Push_back_float_list_contain_many_elements)
		{
			list_float.push_back(789.6);
			list_float.push_back(98.43);
			list_float.push_back(143.67);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)789.6 && list_float.at(2) == (float)98.43 && list_float.at(3) == (float)143.67 && list_float.get_size() == 3);
		}

		TEST_METHOD(Push_front_float_list_is_empty)
		{
			list_float.push_front(47.3);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)47.3 && list_float.get_size() == 1);
		}

		TEST_METHOD(Push_front_float_list_contain_many_elements)
		{
			list_float.push_front(789.6);
			list_float.push_front(98.43);
			list_float.push_front(143.67);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)143.67 && list_float.at(2) == (float)98.43 && list_float.at(3) == (float)789.6 && list_float.get_size() == 3);
		}

		TEST_METHOD(Set_float_in_head)
		{
			list_float.push_back(54.6);
			list_float.push_back(986.34);
			list_float.push_back(1356.5);

			list_float.set(75.3, 1);

			Assert::IsTrue(list_float.at(1) == (float)75.3 && list_float.get_size() == 3);
		}

		TEST_METHOD(Set_float_in_tail)
		{
			list_float.push_back(789.6);
			list_float.push_back(98.43);
			list_float.push_back(143.67);

			list_float.set(33.5, 3);

			Assert::IsTrue(list_float.at(3) == (float)33.5 && list_float.get_size() == 3);
		}

		TEST_METHOD(Set_float_in_center)
		{
			list_float.push_back(789.6);
			list_float.push_back(98.43);
			list_float.push_back(143.67);

			list_float.set(89.2, 2);

			Assert::IsTrue(list_float.at(2) == (float)89.2 && list_float.get_size() == 3);
		}

		TEST_METHOD(Pop_front_float_one_elem)
		{
			list_float.push_back(67.44);

			list_float.pop_front();

			Assert::IsTrue(list_float.isEmpty() && list_float.get_size() == 0);
		}

		TEST_METHOD(Pop_front_float_many_elements)
		{
			list_float.push_back(789.6);
			list_float.push_back(98.43);
			list_float.push_back(143.67);

			list_float.pop_front();

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)98.43 && list_float.at(2) == (float)143.67 && list_float.get_size() == 2);
		}

		TEST_METHOD(Pop_back_float_one_elem)
		{
			list_float.push_back(583.98);

			list_float.pop_back();

			Assert::IsTrue(list_float.isEmpty() && list_float.get_size() == 0);
		}

		TEST_METHOD(Pop_back_float_many_elements)
		{
			list_float.push_back(89.75);
			list_float.push_back(48.23);

			list_float.pop_back();

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)89.75 && list_float.get_size() == 1);
		}

		TEST_METHOD(Insert_float_in_head)
		{
			list_float.push_back(89.75);
			list_float.push_back(48.23);

			list_float.insert(273.7, 1);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)273.7 && list_float.at(2) == (float)89.75 && list_float.at(3) == (float)48.23 && list_float.get_size() == 3);
		}

		TEST_METHOD(Insert_float_in_tail)
		{
			list_float.push_back(89.75);
			list_float.push_back(48.23);
			list_float.push_back(94.61);

			list_float.insert(34.6, 2);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)89.75 && list_float.at(2) == (float)34.6 && list_float.at(3) == (float)48.23 && list_float.get_size() == 4);
		}

		TEST_METHOD(Remove_float_one_elem)
		{
			list_float.push_back(56.3);

			list_float.remove(1);

			Assert::IsTrue(list_float.isEmpty() && list_float.get_size() == 0);
		}

		TEST_METHOD(Remove_float_in_head)
		{
			list_float.push_back(89.75);
			list_float.push_back(48.23);

			list_float.remove(1);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)48.23 && list_float.get_size() == 1);
		}

		TEST_METHOD(Remove_float_in_tail)
		{
			list_float.push_back(89.75);
			list_float.push_back(48.23);
			list_float.push_back(89.75);
			
			list_float.remove(3);

			Assert::IsTrue(!list_float.isEmpty() && list_float.at(1) == (float)89.75 && list_float.at(2) == (float)48.23 && list_float.get_size() == 2);
		}

		TEST_METHOD(Clear_float)
		{
			list_float.push_back(89.75);
			list_float.push_back(48.23);
			list_float.push_back(89.75);

			list_float.clear();

			Assert::IsTrue(list_float.isEmpty() && list_float.get_size() == 0);
		}
	};
}