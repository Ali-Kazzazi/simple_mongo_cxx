#include <iostream>

#include <bsoncxx/json.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>

int main() {

	mongocxx::instance instance;
	mongocxx::uri uri("mongodb://localhost:27017");
	mongocxx::client client(uri);

	auto db = client["mongoTestDB"];
	auto collection = db["Test"];

	try {
		mongocxx::cursor cursor = collection.find({});

		for (auto& doc : cursor) {
			std::cout << bsoncxx::to_json(doc) << std::endl;
		}
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
