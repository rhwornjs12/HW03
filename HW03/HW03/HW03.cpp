

#include <iostream>
#include <algorithm>



//-클래스의 이름은 SimpleVector라고 합니다.
//- 타입에 의존하지 않고 데이터를 받을수 있는 배열을 멤버변수로 갖습니다.
//- 생성자는 아래와 같이 구현 합니다.
//- 기본 생성자는 크기가 10인 배열을 만듭니다.
//- 숫자를 하나 받는 생성자는 해당 숫자에 해당되는 크기의 배열을 만듭니다.
//- 아래와 같은 멤버함수를 구현 합니다.
//- push_back  인자로 받은 원소를  맨 뒤에 추가 합니다.반환값은 없습니다.배열의 크기가 꽉 찼는데 원소가 더 들어올경우 아무 동작도 하지 않습니다.
//- pop_back은 벡터의 마지막 원소를 제거 합니다.만약 제거할 원소가 없다면 아무 동작도 하지 않으며, 인자 및 반환값은 없습니다.
//- size는 인자가 없고 현재 원소의 개수를 반환합니다.
//- capacity 현재 내부 배열의 크기를 반환합니다.

using namespace std;

template <typename T>
class simpleVecyor
{
private:
	T* data;
	int currentSize;
	int currentCapacity;

public:
	simpleVector()
	{
		deta = new T[10];
		currentSize = 0;
		currentCapacity = 10;
	}

    template <typename T>  
    class simpleVector  
    {  
    private:  
        T* data;  
        int currentSize;  
        int currentCapacity;  

    public:  
        simpleVector()  
        {  
            data = new T[10];  
            currentSize = 0;  
            currentCapacity = 10;  
        }  

        simpleVector(int capacity)  
        {  
            data = new T[capacity];  
            currentSize = 0;  
            currentCapacity = capacity;  
        }  

        ~simpleVector()  
        {  
            delete[] data;  
            data = nullptr;  
        }  

        void push_back(const T& value)  
        {  
            if (currentSize >= currentCapacity)  
            {  
                return;  
            }  

            data[currentSize] = value;  
            ++currentSize;  
        }  

        void pop_back()  
        {  
            if (currentSize > 0)  
            {  
                --currentSize;  
            }  
        }  

        int size() const  
        {  
            return currentSize;  
        }  

        int capacity() const  
        {  
            return currentCapacity;  
        }  
    };

	~simpleVector()
	{
		delete[] data;
		data = nullptr;
	}

	void push_back(T& value)
	{
		if (currentSize >= currentCapacity)
		{
			return;
		}

		data[currentSize] = value;
		++currentSize;
	}

	void pop_back()
	{
		--currentSize;
	}

	int size() const
	{
		return currentSize;
	}

	int capacity() const
	{
		return currentCapacity;
	}
};