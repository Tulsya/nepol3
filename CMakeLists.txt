# CMakeList.txt : CMake project for CMakeProject2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeProject2")

# Add source to this project's executable.
add_executable (CMakeProject2 "CMakeProject2.cpp" "CMakeProject2.h" "tests.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

cmake_minimum_required(VERSION 3.10)

project(MyLinkedListTests)

set(CMAKE_CXX_STANDARD 17)

# Добавьте исполняемый файл с вашими тестами
add_executable(MyTests tests.cpp)

# Если Catch2 установлен с помощью пакетного менеджера,
# использовать find_package для поиска библиотеки
find_package(Catch2 REQUIRED)

# Цель для подключения библиотеки Catch2
target_link_libraries(MyTests Catch2::Catch2)

