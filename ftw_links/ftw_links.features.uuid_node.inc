<?php
/**
 * @file
 * ftw_links.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ftw_links_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Bs8878 - the British Standard on Web Accessibility',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6404e0dc-e0de-4342-9875-69b2d1376677',
  'type' => 'link',
  'language' => 'en',
  'created' => 1310570498,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '18d6e6cd-de23-4690-b0cb-60fc5909bb63',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This BS helps those commissioning websites with ensuring the site meets standards',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>This BS helps those commissioning websites with ensuring the site meets standards</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://shop.bsigroup.com/en/ProductDetail/?pid=000000000030180388',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 5,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-07-13 15:21:38 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'AbilityNet',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e1584294-6ca2-4e29-ab1f-5f5b4ec06638',
  'type' => 'link',
  'language' => 'und',
  'created' => 1287557293,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3c447e82-494a-489a-b890-efa53a54eed1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'a provider of assistive technology help, signposts to useful links',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>a provider of assistive technology help, signposts to useful links</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.abilitynet.org.uk/',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 17,
      ),
    ),
  ),
  'field_weight' => array(),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-10-20 06:48:13 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Web Accessibility In Mind',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '14a18605-e1fe-4f04-9c1f-9aac5bdb9ee9',
  'type' => 'link',
  'language' => 'und',
  'created' => 1279548136,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3fa9d1ca-10f3-4317-a2a1-4aba2c12d7ce',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'excellent resource on all things web accessibility starting from basics to very advanced',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>excellent resource on all things web accessibility starting from basics to very advanced</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'www.webaim.org',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(
    'und' => array(
      0 => array(
        'value' => '(WebAIM)',
        'format' => NULL,
        'safe_value' => '(WebAIM)',
      ),
    ),
  ),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 4,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 14:02:16 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Links',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '06fcf33e-9da1-4152-97f5-b731a8fef158',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279548863,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '52708833-9270-4f7f-ac04-a9672963396d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Here you can find links to information about accessibility on the web.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Here you can find links to information about accessibility on the web.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 14:14:23 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Definition of Web Accessibility on Wikipedia',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '86849d5c-073d-4337-a1f7-720f7294f0bc',
  'type' => 'link',
  'language' => 'und',
  'created' => 1289904172,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5b77afd4-74e5-4e64-a1c9-73535c9853f7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'a good summary of the issues involved.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>a good summary of the issues involved.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://en.wikipedia.org/wiki/Web_accessibility',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 2,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-11-16 10:42:52 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Accessify Forum',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cd15f4a3-948e-4ddd-ae91-06054d29064d',
  'type' => 'link',
  'language' => 'und',
  'created' => 1279548161,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '832ed557-5ac7-454e-919d-5cdceeb923fc',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'another excellent resource including user forums to pick others\' brains. Check out their forum (link in the footer of their page).',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>another excellent resource including user forums to pick others&#039; brains. Check out their forum (link in the footer of their page).</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.accessifyforum.com/',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 5,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 14:02:41 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Deque\'s Whitepaper on Accessibility for the Mobile Market',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f6e7ab96-98e8-4cb5-a347-ff8119438fea',
  'type' => 'link',
  'language' => 'en',
  'created' => 1384351744,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '885eaac4-e271-4efb-8370-721fc787c8cb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This document provides an overview of mobile accessibility, a discussion of its importance, and information on how to assess and remediate mobile applications to ensure accessibility.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>This document provides an overview of mobile accessibility, a discussion of its importance, and information on how to assess and remediate mobile applications to ensure accessibility.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://accessibility.deque.com/mobile-application-whitepaper-download',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(
    'und' => array(
      0 => array(
        'value' => '(Deque Systems)',
        'format' => NULL,
        'safe_value' => '(Deque Systems)',
      ),
    ),
  ),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 43,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2013-11-13 14:09:04 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Accessible Information and Communication Technologies - Benefits to Business and Society',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a7d9d96e-9cbc-40f1-bae0-6d05f0bbdced',
  'type' => 'link',
  'language' => 'en',
  'created' => 1298023028,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8ce21158-4d90-4c5d-af51-ad1c084dcdea',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<a href="http://get.adobe.com/reader/" id="acrobat-reader-tip" class="dyn-tooltip panePos-l"><img src="http://www.adobe.com/images/shared/download_buttons/get_adobe_reader.png" alt="get adobe reader"></a>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.onevoiceict.org/sites/default/files/Accessible%20ICT%20-%20Benefits%20to%20Business%20and%20Society.pdf',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(
    'und' => array(
      0 => array(
        'value' => '(OneVoice)',
        'format' => NULL,
        'safe_value' => '(OneVoice)',
      ),
    ),
  ),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 10,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-02-18 09:57:08 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'First Seven Steps to Accessible Websites',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '500b18a1-8b87-44cf-9328-45a5b51ba7c3',
  'type' => 'link',
  'language' => 'en',
  'created' => 1310547642,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '977171b4-94cc-43eb-8c08-26e463f287dd',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'An introduction to begin improving current or building new websites with accessibility in mind.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>An introduction to begin improving current or building new websites with accessibility in mind.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.onevoiceict.org/tools/tools/seven-steps',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(
    'und' => array(
      0 => array(
        'value' => '(One Voice /  Bloor)',
        'format' => NULL,
        'safe_value' => '(One Voice /  Bloor)',
      ),
    ),
  ),
  'field_title_of_wider_organisatio' => array(
    'und' => array(
      0 => array(
        'value' => 'One Voice',
        'format' => NULL,
        'safe_value' => 'One Voice',
      ),
    ),
  ),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 38,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-07-13 09:00:42 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'JISC Techdis resources',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e3147c3b-57a8-4a95-9cd0-94412cd667fb',
  'type' => 'link',
  'language' => 'en',
  'created' => 1300132486,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b486bcd0-33d3-47bd-8361-8a822de5e6a3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'An overview of the accessibility resources and publications from JISC Techdis ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>An overview of the accessibility resources and publications from JISC Techdis</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.jisctechdis.ac.uk/techdis/resources/detail/resources/resources_handy_summary',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(
    'und' => array(
      0 => array(
        'value' => '(Techdis)',
        'format' => NULL,
        'safe_value' => '(Techdis)',
      ),
    ),
  ),
  'field_title_of_wider_organisatio' => array(
    'und' => array(
      0 => array(
        'value' => 'JISC',
        'format' => NULL,
        'safe_value' => 'JISC',
      ),
    ),
  ),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 18,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-03-14 19:54:46 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Global Assistive Technology Encyclopedia wiki',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '896755e3-7fa1-4620-b0af-96e2e40fa234',
  'type' => 'link',
  'language' => 'und',
  'created' => 1279548218,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c693d9b8-c7bf-4ccf-b6d0-b39443c9b91e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'for info on all ATs',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>for info on all ATs</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://abilitynet.wetpaint.com',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(
    'und' => array(
      0 => array(
        'value' => '(GATE)',
        'format' => NULL,
        'safe_value' => '(GATE)',
      ),
    ),
  ),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 17,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 7,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 14:03:38 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Web Accessibility Initiative',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9d962569-7776-4b22-b72b-260f64cf1476',
  'type' => 'link',
  'language' => 'und',
  'created' => 1279548104,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd419032b-08cc-4ad3-b738-b6d958827b7a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'home of web accessibility guidelines',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>home of web accessibility guidelines</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'www.w3.org/wai',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(
    'und' => array(
      0 => array(
        'value' => '(WAI)',
        'format' => NULL,
        'safe_value' => '(WAI)',
      ),
    ),
  ),
  'field_title_of_wider_organisatio' => array(
    'und' => array(
      0 => array(
        'value' => 'World Wide Web Consortium',
        'format' => NULL,
        'safe_value' => 'World Wide Web Consortium',
      ),
    ),
  ),
  'field_acronym_of_wider_organisat' => array(
    'und' => array(
      0 => array(
        'value' => 'W3C',
        'format' => NULL,
        'safe_value' => 'W3C',
      ),
    ),
  ),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 14:01:44 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Leonie Watson\'s guide to WCAG',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '451e51f2-0924-4c78-a8c8-01743de5a619',
  'type' => 'link',
  'language' => 'en',
  'created' => 1312861125,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd4fdfb23-0c0f-4428-ad7c-535534195df0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'An easy introduction to the W3C accessibility guidelines',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>An easy introduction to the W3C accessibility guidelines</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://tink.co.uk/2009/02/guide-to-wcag/',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(),
  'field_title_of_wider_organisatio' => array(
    'und' => array(
      0 => array(
        'value' => 'Nomensa',
        'format' => NULL,
        'safe_value' => 'Nomensa',
      ),
    ),
  ),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 20,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-08-09 03:38:45 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I. T. Can Help',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3721a2aa-acb2-4549-be89-69e0d3e21a75',
  'type' => 'link',
  'language' => 'und',
  'created' => 1286536062,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd94cd62d-bdee-4c60-a953-203846aaa2e3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'free help with assistive technologies',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>free help with assistive technologies</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.itcanhelp.org.uk/',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(
    'und' => array(
      0 => array(
        'value' => '(ITCH)',
        'format' => NULL,
        'safe_value' => '(ITCH)',
      ),
    ),
  ),
  'field_title_of_wider_organisatio' => array(
    'und' => array(
      0 => array(
        'value' => 'The Chartered Institute for IT (formerly known as British Computer Society)',
        'format' => NULL,
        'safe_value' => 'The Chartered Institute for IT (formerly known as British Computer Society)',
      ),
    ),
  ),
  'field_acronym_of_wider_organisat' => array(
    'und' => array(
      0 => array(
        'value' => 'BCS',
        'format' => NULL,
        'safe_value' => 'BCS',
      ),
    ),
  ),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 17,
      ),
    ),
  ),
  'field_weight' => array(),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-10-08 11:07:42 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '10 principles of Inclusive design',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '781009ff-ae3b-41e3-9b6f-0854d0fa8db0',
  'type' => 'link',
  'language' => 'en',
  'created' => 1310549853,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ec5c50f3-38f4-4cd8-9f11-090601f735ed',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'By Sandi Wassmer of Copious Ltd',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>By Sandi Wassmer of Copious Ltd</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.culture.gov.uk/what_we_do/telecommunications_and_online/8161.aspx',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_acronym_of_project' => array(),
  'field_title_of_wider_organisatio' => array(),
  'field_acronym_of_wider_organisat' => array(),
  'field_link_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 42,
      ),
    ),
  ),
  'field_embed_field' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-07-13 09:37:33 +0000',
);
  return $nodes;
}
