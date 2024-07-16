package tree_sitter_maxima_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-maxima"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_maxima.Language())
	if language == nil {
		t.Errorf("Error loading Maxima grammar")
	}
}
