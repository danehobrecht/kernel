# Linux Kernel Development on M-Series Macs

The LKMPG setup documentation is completely shot. I have taken great pains to produce an absolutely minimal setup guide that works.

## Setup
- Install prerequisite software:\
(Host) `brew install qemu lima lima-additional-guestagents`

- Create container:\
(Host) `limactl create --arch=x86_64`

- Enter container:\
(Host) `limactl start && limactl shell`

- Install prerequisite software:\
(Guest) `sudo apt-get update && sudo apt-get install build-essential`

- Navigate to writable directory (user's `home`):\
(Guest) `cd`

You may now proceed to [Hello World](https://sysprog21.github.io/lkmpg/#hello-world). Be sure to follow the manual build steps and avoid the specialized QEMU ones at all costs. It is for your ultimate benefit that you learn the classical development flow as opposed to internalizing a customized build system that doesn't work.

## References
- https://sysprog21.github.io
- https://github.com/sysprog21/lkmpg
