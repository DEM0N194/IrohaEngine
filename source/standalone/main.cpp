#include <greeter/greeter.h>
#include <print>

int main() {
	std::println("Hello from standalone!");
	std::println("{}", Iroha::getGreeting());
	return 0;
}
