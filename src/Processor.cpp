#include "../include/Processor.hpp"

// Implementation for TextProcessor
void TextProcessor::process(const vector<string>& data) const
{
    cout << "Processing Text Data:\n";
    for (const auto& item : data) {
        cout << "TextProcessor processing: " << item << " (interpreted as text data)\n";
    } 
}

// Implementation for NumericProcessor
void NumericProcessor::process(const vector<string>& data) const
{
    cout << "Processing Numeric Data:\n";  
    for (const auto& item : data) {
        cout << "NumericProcessor processing: " << item << " (interpreted as numeric data)\n";
    }
}

// Implementation for ImageProcessor
void ImageProcessor::process(const vector<string>& data) const
{
    cout << "Processing Image Data:\n";  
    for (const auto& item : data) {
        cout << "ImageProcessor processing: " << item << " (interpreted as image data)\n";
    }
}

// Implementation for AudioProcessor
void AudioProcessor::process(const vector<string>& data) const
{
    cout << "Processing Audio Data:\n";  
    for (const auto& item : data) {
        cout << "AudioProcessor processing: " << item << " (interpreted as audio data)\n";
    }
}
