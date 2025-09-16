#ifndef PROCESSOR_FACTORY_HPP
#define PROCESSOR_FACTORY_HPP

#include "Processor.hpp"   // Include base Processor class definition
#include <memory>          // For std::unique_ptr
#include <string>          // For std::string

// Factory class to create Processor objects based on a type string
class ProcessorFactory { 
public: 
    // Static method that creates and returns a unique_ptr to a Processor
    // Takes a string 'type' that specifies the kind of Processor to create
    static unique_ptr<Processor> createProcessor(const string& type);

}; 

#endif // PROCESSOR_FACTORY_HPP
