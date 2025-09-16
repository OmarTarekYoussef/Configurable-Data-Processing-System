# Configurable-Data-Processing-System
This project implements a modular, extensible, and configuration-driven data processing system in modern C++. It supports multiple processor types selected at runtime based on a user-defined configuration file.

By combining polymorphism, the factory design pattern, and template-based processing, this system cleanly separates configuration parsing, processor logic, and execution — making it easy to extend and maintain.

🚀 Key Features
1. 📄 Dynamic Configuration Parsing
Reads a configuration file (settings.txt)

Supports nested key structure using dot (.) notation (e.g., processor.type = text)

Parses settings into a flexible internal format

Dynamically dispatches processor creation based on configuration

2. 🔌 Processor Abstraction
Defines a base class Processor with a uniform interface

Implements specialized processors:

TextProcessor

NumericProcessor

ImageProcessor

AudioProcessor

Allows runtime polymorphism to switch between behaviors seamlessly

3. 🏭 Factory Pattern
Implements ProcessorFactory class

Abstracts object creation based on configuration values

Supports easy registration of new processor types

4. 🧰 Template-Based Processing
Uses C++ templates to process collections of input data (std::vector, etc.)

Enables reuse of generic logic across processor types

5. 🛡️ Robust Exception Handling
Gracefully handles:

Missing or malformed configuration files

Unsupported or invalid processor types

Runtime errors during processing

🧭 Project Workflow
1. Configuration File
Prepare a file named settings.txt:
processor.type = text
processor.option.case = lowercase

3. Dynamic Processor Creation
At runtime:

The configuration is parsed

The appropriate processor is selected and instantiated

3. Data Processing
Feed data into the processor:
Processor* proc = ProcessorFactory::create(config);
proc->process(data);
Each processor handles data in a way that matches its specialization.

4. Error Handling
The system:

Detects and reports configuration problems

Avoids crashes using exceptions and clear error messages
