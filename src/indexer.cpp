#include <iostream>
#include <string.h>
#include <arrow/api.h>
#include "util/JsonArgumentParser.hpp"


int main(int argc, char *argv[]){

    
        
    
    arrow::Status st;
    std::cout << argc << std::endl;
    // auto memMappedFile = arrow::io::MemoryMappedFile::Open(path,arrow::io::FileMode::type::READ);
    parseArgument(argv[1]);
    // Creating Memory pool to hold the Table chunks
    arrow::MemoryPool* pool = arrow::default_memory_pool();
    // std::shared_ptr<arrow::io::RandomAccessFile> input = memMappedFile.ValueOrDie();
    return 0;
}