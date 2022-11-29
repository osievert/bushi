#pragma once

#include <string>

#include "build.h"

struct Tool;

/// Command-line options.
struct Options {
  /// Build file to load.
  const char* input_file;

  /// Directory to change into before running.
  const char* working_dir;

  /// Tool to run rather than building.
  const Tool* tool;

  /// Whether duplicate rules for one target should warn or print an error.
  bool dupe_edges_should_err;

  /// Whether phony cycles should warn or print an error.
  bool phony_cycle_should_err;
};


// bushi main entry point

int bushi_main(int argc, char** argv);

int bushi_execute(int argc, char** argv, BuildConfig& config, Options& options);

const Tool* ChooseTool(const std::string& tool_name);
