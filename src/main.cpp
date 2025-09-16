#include "../include/ProcessorFactory.hpp" 
#include "../include/Configuration.hpp" 
#include <iostream> 
#include <vector> 
 
using namespace std;

int main() { 
    try { 
        // Load configuration settings from file
        Configuration config("config/settings.txt"); 
        
        // Retrieve the processor type from the configuration
        auto processorType = config.getOption("Processor.Options.Type"); 
        
        // Create the appropriate processor using the factory
        auto processor = ProcessorFactory::createProcessor(processorType); 
 
        // Example data to process
        vector<string> data = {"Sample1", "Sample2", "Sample3"}; 
        
        // Invoke the process method on the selected processor
        processor->process(data); 

    } catch (const exception& e) { 
        // Catch and display any runtime errors
        cerr << "Error: " << e.what() << '\n'; 
    } 
 
    return 0; 
}
