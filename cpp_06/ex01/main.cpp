
#include "Serializer.hpp"

int main()
{
	Data d;

	d.id = 42;
	d.name = "test";
	d.value = 3.14f;

	Data *ptr = &d;

	uintptr_t raw = Serializer::serialize(ptr);
	Data *restored = Serializer::deserialize(raw);

	std::cout << "Original ptr:   " << ptr << std::endl;
	std::cout << "Restored ptr:   " << restored << std::endl;

	if (ptr == restored)
		std::cout << "OK: pointers are equal" << std::endl;
	else
		std::cout << "KO: pointers differ" << std::endl;

	std::cout << "id: " << restored->id << std::endl;
	std::cout << "name: " << restored->name << std::endl;
	std::cout << "value: " << restored->value << std::endl;
}
