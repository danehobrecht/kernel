# notes.md

- modules: code that can be loaded and unloaded into the kernel upon demand; extend kernel functionality without reboot
  - one type of module is the device driver, which allows the kernel to access hardware connected to the system
  - enables microservices architecture
  - lsmod ("list [kernel] modules"): list
  - modprobe ("module probe")
  - insmod ("insert module")
  - modules can depend on each other
- init_module() either registers a handler for something with the kernel, or it replaces one of the kernel functions with its own code
- cleanup_module() function is supposed to undo whatever init_module() did, so the module can be unloaded safely
- every kernel module needs to include include/linux/module.h
- kernel programming is tabs and not spaces
- functions write to the kernel log ring buffer, not directly to any terminal or console
 - to view, must use dmesg or journalctl
