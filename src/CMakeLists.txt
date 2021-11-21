cmake_minimum_required(VERSION 2.8.9)
project (eod_simple_example)

add_compile_options(-std=c++11)

find_package(OpenCV REQUIRED)  


add_executable(eod_simple_example 
    main.cpp
    # types
    lib/types/ExtendedObjectInfo.cpp
    lib/types/Attribute.cpp
    lib/types/SimpleObject.cpp
    lib/types/Filtering.cpp
    lib/types/Clusterization.cpp    
    # utils    
    lib/utils/geometry_utils.cpp
    lib/utils/drawing_utils.cpp
    lib/utils/contour_utils.cpp
    # detectors
    lib/detectors/HsvColorDetector.cpp
    lib/detectors/DnnDetector.cpp
    lib/detectors/ExtractedInfoStringChecker.cpp
    )

target_include_directories(eod_simple_example
    PRIVATE    
    lib/include
    lib/detectors/include
    lib/relations/include
    lib/utils/include
    lib/types/include
    ${OpenCV_INCLUDE_DIRS}
    )
    
target_link_libraries(eod_simple_example  
    ${OpenCV_LIBRARIES}  
)
