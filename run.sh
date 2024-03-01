# Install CMake and Vulkan SDK dependencies
# Note: The actual installation commands for these dependencies are not provided
# as the instructions specify not to use sudo or install globally, and these
# would typically be installed at a system level. However, for the sake of
# completeness, here are the commands you would generally use:
# sudo apt-get install cmake
# sudo apt-get install vulkan-sdk

# Create a build directory and navigate into it
mkdir build
cd build

# Generate the build system files with CMake
cmake ..

# Build the project
make

# Run the executable
./GraphicsPipelineLibrary
