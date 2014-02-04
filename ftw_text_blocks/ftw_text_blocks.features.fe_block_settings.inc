<?php
/**
 * @file
 * ftw_text_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ftw_text_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-nag_email'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'nag_email',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ftw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ftw',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Fix the web dashboard nudge',
    'visibility' => 0,
  );

  return $export;
}
