#Project name for the UI application.
project("Application")

#Sources for the UI application.
set(PARSERLIB_SOURCES
    "MainWindow.h" 
    "MainWindow.cpp")

#Add the library to the porject either as a static project or a shared one. 
if("${BUILD_STATICALLY}")
    add_library("${PROJECT_NAME}" STATIC "${PARSERLIB_SOURCES}")
else()
    add_library("${PROJECT_NAME}" SHARED "${PARSERLIB_SOURCES}")
endif()

#Link to Qt
target_link_libraries("${PROJECT_NAME}" Qt5::Widgets)