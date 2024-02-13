#include "protein_translation.h"
#include <map>

namespace protein_translation {
	/*
		Codon				Protein
		AUG					Methionine
		UUU, UUC			Phenylalanine
		UUA, UUG			Leucine
		UCU, UCC, UCA, UCG	Serine
		UAU, UAC			Tyrosine
		UGU, UGC			Cysteine
		UGG					Tryptophan
		UAA, UAG, UGA		STOP
	*/
	std::map<std::string, std::string> rna_protein_map = {
		{"AUG", "Methionine"},
		{"UUU", "Phenylalanine"},
		{"UUC", "Phenylalanine"},
		{"UUA", "Leucine"},
		{"UUG", "Leucine"},
		{"UCU", "Serine"},
		{"UCC", "Serine"},
		{"UCA", "Serine"},
		{"UCG", "Serine"},
		{"UAU", "Tyrosine"},
		{"UAC", "Tyrosine"},
		{"UGU", "Cysteine"},
		{"UGC", "Cysteine"},
		{"UGG", "Tryptophan"},
		{"UAA", "STOP"},
		{"UAG", "STOP"},
		{"UGA", "STOP"},
	};


	std::vector<std::string> proteins(std::string sequence) {
		std::vector<std::string> protein_list{};

		for (size_t i{}; i < sequence.size(); i += 3) {
			std::string key = sequence.substr(i, 3);
			std::string value = rna_protein_map.at(key);
			
			if (value == "STOP") {
				return protein_list;
			}
			else {
				protein_list.emplace_back(value);
			}
		}

		return protein_list;
	}
}  // namespace protein_translation
