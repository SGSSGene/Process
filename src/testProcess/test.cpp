#include <process/Process.h>
#include <iostream>

int main(int argc, char** argv) {
	if (argc == 1) {
		process::Process p({argv[0], "para1"});
		if (p.getStatus() != 0) {
			std::cerr << "test failed" << std::endl;
			return -1;
		} else {
			std::cout << "test successful" << std::endl;
		}
		return 0;
	} else if (argc == 2 && std::string(argv[1]) == "para1") {
		return 0;
	}
	return -1;
}
