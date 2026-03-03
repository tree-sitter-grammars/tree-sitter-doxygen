import XCTest
import SwiftTreeSitter
import TreeSitterDoxygen

final class TreeSitterDoxygenTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_doxygen())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Doxygen grammar")
    }
}
