#include <iostream>
void bot (const std::string&);

int main() {
    std::cout << "Hello, Enter The nike url for the shoe" << std::endl;

    std::string shoe_url;
    /// Must be a nike shoe url
    std::cin >> shoe_url;

     bot(shoe_url);

    return 0;
}


void bot (const std::string& shoe_url)
{


    std::cout << shoe_url << std::endl;

    std::cout << "Thanks" << std::endl;
}

