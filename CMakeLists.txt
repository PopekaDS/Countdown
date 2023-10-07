cmake_minimum_required(VERSION 3.5)

project(countdown)

set(SOURCES 
	countdown.cpp 
	sevseg.cpp
)
		
set(HEADERS
	sevseg.h
)
	
add_executable(countdown ${SOURCES} ${HEADERS})
set_target_properties(
	countdown PROPERTIES
	CXX_STANDARD 14
	CXX_STANDARD_REQUIRED ON
)
