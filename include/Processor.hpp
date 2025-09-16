#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <iostream>
#include <vector>
using namespace std;

// Abstract base class representing a generic Processor
class Processor
{
public:
    // Pure virtual function: must be overridden by derived classes
    // Processes a vector of strings as input data
    virtual void process(const vector<string>& data) const = 0;
};

// Derived class for processing text data
class TextProcessor : public Processor
{
public:
    // Override the base class process method
    void process(const vector<string>& data) const override;
};

// Derived class for processing numeric data
class NumericProcessor : public Processor
{
public:
    void process(const vector<string>& data) const override;
};

// Derived class for processing image data
class ImageProcessor : public Processor
{
public:
    void process(const vector<string>& data) const override;
};

// Derived class for processing audio data
class AudioProcessor : public Processor
{
public:
    void process(const vector<string>& data) const override;
};

#endif // PROCESSOR_HPP
