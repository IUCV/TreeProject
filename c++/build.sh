module load gcc
module load opencv
rm -r build
mkdir build
mkdir precompute_features

if [ ! -f ./3rdparty/OverFeat/data/default/net_weight_0 ]; then
 python ./3rdparty/OverFeat/download_weights.py
fi

cd 3rdparty/OverFeat/src
make
 
cd ../../../build
cmake -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DCMAKE_BUILD_TYPE=Release -DUSE_QT4=ON -DOpenCV_DIR=/l/opencv-2.4.9/share/OpenCV/ -DCMAKE_CXX_FLAGS="-lblas -fopenmp -I/l/gcc-4.7.2/include/c++/4.7.2/x86_64-unknown-linux-gnu -I/l/gcc-4.7.2/include/c++/4.7.2" -DCMAKE_EXE_LINKER_FLAGS="-Lblas -Lopenmp -L/l/gcc-4.7.2/lib64 -L../3rdparty/OverFeat/src/liboverfeat.a -L../3rdparty/OverFeat/src/TH/libTH.a -Lblas" ..
make -j8
