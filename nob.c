#define NOB_IMPLEMENTATION
#include "nob.h"

#define BUILD_DIR "build/"
#define INCLUDE_DIR "."

int main(int argc, char **argv)
{
  NOB_GO_REBUILD_URSELF(argc, argv);

  Nob_Cmd cmd = {0};

  nob_cmd_append(&cmd, "gcc", "-o", BUILD_DIR"clox.exe");
  nob_cmd_append(&cmd, "-I"INCLUDE_DIR);
  nob_cmd_append(&cmd, "compiler.c", "chunk.c", "debug.c", "main.c", "memory.c", "object.c", "scanner.c", "table.c", "value.c", "vm.c");

  if (!nob_cmd_run_sync(cmd)) return 1;
  return 0;
}
