
#include <iostream>
int packet = 1;
void swap(int& parameterX, int& parameterY)
{
	int temporary = parameterX;

	parameterX = parameterY;

	parameterY = temporary;

}

int main()
{
#pragma region 스트림
	//	//  시간의 흐음에 따라 연속정으로 발생하는 데이터의 흐름입니다
		// cout 은 concole out 의 줄인말 
		std::cout << "series :";
		int count = 0;
		
		std::cin >> count;
		for (int i = 0; i < count; i++)
		{
			std::cout << "Playstatoin"<<i<< std:: endl;
			
		}
	
	//	// 스트림은 운영 체제에 의해 생성 되며, 스트림 자체에 버퍼라는 
	//	// 임시 메모리 공간이 존재 합니다
#pragma endregion

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데
	// 사용하는 연산자 입니다

	// int packet = 100;
	// 
	// std::cout << "packet 지역 변수의 값:"<< packet << std ::endl;
	// std::cout << "packet 전역 변수의 값" << ::packet << std::endl;
	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
	// 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을
	// 사용하는 범위 규칙이 존재 하기 때문에 전역 변수가 호출 되지 않습니다
#pragma endregion

#pragma region 참조자
	// 하나의 변수에 또 다른 이름을 지정하는 지정자 입니다

	// int x = 10; 
	// int y = 20;
	// swap(x, y);
	// std::cout << "x:" << x << std::endl;
	// std::cout << "y:" << y  << std::endl;
#pragma endregion

#pragma region 동적 할당
	// int* pointer = new int;
	// *pointer = 10;
	// std::cout << "pointer 변수가 가리키는 값:" << *pointer << std::endl;
	// delete pointer;
	// int* pointer = new int[5];
	// 
	// pointer[0] = 10;
	// pointer[1] = 20;
	// pointer[2] = 30;
	// pointer[3] = 40;
	// pointer[4] = 50;
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << pointer[i] << '\n';
	// }
	// 
	// delete[] pointer;
#pragma endregion



}

