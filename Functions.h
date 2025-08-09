#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

std::fstream open_file(const fs::path& path, bool& file_is_new);
