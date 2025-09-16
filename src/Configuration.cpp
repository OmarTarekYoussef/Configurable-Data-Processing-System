#include "../include/Configuration.hpp"

#include <fstream>

// Constructor: reads configuration options from a file
Configuration::Configuration(const string& fname)
{
    ifstream infile(fname);  // Open the file for reading
    string line;
    
    if(infile.is_open())  // Check if the file was successfully opened
    {
        // Read the file line by line
        while(getline(infile,line))
        {
            // Skip lines starting with '#' (comments)
            if(line[0]=='#') continue;
            
            // Find the position of the '=' delimiter in the line
            auto i = line.find('=');
            if( i != string::npos )  // If '=' found in the line
            {
                // Extract option name (left of '=')
                string option = line.substr(0,i);
                // Extract option value (right of '=')
                string value = line.substr(i+1);

                // Trim leading whitespace from value
                size_t start = value.find_first_not_of(" \t\r\n");
                // Trim trailing whitespace from value
                size_t end = value.find_last_not_of(" \t\r\n");
                value = value.substr(start, end-start+1);

                // Store the option and its value in the map
                options[option] = value;
            }
        }
        infile.close();  // Close the file after reading
    }
    else
    {
        // Throw an error if the file cannot be opened
        throw std::runtime_error("File failed to open!"); 
    }
}

// Method to retrieve the value of a given configuration option by key
const string& Configuration::getOption(const string& key) 
{
    // Search for the key in the options map
    auto it = options.find(key);

    // If the key is not found, throw an error
    if(it == options.end())
        throw runtime_error("Configuration key not found: " + key);

    // Return the corresponding value
    return it->second;
}
