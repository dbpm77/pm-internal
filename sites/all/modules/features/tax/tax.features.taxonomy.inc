<?php
/**
 * @file
 * tax.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tax_taxonomy_default_vocabularies() {
  return array(
    'pm_general_tax' => array(
      'name' => 'PM General Tax',
      'machine_name' => 'pm_general_tax',
      'description' => 'That\'s a general taxonomy for PM related terms ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'use_case_tax' => array(
      'name' => 'Use Case Tax',
      'machine_name' => 'use_case_tax',
      'description' => 'Vocabulary for terms used for Use Cases',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
