# PS2Recomp KOFXI Development Constraints

This repository is being used to bring up the PS2 version of The King of Fighters XI
as a native PC build through PS2Recomp. The local source ISO is:

`E:\game\PS2ISO\King of Fighters XI, The (Japan).iso`

The target boot ELF is `SLPS_256.60` from `SYSTEM.CNF`:

```ini
BOOT2 = cdrom0:\SLPS_256.60;1
VER = 1.03
VMODE = NTSC
```

## Local Workspace

- Keep local planning notes in `doc/`; this directory is ignored by git.
- Keep temporary tools, extracted disc files, logs, and generated KOFXI output in `temp/`; this directory is ignored by git.
- Keep project-local Codex skill and MCP config under `.codex/`; this directory is ignored by git.
- Use `temp/script/` for helper scripts that are not intended to become source files.

## Non-Negotiable Rules

- Do not hand-edit generated runner output. Files under `ps2xRuntime/src/runner/` that are produced by `ps2_recomp` must only be copied or regenerated from tool output.
- Do not run clean builds or delete build artifacts without explicit approval. Avoid `--clean-first`, `--target clean`, `git clean`, and recursive build-directory deletion.
- Do not use destructive git commands such as `git reset --hard`, `git checkout --`, or `git clean` unless explicitly requested.
- Do not scan or dump very large generated runner directories. Count files or inspect one known file at a time.
- Avoid header changes unless there is no practical `.cpp`-only option; header edits can trigger very large rebuilds.
- For runtime failures, diagnose the layer first: TOML/recompiler output, generated C++, runtime syscall/stub, host IO, GS/GIF/VIF, VU, or game-specific override.

## Build Discipline

- Use the Visual Studio x64 toolchain with Ninja for Windows builds.
- Prefer incremental builds from `out/build-msvc`.
- The safe default configure line is a Ninja/MSVC build with `PS2X_BUILD_STUDIO=OFF`.
- Read build output and verify exit code 0 before claiming a build succeeded.
- 尽量使用差异化编译，非必要情况下，不要全量编译

## KOFXI Bring-Up Order

1. Build PS2Recomp tools and tests.
2. Extract the KOFXI ISO into `temp/kofxi/cdroot`.
3. Export retail function boundaries from Ghidra using `ps2xRecomp/tools/ghidra/ExportPS2Functions.java`.
4. Recompile `SLPS_256.60` into `temp/kofxi/recomp/output`.
5. Sync generated output into the runtime locations expected by CMake.
6. Run with `PS2X_CD_ROOT`, `PS2X_CD_IMAGE`, and `PS2X_MC_ROOT` set.
7. Fix first blockers through TOML, runtime `.cpp` stubs, or game overrides.
8. Only after title/menu bring-up, work on precise GS behavior and paraLLEl-GS alignment.

## Debugging Preferences

- Use PCSX2-MCP as the dynamic reference path once configured.
- Use PCSX2 register/memory/GS observations to validate runtime assumptions.
- Prefer small, reversible runtime changes and focused tests.
- Keep notes in `doc/kofxi_recompilation_plan.md` current after major discoveries.
