# The-Stellar-Data-Management-System
 SDMS is a modular C++ project designed for LunarBase Alpha, a futuristic lunar research station. It includes binary data processing, number system conversions, sensor analysis, and secure communication modules. Each module performs a critical task .  It showcases  problem-solving skills in C++ programming.
 🌌 Stellar Data Management System (SDMS) 🚀
A modular C++-based data processing system designed for LunarBase Alpha, a futuristic lunar research station. This project showcases a complete system that handles scientific data conversions, environmental analysis, secure communications, voting systems, weather alerts, and much more — all utilizing binary logic and number system conversions.

📌 Project Overview
The Stellar Data Management System (SDMS) is a comprehensive simulation of core software functionalities required for a lunar base’s operations. The system is divided into nine standalone modules, each targeting a specific aspect of the station's functionality. Implemented using modular C++ functions, it enables clean integration, user interactivity, and efficient data processing.

💡 Key Features / Modules
Scientific Data Converter
🔢 Convert numbers between Decimal, Binary, Octal, and Hexadecimal formats with validation checks.

Energy Consumption Monitor
⚡ Analyze energy readings in binary, convert to decimal, and determine status as Efficient, Moderate, or Critical.

Environmental Sensor Analyzer
🌱 Interpret binary sensor data where 0 indicates alert and 1 means normal. Triggers alerts if more than 60% bits are 0.

Secure Access Password Validator
🔐 Validates binary-encoded passwords based on rules like symmetry, minimum length, count of 1s, and starting bit.

Communication Signal Validator
📡 Ensures binary signals follow alternating bit pattern and do not have more than four consecutive identical bits.

Binary Data Compressor (RLE Encoding)
💾 Compress binary strings using Run-Length Encoding (RLE) to optimize storage.

Gray Code Sequence Generator
🤖 Generate n-bit Gray Code Sequences used in robotic arm movement. Includes step-by-step dry run for n = 3.

Binary Voting Tally System
🗳️ Decode binary votes where the first 3 bits are Voter ID (ignored) and the last 5 bits represent Candidate Number (1–31).

Weather Station Alert Decoder
🌦️ Decode 8-bit weather alert codes combining Temperature Category and Alert Type.

📋 Final Integration
The project includes a menu-driven main program that allows users to select any module, input data, and receive instant output.
✅ All modules are implemented as independent functions, handling edge cases effectively and returning accurate results.

🛠️ Tech Stack
Language: C++
Concepts Used: Binary Logic, Number System Conversions, Conditionals, Functions, Bit Manipulation, Data Encoding/Decoding.

