cmake_minimum_required(VERSION 3.16)

project(simple_mongo_cxx)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_PREFIX_PATH C:/mongo-c-driver/lib/cmake/mongoc-1.0
C:/mongo-c-driver/lib/cmake/bson-1.0
C:/mongo-cxx-driver/lib/cmake/mongocxx-4.0.0
C:/mongo-cxx-driver/lib/cmake/bsoncxx-4.0.0)

find_package(mongocxx REQUIRED)
find_package(bsoncxx REQUIRED)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(simple_mongo_cxx main.cpp)

target_link_libraries(simple_mongo_cxx PRIVATE mongocxx bsoncxx)

target_include_directories(simple_mongo_cxx PRIVATE 
C:/mongo-cxx-driver/include/mongocxx/v_noabi/ 
C:/mongo-cxx-driver/include/bsoncxx/v_noabi/)

target_link_directories(simple_mongo_cxx PRIVATE C:/mongo-c-driver/lib C:/mongo-cxx-driver/lib)