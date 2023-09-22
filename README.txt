compilation command:
c++ -o <app_name> <...cpp_files>

main compilation command:
$ c++ -o main main.cpp Application/Application.cpp Counter/Counter.cpp
$ ./main

pre-processed compiliation command:
$ c++ -o preprocessed_main preprocessed_main.cpp Application/Application.cpp Counter/Counter.cpp
$ ./preprocessed_main

second compiliation command:
$ c++ -o second second.cpp Counter/Counter.cpp
$ ./second

C++ compilation:
* compilation:
  * pre-processing: looks at pre-processor directives (starting with #)
  * compiling: converts .cpp files into .o object files individually
* linking: creates a program by merging .o object files
  * needs one definition of a function 'int main()'
