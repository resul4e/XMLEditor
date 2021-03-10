#Project name for the xml parser.
project("XMLParser")

#Sources for the xml parser.
set(PARSERLIB_SOURCES
    "Node.h" 
    "Node.cpp")

#Add the library to the porject either as a static project or a shared one. 
if("${BUILD_STATICALLY}" EQUAL ON)
    add_library("${PROJECT_NAME}" STATIC "${PARSERLIB_SOURCES}")
else()
    add_library("${PROJECT_NAME}" SHARED "${PARSERLIB_SOURCES}")
endif()
