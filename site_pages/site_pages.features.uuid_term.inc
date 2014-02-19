<?php
/**
 * @file
 * site_pages.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function site_pages_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Help with assistive technologies',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '19476efe-fcf6-42c6-92c7-b164260c7715',
    'vocabulary_machine_name' => 'links_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'fix the web newsletter',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '26136bec-5780-4281-8d0a-24bc0b11a34f',
    'vocabulary_machine_name' => 'newsletter',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'FAQs for Volunteers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '5d21cf6b-b002-45ce-a9e2-b111fa4c7050',
    'vocabulary_machine_name' => 'faq_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Fix the web newsletter',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '667f3226-c4cf-47c7-8ca1-37862231c202',
    'vocabulary_machine_name' => 'newsletter',
    'url_alias' => array(
      0 => array(
        'alias' => 'newsletter/fix-web-newsletter',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'FAQs for Reporters of Website issues',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '7ad4ae5f-d664-4ec0-8fc0-4c9d9fc1f320',
    'vocabulary_machine_name' => 'faq_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'General FAQs',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '97368215-0dac-410c-bbed-1f9037374ea5',
    'vocabulary_machine_name' => 'faq_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'General links',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c2c99a91-13b9-4b07-8177-2b0f63759772',
    'vocabulary_machine_name' => 'links_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'FAQs for Website owners / developers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'f72ceb3e-83e3-4dd1-ad07-6f2580d10f91',
    'vocabulary_machine_name' => 'faq_categories',
    'url_alias' => array(),
  );
  return $terms;
}
