// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

#include <cpr/cpr.h>

//void perform_request(const std::string& command) {
//    if (command == "get") {
//        auto response = cpr::Get(cpr::Url{ "https://httpbin.org/get" });
//        std::cout << "Response code: " << response.status_code << "\n";
//        std::cout << "Response body: " << response.text << std::endl;
//    }
//    else if (command == "post") {
//        auto response = cpr::Post(cpr::Url{ "https://httpbin.org/post" },
//            cpr::Body{ "{\"key\":\"value\"}" },
//            cpr::Header{ {"Content-Type", "application/json"} });
//        std::cout << "Response code: " << response.status_code << "\n";
//        std::cout << "Response body: " << response.text << std::endl;
//    }
//    else if (command == "put") {
//        auto response = cpr::Put(cpr::Url{ "https://httpbin.org/put" },
//            cpr::Body{ "{\"key\":\"value\"}" },
//            cpr::Header{ {"Content-Type", "application/json"} });
//        std::cout << "Response code: " << response.status_code << "\n";
//        std::cout << "Response body: " << response.text << std::endl;
//    }
//    else if (command == "delete") {
//        auto response = cpr::Delete(cpr::Url{ "https://httpbin.org/delete" });
//        std::cout << "Response code: " << response.status_code << "\n";
//        std::cout << "Response body: " << response.text << std::endl;
//    }
//    else if (command == "patch") {
//        auto response = cpr::Patch(cpr::Url{ "https://httpbin.org/patch" },
//            cpr::Body{ "{\"key\":\"value\"}" },
//            cpr::Header{ {"Content-Type", "application/json"} });
//        std::cout << "Response code: " << response.status_code << "\n";
//        std::cout << "Response body: " << response.text << std::endl;
//    }
//    else {
//        std::cout << "Unknown command: " << command << std::endl;
//    }
//}
//
//int main() {
//    std::string command;
//
//    std::cout << "Available commands: get, post, put, delete, patch, exit\n";
//    while (true) {
//        std::cout << "Enter command: ";
//        std::getline(std::cin, command);
//
//        if (command == "exit") {
//            std::cout << "Exiting..." << std::endl;
//            break;
//        }
//
//        perform_request(command);
//    }
//
//    return 0;
//}

//int main() {
//
//    cpr::Response r = cpr::Get(cpr::Url{ "https://httpbin.org/html" },
//        cpr::Header{ {"Accept", "text/html"} });
//
//
//    if (r.status_code != 200) {
//        std::cerr << "Ошибка: " << r.status_code << std::endl;
//        return 1;
//    }
//
//
//    std::string body = r.text;
//    std::size_t start = body.find("<h1>");
//    std::size_t end = body.find("</h1>", start);
//
//    if (start != std::string::npos && end != std::string::npos) {
//
//        start += 4;
//        std::string title = body.substr(start, end - start);
//        std::cout << "Заголовок статьи: " << title << std::endl;
//    }
//    else {
//        std::cout << "Заголовок не найден." << std::endl;
//    }
//
//    return 0;
//}

