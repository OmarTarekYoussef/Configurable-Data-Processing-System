#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <map>       // For storing configuration options as key-value pairs
#include <string>    // For using std::string

using namespace std;

// Class to read and store configuration options from a file
class Configuration
{
private:
    // Map to hold option name (key) and its corresponding value
    map<string, string> options;

public:
    // Constructor that loads configuration options from the given file name
    Configuration(const string& fname);

    // Method to retrieve the value of a configuration option by its key
    // Throws an exception if the key does not exist
    const string& getOption(const string& key);
};

#endif // CONFIGURATION_HPP
