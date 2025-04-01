# Simple MongoDB C++ Example

## Overview
This is a simple C++ project that connects to a MongoDB database using the MongoDB C++ Driver (`mongocxx`). The program fetches and prints all documents from a specified collection.

## Prerequisites
Make sure you have the following installed on your system:
- MongoDB server (running locally on `localhost:27017`)
- MongoDB C Driver
- MongoDB C++ Driver
- CMake (version 3.16 or later)
- A C++ compiler supporting C++17

## Installation

### Install MongoDB C and C++ Drivers
1. Download and install the MongoDB C Driver from [MongoDB C Driver](https://github.com/mongodb/mongo-c-driver)
2. Download and install the MongoDB C++ Driver from [MongoDB C++ Driver](https://github.com/mongodb/mongo-cxx-driver)

Ensure the paths in `CMakeLists.txt` match the installation locations of these libraries.

## Video Guide
For a complete walkthrough, check out the video: [How to build MongoDB C/C++ driver | CMake, build](https://youtu.be/F1tDlZa42K4?si=jTZxn7wKGVH9-fge)

## Configuration

Set the following environment variables or modify your CMake configuration accordingly:
```
bsoncxx_DIR=C:/mongo-cxx-driver/lib/cmake/bsoncxx-4.0.0
mongocxx_DIR=C:/mongo-cxx-driver/lib/cmake/mongocxx-4.0.0
```

The program is configured to connect to MongoDB at:
```
mongodb://localhost:27017
```
Ensure your MongoDB instance is running before executing the program.

## Code Explanation

### `main.cpp`
- Initializes a MongoDB client.
- Connects to a MongoDB database named `mongoTestDB`.
- Fetches and prints all documents from the `Test` collection.
- Handles exceptions if connection or retrieval fails.

## Troubleshooting

1. **CMake can't find `mongocxx` or `bsoncxx`**
   - Ensure the correct paths are set in `CMakeLists.txt`.
   - Verify that the MongoDB C and C++ drivers are installed correctly.

2. **MongoDB connection issues**
   - Ensure MongoDB is running on `localhost:27017`.
   - Check if authentication is required for your MongoDB instance.


