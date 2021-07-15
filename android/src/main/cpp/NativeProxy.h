class NativeProxy : public jni::HybridClass<NativeProxy> {
public:
    static auto constexpr kJavaDescriptor =
            "Lcom/swmansion/reanimated/NativeProxy;";
    static void registerNatives();
};
