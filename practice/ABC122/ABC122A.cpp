    #include <iostream>
    #include <string>
     
     
    int main()
    {
    	std::string c;
    	std::cin >> c;
    	if (c == "A") { std::cout << "T" << std::endl; }
    	else if (c == "T") { std::cout << "A" << std::endl; }
    	else if (c == "C") { std::cout << "G" << std::endl; }
    	else { std::cout << "C" << std::endl; }
     
    	return 0;
    }