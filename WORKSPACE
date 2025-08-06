workspace(name = "etcd-cpp")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Protobuf
http_archive(
    name = "com_google_protobuf",
    sha256 = "008a11cc56f9b96679b4c285fd05f46d317d685be3ab524b2a310be0fbad987e",
    strip_prefix = "protobuf-29.3",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/v29.3.tar.gz"],
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()

# gRPC
http_archive(
    name = "com_github_grpc_grpc",
    sha256 = "e5d5e0dd96fe9452fe24cc8c827381dca484c54d171fb512a198025fec81a3c8",
    strip_prefix = "grpc-1.62.2",
    urls = ["https://github.com/grpc/grpc/archive/v1.62.2.tar.gz"],
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")
grpc_deps()

load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")
grpc_extra_deps()
