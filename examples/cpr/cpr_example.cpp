#include <iostream>
#include <cpr/cpr.h>

int main(int ac, char** av) {
    const char* key_c = getenv("OPENAI_API_KEY");
    std::string key;
    if (key_c == nullptr) {
        std::cin >> key;
    } else {
        key = key_c;
    }
    std::cout << "OPENAI_API_KEY: " << key << std::endl;
    cpr::Response r = 
        cpr::Get(cpr::Url{"https://api.openai.com/v1/engines"},
                 cpr::Header{{"Authorization", "Bearer " + key}});    
    r.status_code;                  // 200
    r.header["content-type"];       // application/json; charset=utf-8
    r.text;                         // JSON text string
    std::cout << r.status_code << std::endl;
    std::cout << r.header["content-type"] << std::endl;
    std::cout << r.text << std::endl;
    return 0;
}