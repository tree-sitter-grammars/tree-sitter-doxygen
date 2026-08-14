// swift-tools-version:5.6

import Foundation
import PackageDescription

let dir = Context.packageDirectory
let dir = Context.packageDirectory
var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "\(dir)/src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterDoxygen",
    products: [
        .library(name: "TreeSitterDoxygen", targets: ["TreeSitterDoxygen"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.10.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDoxygen",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDoxygenTests",
            dependencies: [
                .product(name: "SwiftTreeSitter", package: "swift-tree-sitter"),
                "TreeSitterDoxygen",
            ],
            path: "bindings/swift/TreeSitterDoxygenTests"
        )
    ],
    cLanguageStandard: .c11
)
