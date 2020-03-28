from ctypes import CDLL

if __name__ == "__main__":
    lib_path = ".build/release/libc-swift-demo.dylib"
    c_swift_demo_lib = CDLL(lib_path)
    c_swift_demo_lib.print_hello_world.argtypes = []
    c_swift_demo_lib.print_hello_world.restype = None

    c_swift_demo_lib.print_hello_world()
