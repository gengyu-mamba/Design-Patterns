//单例模式
//定义：确保某一个类只有一个实例，而且自行实例化并向整个系统提供这个实例

class Singleton
{
private:
	Singleton(){}

public:
	//获取实例对象
	static Singleton* GetInstance()
	{
		static Singleton* instance;
		return instance;
	}
	//类中其他方法，尽量是static
	static void dosomething(){}
};

int main()
{
	Singleton* singleton1 = Singleton::GetInstance();
	Singleton* singleton2 = Singleton::GetInstance();

	assert(singleton1 == singleton2); //指向同一个对象
	return 0;
}