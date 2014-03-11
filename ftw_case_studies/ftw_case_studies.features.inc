<?php
/**
 * @file
 * ftw_case_studies.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ftw_case_studies_node_info() {
  $items = array(
    'case_study' => array(
      'name' => t('Case study'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
