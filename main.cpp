#include <string>
#include "QTimer.h"

int main(int argc, char *argv[]) {
	if(argc < 2) {
		std::cout << "Usage: qtimer program [args..]" << std::endl;
		return 0;
	}
	
	std::string callstr(argv[1]);
	
	for(int i=2; i < argc; i++) {
		callstr += " " + std::string(argv[i]);
	}

	QTimer qt = QTimer();

	qt.start();
	std::system(callstr.c_str());
	qt.stop();

	return 0;
}
