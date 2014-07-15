<?php
/**
 * @file
 * report_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function report_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_report';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_report';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_report';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_report';
  $strongarm->value = 1;
  $export['node_submitted_report'] = $strongarm;

  return $export;
}
