#!/bin/bash

echo " Compiling Arrow: "
mkdir -p build/arrow
mkdir libs
cmake -S arrow/cpp/  -B build/arrow \
        -D CMAKE_C_COMPILER=/usr/local/bin/gcc-11 \
        -D CMAKE_CXX_COMPILER=/usr/local/bin/g++-11 \
        -DARROW_BUILD_SHARED=OFF \
        -DARROW_BUILD_STATIC=ON \
        -DARROW_CSV=ON \
        -DARROW_DEPENDENCY_SOURCE=BUNDLED \
        -DARROW_DEPENDENCY_USE_SHARED=OFF \
        -DARROW_PARQUET=ON \
        -DARROW_WITH_BROTLI=ON \
        -DARROW_WITH_BZ2=ON \
        -DARROW_WITH_LZ4=ON \
        -DARROW_WITH_SNAPPY=ON \
        -DARROW_WITH_ZLIB=ON \
        -DARROW_WITH_ZSTD=ON

make -j8 -C build/arrow

make DESTDIR="../../include_libs" install -j4 -C build/arrow