#include <doctest/doctest.h>
#include <greeter/greeter.h>

TEST_CASE("Greeter") {
	CHECK(Iroha::getGreeting() == "Hello from engine!");
}
