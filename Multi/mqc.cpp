#include <SlyvQCol.hpp>
#include "mcppi.hpp"

int main() {
	for (auto lng:l) {
		QCol->Doing(lng.first,lng.second);
	}
	QCol->Reset();
	return 0;
}
