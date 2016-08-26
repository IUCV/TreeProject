TreeProject
===========

Computer vision has progressed remarkably over the last few years, but
fine-grained recognition tasks such as identifying specific species of
trees or types of geological formations are still very difficult (due
to, for example, the subtle visual cues that must be used, as well as
limited training datasets). However, tasks are also very difficult for
untrained humans without domain expertise. Computers have humans
complementary strengths, however. Computers are very good at scanning
through huge image libraries to find potential matches, but these
potential matches are usually noisy. In contrast, humans are very slow
at large-scale image matching, but even untrained observers can often
verify whether two objects are really part of the same fine-grained
class.

Our work combines these advantages into a tool that allows humans and
computer to collaborate in order to solve fine-grained recognition
tasks, with an accuracy that they are unable to achieve independently.
We have created and publicly released a software tool for performing
this human-in-the-loop clarification. The system requires a library of
images of each category of interest. During an offline training phase,
this labeled training data learns initial classifiers for each class.
During the online, human-in-the-loop phase, the system presents
potential matches and then asks the user to verify them (indicating
whether each candidate match is good, poor, or neutral). Using this
feedback, the system updates its internal classification models and
presents a new set of candidates. The human and computer thus
collaborate, back-and-forth, until they converge on an answer. We have
successfully tested the tool on several recognition problems including
fine-grained tree species, bird species, and rock types.

The tool requires a Linux machine, and has been tested against GCC
version 4.7.2, OpenCV 2.4.9, and QT 4.8.5. It includes two small
sample datasets and test image sets: trees.sh, for fine-grained tree
species classification, and rocks.sh, for classifying geological
features. Here are some sample installation commands:
```
git clone --recursive git@github.com:IUCV/TreeProject.git
```
make sure to do the --recursive flag or that won't work!
```
module load gcc/4.7.2
module load opencv/2.4.9
module load qt/4.8.5

cd TreeProject/c++
./build.sh
./trees.sh
```
The first time you run it, it will take a really long time because it
has to compute features for the whole library of images. It saves the
features to disk, though, so the next time it's quite fast.

