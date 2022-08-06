# lib_zakhar_faces

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT) ![Lib Version](https://img.shields.io/badge/Version-2-green.svg) [![Main - Page](https://img.shields.io/badge/Project-Zakhar%20the%20Robot-yellow)](https://github.com/Zakhar-the-Robot "See project sources on Github")

Zakhar facial expressions.

## Usage

The target of the library is ESP-IDF framework.

Include it in your CMakeLists.txt and then add two constants to your `idf_component_register`:

- FACES_INCLUDES - access to use "faces.h" in your code
- FACES_FILES - list of the jpg files

## Example

Example of the CMakeLists.txt

```cmake
include("../components/lib_zakhar_faces/faces.cmake")

idf_component_register( SRCS "main.cpp" 
                        INCLUDE_DIRS "." ${FACES_INCLUDES}
                        EMBED_FILES ${FACES_FILES} )
```

and then access the images using constant from the [faces.h](include/faces.h).
