<?php
/**
 * @file
 * report_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function report_content_type_node_info() {
  $items = array(
    'report' => array(
      'name' => t('Report'),
      'base' => 'node_content',
      'description' => t('A report from a disabled person'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
