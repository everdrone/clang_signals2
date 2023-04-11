Build with

```
cmake . -B build -G Ninja

cd build
cmake --build .
```

set a breakpoint at line 6 in `main.cpp`

Debugger crashes with:

```
Initial debug configuration: {
  name: 'Launch',
  type: 'lldb',
  request: 'launch',
  cwd: '${workspaceRoot}',
  program: '${workspaceRoot}/build/example.exe',
  __configurationTarget: 6
}
Resolved debug configuration: {
  name: 'Launch',
  type: 'lldb',
  request: 'launch',
  cwd: '${workspaceRoot}',
  program: '${workspaceRoot}/build/example.exe',
  __configurationTarget: 6,
  relativePathBase: 'd:\\Projects\\cpp\\signals2_bug',
  _adapterSettings: {
    displayFormat: 'auto',
    showDisassembly: 'auto',
    dereferencePointers: true,
    suppressMissingSourceFiles: true,
    evaluationTimeout: 5,
    consoleMode: 'commands',
    sourceLanguages: null,
    terminalPromptClear: null,
    evaluateForHovers: true,
    commandCompletions: true,
    reproducer: false
  }
}
[adapter\src\terminal.rs:101] winapi::um::wincon::FreeConsole() = 1
[adapter\src\terminal.rs:102] winapi::um::wincon::AttachConsole(pid) = 1
[adapter\src\terminal.rs:109] winapi::um::wincon::FreeConsole() = 1
error: example.exe :: Class 'std::strong_ordering' has a member 'less' of type 'std::strong_ordering' which does not have a complete definition.
error: example.exe :: Class 'std::partial_ordering' has a member 'less' of type 'std::partial_ordering' which does not have a complete definition.
error: example.exe :: Class 'std::weak_ordering' has a member 'less' of type 'std::weak_ordering' which does not have a complete definition.
Debug adapter exit code=3221225477 (0xc0000005), signal=null.
```
