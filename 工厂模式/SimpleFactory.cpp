//简单工厂模式
//定义：定义一个用于创建对象的接口，让子类决定实例化哪一个类。工厂方法使一个类的实例化延迟到其子类。
class ICube
{
public:
	virtual float GetLength() = 0;
	virtual float GetWidth() = 0;
	virtual float GetHeight() = 0;
};

class Cube : public ICube
{
public:
	Cube(float length, float width, float height) : m_length(length), m_width(width), m_height(height){}
	float GetLength() override { return m_length; }
	float GetWidth() override { return m_width; }
	float GetHeight() override { return m_height; }

protected:
	float m_length;
	float m_width;
	float m_height;
};

class CubeFactory
{
public:
	static ICube* MakeCube(float length, float width, float height)
	{
		return new Cube(length, width, height);
	}
};

int main()
{
	ICube* cube = CubeFactory::MakeCube(10, 20, 30);
	cout << "length:" << cube->GetLength() << endl;
	cout << "width:" << cube->GetWidth() << endl;
	cout << "height:" << cube->GetHeight() << endl;
	return 0;
}