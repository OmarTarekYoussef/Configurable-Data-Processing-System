#include "../include/ProcessorFactory.hpp"
#include "../include/Processor.hpp"

using namespace std;

// Factory method to create and return a unique_ptr to a Processor subclass
// based on the provided 'type' string
unique_ptr<Processor> ProcessorFactory::createProcessor(const string& type) 
{
    // Check the 'type' string and create the corresponding Processor object
    if      (type == "Image")    return std::make_unique<ImageProcessor>();
    else if (type == "Text")     return std::make_unique<TextProcessor>();
    else if (type == "Numeric")  return std::make_unique<NumericProcessor>();
    else if (type == "Audio")    return std::make_unique<AudioProcessor>();
    else
    {
        // If the type is not recognized, throw a runtime error
        throw runtime_error("Unknown processor type: " + type);
    } 
}
