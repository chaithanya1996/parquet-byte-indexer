#include "JsonArgumentParser.hpp"
#include <nlohmann/json.hpp>
#include<iostream>
#include <string>

using namespace nlohmann;

nlohmann::json parseArgument(char* jsonFile){
    nlohmann::json parsedArgs;
    std::string jsonFilePath(jsonFile);
    std::cout << jsonFilePath << std::endl;
    // std::ifstream i(jsonFilePath);
    // i >> parsedArgs;
    
    return parsedArgs;
}