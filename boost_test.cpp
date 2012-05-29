#include <iostream>
#include <stdlib.h>

#include <boost/filesystem.hpp>

int main(int argc, char** argv)
{
	namespace bf = boost::filesystem;
	bf::path hosts_file("/etc/hosts");

	if(!bf::exists(hosts_file)) {
		std::cout << hosts_file << ": does not exist.\n";
	} else {
		std::cout << hosts_file << ": exists.\n";
	}

	return EXIT_SUCCESS;
}
