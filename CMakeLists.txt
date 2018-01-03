
project (test)

cmake_minimum_required(VERSION 2.8)

aux_source_directory(./ src_list)




add_executable(test ${src_list})





