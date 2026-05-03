# notes.md

- modules: code that can be loaded and unloaded into the kernel upon demand; extend kernel functionality without reboot
  - one type of module is the device driver, which allows the kernel to access hardware connected to the system
  - enables microservices architecture
  - lsmod ("list [kernel] modules"): list
  - modprobe ("module probe")
  - insmod ("insert module")
  - modules can depend on each other
