cmake_minimum_required(VERSION 3.10)  # Минимальная версия CMake
project(clox)                         # Название проекта

# Указываем, что нужен стандарт C99
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Добавляем исполняемый файл `clox.exe` из исходников
add_executable(clox 
  compiler.c
  chunk.c
  debug.c
  main.c
  memory.c
  scanner.c
  value.c
  vm.c
)

# Если заголовочные файлы (.h) лежат в текущей папке, добавляем её в include-пути
target_include_directories(clox PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# target_compile_options(clox PRIVATE -Wall -Wextra -Werror)  # строгие предупреждения

# Сборка + запуск
add_custom_target(run 
  COMMAND clox
  DEPENDS clox
)