#include "JsonArgumentParser.hpp"

nlohmann::json parseArgument(std::string jsonArg){
    nlohmann::json parsedArgs;
    parsedArgs = nlohmann::parse(jsonArg);
    return parsedArgs;

}