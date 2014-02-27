<?php
/**
 * @file
 * ftw_faq.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ftw_faq_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'What happens with websites that get reported by lots of different people? ',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '817855aa-2d4d-4aa8-83d8-d9de988bdb34',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286531522,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '04557a6d-0e98-48e5-bc36-02be453aa868',
  'revision_uid' => 1,
  'question' => 'What happens with websites that get reported by lots of different people? ',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'When a volunteer edits a report they can view similar reports for the same base URL (e.g., <cite>http://www.example.net/example/example.html</cite> has the same base url as <cite>http://www.example.net/about</cite> , the base url for both of these pages would be <cite>http://www.example.net</cite>). If the volunteer decided that the problem with this webpage has already been reported then they should not report it again, but it might be a different problem, in which case they will get in touch with that web owner.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>When a volunteer edits a report they can view similar reports for the same base URL (e.g., <cite><a href="http://www.example.net/example/example.html">http://www.example.net/example/example.html</a></cite> has the same base url as <cite><a href="http://www.example.net/about">http://www.example.net/about</a></cite> , the base url for both of these pages would be <cite><a href="http://www.example.net">http://www.example.net</a></cite>). If the volunteer decided that the problem with this webpage has already been reported then they should not report it again, but it might be a different problem, in which case they will get in touch with that web owner.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-10-08 09:52:02 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I have multiple sites reported on a single report',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f25afc75-3fe1-4c30-8b5e-c9d33ce0f8a7',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1290435978,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '069346fc-1972-41a6-aca7-bf549b583f44',
  'revision_uid' => 1,
  'question' => 'I have multiple sites reported on a single report',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->The best thing to do if you experience this is to report the second (third, foruth.....) issues back to the site, then (straight away) go to browse new reports and accept them, and enter the reporters details in the notes. Then if you don\'t want the report relist it by changing the url from <cite>http://www.fixtheweb.net/dashboard/report/[issue_number]/process</cite> to <cite>http://www.fixtheweb.net/dashboard/report/[issue_number]/accept</cite> and click relist report.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The best thing to do if you experience this is to report the second (third, foruth.....) issues back to the site, then (straight away) go to browse new reports and accept them, and enter the reporters details in the notes. Then if you don\'t want the report relist it by changing the url from <cite><a href="http://www.fixtheweb.net/dashboard/report/[issue_number]/process">http://www.fixtheweb.net/dashboard/report/[issue_number]/process</a></cite> to <cite><a href="http://www.fixtheweb.net/dashboard/report/[issue_number]/accept">http://www.fixtheweb.net/dashboard/report/[issue_number]/accept</a></cite> and click relist report.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-11-22 14:26:18 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I\'m requested to enter my postal address details on a contact form but I don\'t wish to enter my own, what should I use?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ca7c8824-f380-4b27-b6af-4612b2df368b',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1289949847,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0d5c9b44-0330-4fd2-bf16-79645740a861',
  'revision_uid' => 1,
  'question' => 'I\'m requested to enter my postal address details on a contact form but I don\'t wish to enter my own, what should I use?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->We are happy to use Citizen Online\'s postal address for this purpose: 1 Stratford Court, Stratford Road, Stroud, GL5 4AQ. We would rather you not use our phone number. We suggest if you don\'t wish to enter your own and are required to then put a dummy one in.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>We are happy to use Citizen Online\'s postal address for this purpose: 1 Stratford Court, Stratford Road, Stroud, GL5 4AQ. We would rather you not use our phone number. We suggest if you don\'t wish to enter your own and are required to then put a dummy one in.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-11-16 23:24:07 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How shall I expect conversations to progress with website owners?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '48a2165d-b34a-4387-845e-308cf6c0e15e',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1287568353,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '104dc90e-bb90-4899-9238-225fd33e0457',
  'revision_uid' => 1,
  'question' => 'How shall I expect conversations to progress with website owners?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The main purpose of the Fix the Web process is to hugely raise awareness of Web accessibility issues. Getting any kind of an acknowledgement from a website owner is progress! They may need more information, whether from the disabled person having the problem or at a more technical level.
 
As a volunteer it is entirely up to you how much involvement to have with the website owner and this may depend on your expertise (or lack of) in web accessibility. The disabled person who reported the issue may be willing to have detailed conversations with the website owner or may just wish to park the issue with them and may not have time for further discussions. It is helpful to gauge this with them. Use your judgment as to when it is best to connect the web owner and disabled person and let them get on with the conversation. It is useful if they keep you informed so you can keep the status of the issue up to date.
 
Feel free to research technical issues and report back what you find from online forums such as Accessify, but also feel free to sign post website owners to other sources of support, some of which they may have to pay for. It is not your responsibility to ensure they fix the problem, we are just asking you to make sure they know how to go about it, if the will and capability is there.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The main purpose of the Fix the Web process is to hugely raise awareness of Web accessibility issues. Getting any kind of an acknowledgement from a website owner is progress! They may need more information, whether from the disabled person having the problem or at a more technical level.</p>
<p>As a volunteer it is entirely up to you how much involvement to have with the website owner and this may depend on your expertise (or lack of) in web accessibility. The disabled person who reported the issue may be willing to have detailed conversations with the website owner or may just wish to park the issue with them and may not have time for further discussions. It is helpful to gauge this with them. Use your judgment as to when it is best to connect the web owner and disabled person and let them get on with the conversation. It is useful if they keep you informed so you can keep the status of the issue up to date.</p>
<p>Feel free to research technical issues and report back what you find from online forums such as Accessify, but also feel free to sign post website owners to other sources of support, some of which they may have to pay for. It is not your responsibility to ensure they fix the problem, we are just asking you to make sure they know how to go about it, if the will and capability is there.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-20 09:52:33 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Why do you use the words “disabled people” rather than “people with disabilities”?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ffa8d642-0378-4385-87c3-abf0216a1c34',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1291826740,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1ba81ef1-2f82-4938-9a19-d93749458729',
  'revision_uid' => 1,
  'question' => 'Why do you use the words “disabled people” rather than “people with disabilities”?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->UK disability rights activists have defined “disability” as the experience of being excluded by society: a person is “disabled by society” and therefore a “disabled person”. “People with disabilities” (preferred in North America) has the advantage of emphasizing the person, but it can be a cumbersome expression. In the UK the more elegant phrase \'disabled people\' tends to be preferred, though there isn’t consensus on it and both terms may be used in the same article to reflect this.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>UK disability rights activists have defined “disability” as the experience of being excluded by society: a person is “disabled by society” and therefore a “disabled person”. “People with disabilities” (preferred in North America) has the advantage of emphasizing the person, but it can be a cumbersome expression. In the UK the more elegant phrase \'disabled people\' tends to be preferred, though there isn’t consensus on it and both terms may be used in the same article to reflect this.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-12-08 16:45:40 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Why is Fix the Web only available in English?  ',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c52ff3ec-1038-4562-b07b-d3ce2097a6b4',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286531261,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20d02b99-ab02-4804-afca-09163e3f3eb4',
  'revision_uid' => 1,
  'question' => 'Why is Fix the Web only available in English?  ',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The project has only had the funds to develop a site in English, but is seeking further funds to expand the project including language facilities. In any case, trialling the approach in one language to iron out issues seems like a reasonable methodology.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The project has only had the funds to develop a site in English, but is seeking further funds to expand the project including language facilities. In any case, trialling the approach in one language to iron out issues seems like a reasonable methodology.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-10-08 09:47:41 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How can I let people know that my website is accessible: can you give me a badge?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '95ac1289-6853-4ddf-9940-ff33e8303748',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1291825979,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2feaf0c5-20c3-47b0-8d69-a3d98b7475d5',
  'revision_uid' => 1,
  'question' => 'How can I let people know that my website is accessible: can you give me a badge?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->There are two approaches to badging website accessibility. The first is to self-certify, i.e. from your own expertise or from the information you have been given by your developers, you assume your site is accessible and use the W3C badges that are available for download:
<a href="http://www.w3.org/WAI/WCAG2-Conformance.html">   WCAG2.0 conformance badges </a>
You are, of course, responsible for the accuracy of your claim!

A second approach is to undertake an accessibility audit, making use of an expert; the following are available in the UK:
<a href="http://www.shaw-trust.org.uk/page/3/59/" >The Shaw Trust </a>
<a href="http://www.rnib.org.uk/professionals/webaccessibility/services/siteaudits/Pages/site_audits.aspx">Surf Right is co-delivered between RNIB and AbilityNet</a>
<a href="http://www.abilitynet.org.uk/webnews176"> AbilityNet’s own accreditation </a>

It is worth noting that websites are only “accessible” at a certain moment in time (because the addition of further content can diminish the accessibility if not undertaken correctly).

It has been suggested that web site owners should express their intent to be accessible by having an accessibility policy on the website.  The policy should also state the desire to get feedback if accessibility is not right.
<a href="http://www.bloorresearch.com/blog/accessibility/2010/11/fix-my-web-get-feedback-from-users.html"> Accessibility statements </a> are discussed here.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>There are two approaches to badging website accessibility. The first is to self-certify, i.e. from your own expertise or from the information you have been given by your developers, you assume your site is accessible and use the W3C badges that are available for download:<br /><a href="http://www.w3.org/WAI/WCAG2-Conformance.html">   WCAG2.0 conformance badges </a><br />
You are, of course, responsible for the accuracy of your claim!</p>
<p>A second approach is to undertake an accessibility audit, making use of an expert; the following are available in the UK:<br /><a href="http://www.shaw-trust.org.uk/page/3/59/">The Shaw Trust </a><br /><a href="http://www.rnib.org.uk/professionals/webaccessibility/services/siteaudits/Pages/site_audits.aspx">Surf Right is co-delivered between RNIB and AbilityNet</a><br /><a href="http://www.abilitynet.org.uk/webnews176"> AbilityNet’s own accreditation </a></p>
<p>It is worth noting that websites are only “accessible” at a certain moment in time (because the addition of further content can diminish the accessibility if not undertaken correctly).</p>
<p>It has been suggested that web site owners should express their intent to be accessible by having an accessibility policy on the website.  The policy should also state the desire to get feedback if accessibility is not right.<br /><a href="http://www.bloorresearch.com/blog/accessibility/2010/11/fix-my-web-get-feedback-from-users.html"> Accessibility statements </a> are discussed here.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
      ),
    ),
  ),
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
  'date' => '2010-12-08 16:32:59 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'What will you do about persistent offenders?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'af8dd468-d591-4c66-8b9f-8c17615c0ac5',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286531664,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '313d1c6b-4573-4cbb-8d2d-2a400a535ff8',
  'revision_uid' => 1,
  'question' => 'What will you do about persistent offenders?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The project has the potential to expose websites that are long term serious offenders on web accessibility; however we don’t currently have plans to do this. When we have reached a level of scale and sustainability, we will discuss this possibility with our partners.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The project has the potential to expose websites that are long term serious offenders on web accessibility; however we don’t currently have plans to do this. When we have reached a level of scale and sustainability, we will discuss this possibility with our partners.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-10-08 09:54:24 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'What should I report about a site that has so many issues I don’t know where to start?!',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c0e9ae17-cd3d-40b4-988f-e28ccff80b4b',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286536749,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '335dd9dc-fcaa-4b29-ac6e-af074a495556',
  'revision_uid' => 1,
  'question' => 'What should I report about a site that has so many issues I don’t know where to start?!',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'You can give a sample of the issues within one report, you don’t have to cover everything. A note to say that the issues has too many to list is OK!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>You can give a sample of the issues within one report, you don’t have to cover everything. A note to say that the issues has too many to list is OK!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
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
  'date' => '2010-10-08 11:19:09 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How is Fix the Web funded?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1decc7e7-695a-4cd6-9640-933853c9037c',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286531216,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '37d8a0d3-fd1f-47c7-9f3b-a6fffa3e5914',
  'revision_uid' => 1,
  'question' => 'How is Fix the Web funded?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The Nominet Trust gave Fix the Web an initial amount of money (£50k) to get established. Citizens Online are fundraising for further money to grow the project and sponsorship offers are <a href="/contact?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf" title="contact us">welcome</a>. If there are any gaps between funding periods Citizens Online will carry on the project where it can and Dr. Gail Bradbrook, who has led the project will resource it in her own time, because she is personally committed to it. In that way the project will survive as long as it is useful.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The Nominet Trust gave Fix the Web an initial amount of money (£50k) to get established. Citizens Online are fundraising for further money to grow the project and sponsorship offers are <a href="/contact?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf" title="contact us">welcome</a>. If there are any gaps between funding periods Citizens Online will carry on the project where it can and Dr. Gail Bradbrook, who has led the project will resource it in her own time, because she is personally committed to it. In that way the project will survive as long as it is useful.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-10-08 09:46:56 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Help us to write some FAQ\'s, what would be useful?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8897dc39-379d-4d72-87cc-f861d312a2ed',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286282118,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3d6a3743-6123-48bb-ae42-b1dfaff9f322',
  'revision_uid' => 1,
  'question' => 'Help us to write some FAQ\'s, what would be useful?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Please include in beta testing- your thoughts for FAQs',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Please include in beta testing- your thoughts for FAQs</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-10-05 12:35:18 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Can I be both a volunteer and a reporter?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4a2da7d7-7f08-4540-89a6-72bc4c21e622',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286890266,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '42ff4769-6d31-4075-bf67-9c9d5c9ddfe1',
  'revision_uid' => 1,
  'question' => 'Can I be both a volunteer and a reporter?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This is a service for disabled people to address web accessibility issues. There will be people out there who are both disabled and up for the task of volunteering to process reports. If this is you then you can <a href="http://www.fixtheweb.net/home#block-xuser-5">register as both a volunteer and a reporter</a>. You will be asked all the questions a volunteer would be asked aswell as those a reporter would be asked.',
        'summary' => 'This is a service for disabled people to address web accessibility issues. There will be people out there who are both disabled and up for the task of volunteering to process reports. If this is you then you can <a href="http://www.fixtheweb.net/home#block-xuser-5">register as both a volunteer and a reporter</a>. You will be asked all the questions a volunteer would be asked aswell as those a reporter would be asked.',
        'format' => 'filtered_html',
        'safe_value' => '<p>This is a service for disabled people to address web accessibility issues. There will be people out there who are both disabled and up for the task of volunteering to process reports. If this is you then you can <a href="http://www.fixtheweb.net/home#block-xuser-5">register as both a volunteer and a reporter</a>. You will be asked all the questions a volunteer would be asked aswell as those a reporter would be asked.</p>
',
        'safe_summary' => '<p>This is a service for disabled people to address web accessibility issues. There will be people out there who are both disabled and up for the task of volunteering to process reports. If this is you then you can <a href="http://www.fixtheweb.net/home#block-xuser-5">register as both a volunteer and a reporter</a>. You will be asked all the questions a volunteer would be asked aswell as those a reporter would be asked.</p>
',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-12 13:31:06 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I’m not disabled, but there are many websites that annoy me, can I use Fix the Web to report them?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8af899a9-057d-4df3-8a63-a068a9d6d7ce',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286536844,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '464607ab-2b8d-4cbd-9eaa-480105b9772b',
  'revision_uid' => 1,
  'question' => 'I’m not disabled, but there are many websites that annoy me, can I use Fix the Web to report them?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'No, please don’t. This is a service for disabled people to address web accessibility issues. We do hope you will report your issues to web owners, we all benefit when usability issues are addressed!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>No, please don’t. This is a service for disabled people to address web accessibility issues. We do hope you will report your issues to web owners, we all benefit when usability issues are addressed!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
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
  'date' => '2010-10-08 11:20:44 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'The website owners have been asking me a lot of technical questions that I don’t know the answer to – what shall I do?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f1af95e2-efef-4200-9b9c-b5cc3207e060',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1287696917,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '469f00a0-3029-4145-b979-12aaf245459b',
  'revision_uid' => 1,
  'question' => 'The website owners have been asking me a lot of technical questions that I don’t know the answer to – what shall I do?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'You can sign post them to the areas of support listed in the <a href="/links?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">links</a>, particularly useful is the Accessify Forum. Alternatively, you can research the answers, using places like Accessfiy forum if you would like to increase your own knowledge. Please be clear with the web owner if you are not an expert. At some stage it is reasonable for the web owner to pay an expert for help.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>You can sign post them to the areas of support listed in the <a href="/links?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">links</a>, particularly useful is the Accessify Forum. Alternatively, you can research the answers, using places like Accessfiy forum if you would like to increase your own knowledge. Please be clear with the web owner if you are not an expert. At some stage it is reasonable for the web owner to pay an expert for help.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-21 21:35:17 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I have forgotten my password, how do I reset it?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0ee466fa-2f09-4ae6-9027-5370a05f18bb',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1289886952,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4ac5f40f-625b-4919-8d9f-252712cf3d91',
  'revision_uid' => 1,
  'question' => 'I have forgotten my password, how do I reset it?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->Visit the <a href="/user/password?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">password reset page</a> and you will be guided through the process.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Visit the <a href="/user/password?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">password reset page</a> and you will be guided through the process.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-11-16 05:55:52 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I can\'t find the contact details for the web owners - what shall I do?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '97b51b27-b4e8-4cc4-ba84-7ceddf7176c5',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1289908647,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4b4bf206-6f02-457a-b205-82a27b6a1a68',
  'revision_uid' => 1,
  'question' => 'I can\'t find the contact details for the web owners - what shall I do?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->If there are anyways to be in touch via the website, please try them, even if you have to hope the person you contact passes on your mail to the right person.

A possibility is to use a <a href="http://whois.domaintools.com">whois search</a>. It will tell you who owns the site and their contact details. It may be an agent but there should at least be a postal address. This could help in some cases. We did consider adding this search to my dashboard but have decided to leave it here for now.

If there really is no way of contacting the web owner just close the report with that reason noted.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>If there are anyways to be in touch via the website, please try them, even if you have to hope the person you contact passes on your mail to the right person.</p>
<p>A possibility is to use a <a href="http://whois.domaintools.com">whois search</a>. It will tell you who owns the site and their contact details. It may be an agent but there should at least be a postal address. This could help in some cases. We did consider adding this search to my dashboard but have decided to leave it here for now.</p>
<p>If there really is no way of contacting the web owner just close the report with that reason noted.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-11-16 11:57:27 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Why do I need to register to become a reporter',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1b224431-79bd-45a8-94c4-67dc56837cc8',
  'type' => 'faq',
  'language' => 'en',
  'created' => 1356007746,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '51c7da80-0d02-4c44-8eeb-4f2444ea9576',
  'revision_uid' => 1,
  'question' => 'Why do I need to register to become a reporter',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'In the beginning we tried not to make this mandatory, but after 2 years of testing we were getting too many reports which weren’t accessibility issues. Without a way to get back in touch we could not tell these reporters that they weren’t reporting accessibility issues and that we could not help them, or block them if they kept on doing so.',
        'summary' => 'In the beginning we tried not to make this mandatory, but after 2 years of testing we were getting too many reports which weren’t accessibility issues. Without a way to get back in touch we could not tell these reporters that they weren’t reporting accessibility issues and that we could not help them, or block them if they kept on doing so.',
        'format' => 'filtered_html',
        'safe_value' => '<p>In the beginning we tried not to make this mandatory, but after 2 years of testing we were getting too many reports which weren’t accessibility issues. Without a way to get back in touch we could not tell these reporters that they weren’t reporting accessibility issues and that we could not help them, or block them if they kept on doing so.</p>
',
        'safe_summary' => '<p>In the beginning we tried not to make this mandatory, but after 2 years of testing we were getting too many reports which weren’t accessibility issues. Without a way to get back in touch we could not tell these reporters that they weren’t reporting accessibility issues and that we could not help them, or block them if they kept on doing so.</p>
',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2012-12-20 12:49:06 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How do I delete my account?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3f15be9f-7e42-421b-9a0c-31cdf4cca267',
  'type' => 'faq',
  'language' => 'en',
  'created' => 1311173760,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5572c1bc-829c-43db-9e66-a9ebd64e0f82',
  'revision_uid' => 1,
  'question' => 'How do I delete my account?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Visit "My account" form the menu and then go to the tab "edit", then under "Account information" you should find a link to delete your account. When doing this you will be asked to fill in any information about your current progress on any reports that are assigned to you.',
        'summary' => 'Visit "My account" form the menu and then go to the tab "edit", then under "Account information" you should find a link to delete your account. When doing this you will be asked to fill in any information about your current progress on any reports that are assigned to you.',
        'format' => 'filtered_html',
        'safe_value' => '<p>Visit "My account" form the menu and then go to the tab "edit", then under "Account information" you should find a link to delete your account. When doing this you will be asked to fill in any information about your current progress on any reports that are assigned to you.</p>
',
        'safe_summary' => '<p>Visit "My account" form the menu and then go to the tab "edit", then under "Account information" you should find a link to delete your account. When doing this you will be asked to fill in any information about your current progress on any reports that are assigned to you.</p>
',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2011-07-20 14:56:00 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I want to report an aspect of a site which I am logged in to, should I give out my login details?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7757be5e-280e-47f3-9c2b-dca803657142',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286536779,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6519ffe4-a725-4e58-9431-55a78101ca64',
  'revision_uid' => 1,
  'question' => 'I want to report an aspect of a site which I am logged in to, should I give out my login details?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'No. Please give a little more detail about where you are in the site for the web owner to understand.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>No. Please give a little more detail about where you are in the site for the web owner to understand.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
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
  'date' => '2010-10-08 11:19:39 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Do I need to be a techie or an expert in Web Accessibility to volunteer for Fix the Web?  ',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c8c670db-f6db-414c-8a68-45f129237a5f',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286534994,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '717c3007-5d18-41f6-a3d4-7aa8610b27ff',
  'revision_uid' => 1,
  'question' => 'Do I need to be a techie or an expert in Web Accessibility to volunteer for Fix the Web?  ',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->No. Being competent with technology and having some background understanding of web accessibility issues is really helpful. So we are asking volunteers to get to grips with the basics by reviewing the websites listed in the <a href="/links?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">links</a> section. We very much welcome web accessibility experts and are asking if people consider themselves thus. It may be that overtime we realise there is a particular and useful role for these experts to play.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>No. Being competent with technology and having some background understanding of web accessibility issues is really helpful. So we are asking volunteers to get to grips with the basics by reviewing the websites listed in the <a href="/links?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">links</a> section. We very much welcome web accessibility experts and are asking if people consider themselves thus. It may be that overtime we realise there is a particular and useful role for these experts to play.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-08 10:49:54 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Can you give me guidance about how to ensure the website I set up is accessible?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bdcca26d-6a6e-4d27-a290-67a8c46d779c',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1291827024,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '74e5efd4-22b7-46c0-ab29-093ab814b951',
  'revision_uid' => 1,
  'question' => 'Can you give me guidance about how to ensure the website I set up is accessible?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->If you are commissioning a new website there are many reasons why you would want to ensure it is accessible. There are two things to consider, what guidelines to follow and who should develop the new site. 

In terms of guidelines <a href="http://www.w3.org/TR/WCAG20"> WCAG2.0 </a> are the main standards from the global Web Accessibility Initiative; however some may find them rather “techie” or feel quite lost in the detail. 

To assist, a <a href=" http://shop.bsigroup.com/en/ProductDetail/?pid=000000000030180388">British Standard</a> has recently been launched (BS8878) (the interim guidance was PAS78) for those commissioning or building websites. 

The official slides on BS 8878 from its launch, together with other free information including, case studies of organisations using BS 8878, detailed blogs on its use by SMEs, tools and training for applying the Standard, and news on its progress towards an International Standard, can be found at: <a href="http://www.hassellinclusion.com/bs8878/">www.hassellinclusion.com</a>

<a href="http://www.access8878.co.uk"> Access8878 </a> is developing resources to support the use of BS8878. A blog from Bloor research includes other  <a href= “http://www.it-analysis.com/business/compliance/content.php?cid=10847">useful information on WCAG2.0</a> 

Another issue is finding a developer who is competent in web accessibility. At the moment there are no professional qualifications to give you reassurance of the level of people’s knowledge (an Institute is considering embedding these in general qualifications, but they aren’t there yet). Experts tend to hang out on <a href="http://www.accessifyforum.com/">Accessify Forum</a>  and the <a href="http://www.gawds.org">Guild of Accessible Web Developers</a>.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>If you are commissioning a new website there are many reasons why you would want to ensure it is accessible. There are two things to consider, what guidelines to follow and who should develop the new site. </p>
<p>In terms of guidelines <a href="http://www.w3.org/TR/WCAG20"> WCAG2.0 </a> are the main standards from the global Web Accessibility Initiative; however some may find them rather “techie” or feel quite lost in the detail. </p>
<p>To assist, a <a href="//shop.bsigroup.com/en/ProductDetail/?pid=000000000030180388">British Standard</a> has recently been launched (BS8878) (the interim guidance was PAS78) for those commissioning or building websites. </p>
<p>The official slides on BS 8878 from its launch, together with other free information including, case studies of organisations using BS 8878, detailed blogs on its use by SMEs, tools and training for applying the Standard, and news on its progress towards an International Standard, can be found at: <a href="http://www.hassellinclusion.com/bs8878/">www.hassellinclusion.com</a></p>
<p><a href="http://www.access8878.co.uk"> Access8878 </a> is developing resources to support the use of BS8878. A blog from Bloor research includes other  <a>useful information on WCAG2.0</a> </p>
<p>Another issue is finding a developer who is competent in web accessibility. At the moment there are no professional qualifications to give you reassurance of the level of people’s knowledge (an Institute is considering embedding these in general qualifications, but they aren’t there yet). Experts tend to hang out on <a href="http://www.accessifyforum.com/">Accessify Forum</a>  and the <a href="http://www.gawds.org">Guild of Accessible Web Developers</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
      ),
    ),
  ),
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
  'date' => '2010-12-08 16:50:24 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Can l get volunteers from Fix the Web to look over my website and say whether it is accessible?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a7af9979-da81-4c54-845a-eaeaac80334e',
  'type' => 'faq',
  'language' => 'en',
  'created' => 1295973295,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7a72ad22-bef9-4fec-8ead-a1c2811557bb',
  'revision_uid' => 1,
  'question' => 'Can l get volunteers from Fix the Web to look over my website and say whether it is accessible?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->This isn’t the purpose of Fix the web and not all volunteers have the skills to do this. However the following companies can undertake detailed auditing (and in some cases user testing) for a fee. They are generally willing to give a health check / headline review on your site for free, to give initial feedback (a more detailed audit being necessary if you want to fully address accessibility):
<a href= "http://www.abilitynet.org.uk/web" >AbilityNet</a>
<a href= "http://www.bloorresearch.com/about/people/Peter_Abrahams.html" >Bloor</a>
<a href= "http://www.coolfields.co.uk/" >Coolfields</a>
<a href= "http://www.hanona.org/" >Hanona</a>
<a href= "http://www.prettysimple.co.uk/" >Pretty Simple</a>
<a href= "http://www.rnib.org.uk/professionals/webaccessibility/Pages/web_accessibility.aspx" >RNIB</a>

Accessfiy Forum also has a <a href= "http://www.accessifyforum.com/forum11/" >Site Critiques</a> section that may be of use.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This isn’t the purpose of Fix the web and not all volunteers have the skills to do this. However the following companies can undertake detailed auditing (and in some cases user testing) for a fee. They are generally willing to give a health check / headline review on your site for free, to give initial feedback (a more detailed audit being necessary if you want to fully address accessibility):<br /><a href="http://www.abilitynet.org.uk/web">AbilityNet</a><br /><a href="http://www.bloorresearch.com/about/people/Peter_Abrahams.html">Bloor</a><br /><a href="http://www.coolfields.co.uk/">Coolfields</a><br /><a href="http://www.hanona.org/">Hanona</a><br /><a href="http://www.prettysimple.co.uk/">Pretty Simple</a><br /><a href="http://www.rnib.org.uk/professionals/webaccessibility/Pages/web_accessibility.aspx">RNIB</a></p>
<p>Accessfiy Forum also has a <a href="http://www.accessifyforum.com/forum11/">Site Critiques</a> section that may be of use.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
      ),
    ),
  ),
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
  'date' => '2011-01-25 16:34:55 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Where can I discuss Fix the Web with other people?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '835791e0-bf0c-470a-835b-ea4652b3c263',
  'type' => 'faq',
  'language' => 'en',
  'created' => 1314780875,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7cc218d0-4622-4224-a31c-ecae011994de',
  'revision_uid' => 1,
  'question' => 'Where can I discuss Fix the Web with other people?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'There is a discussion thread on Accessify Forum about Fix the Web:
http://www.accessifyforum.com/forum20/

And you can talk about it on twitter using #fixtheweb

We are discussing ways to implement more dialogue through the site, which will be implemented when we are clear and have the resources!',
        'summary' => 'There is a discussion thread on Accessify Forum about Fix the Web:
http://www.accessifyforum.com/forum20/

And you can talk about it on twitter using #fixtheweb

We are discussing ways to implement more dialogue through the site, which will be implemented when we are clear and have the resources!',
        'format' => 'filtered_html',
        'safe_value' => '<p>There is a discussion thread on Accessify Forum about Fix the Web:<br /><a href="http://www.accessifyforum.com/forum20/">http://www.accessifyforum.com/forum20/</a></p>
<p>And you can talk about it on twitter using #fixtheweb</p>
<p>We are discussing ways to implement more dialogue through the site, which will be implemented when we are clear and have the resources!</p>
',
        'safe_summary' => '<p>There is a discussion thread on Accessify Forum about Fix the Web:<br /><a href="http://www.accessifyforum.com/forum20/">http://www.accessifyforum.com/forum20/</a></p>
<p>And you can talk about it on twitter using #fixtheweb</p>
<p>We are discussing ways to implement more dialogue through the site, which will be implemented when we are clear and have the resources!</p>
',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2011-08-31 08:54:35 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'What should I do when I run a Wave accessibility test on a reported websites and it says there are no issues?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '64ccab8e-2fa8-4d12-a369-779153992bae',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286536617,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9d523180-0c50-4d31-a5d5-85c79435eb9c',
  'revision_uid' => 1,
  'question' => 'What should I do when I run a Wave accessibility test on a reported websites and it says there are no issues?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'There are three possible explanations for this. Firstly that Wave has missed something. Secondly that you aren’t able to get to the page the person reported (perhaps you had to go in via a log in page?) Thirdly that the disabled person has made an error, this can happen if they are not so familiar with their adaptive technologies (information on their level of competency might be available with the report and could give you an idea). The best thing therefore is to contact the disabled person for more information.  

If it turns out you think they might not be using their AT properly please sign post them to ITCH and ABilityNET http://www.itcanhelp.org.uk on the <a href="/links">links page</a>.

If it isn’t entirely clear you could always ask an expert on Accessify forum to check the site for you. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>There are three possible explanations for this. Firstly that Wave has missed something. Secondly that you aren’t able to get to the page the person reported (perhaps you had to go in via a log in page?) Thirdly that the disabled person has made an error, this can happen if they are not so familiar with their adaptive technologies (information on their level of competency might be available with the report and could give you an idea). The best thing therefore is to contact the disabled person for more information.  </p>
<p>If it turns out you think they might not be using their AT properly please sign post them to ITCH and ABilityNET <a href="http://www.itcanhelp.org.uk">http://www.itcanhelp.org.uk</a> on the <a href="/links">links page</a>.</p>
<p>If it isn’t entirely clear you could always ask an expert on Accessify forum to check the site for you.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-08 11:16:57 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Won’t website owners think they don’t need to check web-accessibility issues now because Fix the Web will do this work for them?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '42ce8065-0180-4915-acfd-a257eeb799fb',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286531697,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a1442cad-512e-4c75-ae5f-56cf34c7dc38',
  'revision_uid' => 1,
  'question' => 'Won’t website owners think they don’t need to check web-accessibility issues now because Fix the Web will do this work for them?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->We will work hard to ensure that this isn’t the message that people get. Fix the Web will help raise awareness of web accessibility. Volunteers can offer as much or as little advice as they like to website owners, according to their level of expertise in web accessibility, their time and their view of what makes sense. Many web accessibility issues can get “hard coded” into a site (i.e. not easy to sort out) if the issue isn’t thought of upfront. In addition, lack of web accessibility can cost people business – it is ignorance or foolishness that cause websites to ignore this issue. Fix the Web aims to deal with this, not create a sticking patch.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>We will work hard to ensure that this isn’t the message that people get. Fix the Web will help raise awareness of web accessibility. Volunteers can offer as much or as little advice as they like to website owners, according to their level of expertise in web accessibility, their time and their view of what makes sense. Many web accessibility issues can get “hard coded” into a site (i.e. not easy to sort out) if the issue isn’t thought of upfront. In addition, lack of web accessibility can cost people business – it is ignorance or foolishness that cause websites to ignore this issue. Fix the Web aims to deal with this, not create a sticking patch.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-10-08 09:54:57 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'A volunteer from Fix the Web has contacted me about my website, can you explain how to make it more accessible?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '120c71c5-6a2c-40ec-ae88-0387e3217950',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286536909,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a5af848b-5ad2-4ae3-8165-1e7819938144',
  'revision_uid' => 1,
  'question' => 'A volunteer from Fix the Web has contacted me about my website, can you explain how to make it more accessible?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'We are glad you are interested in making your website more accessible. We can’t offer detailed information on this because it requires expertise and can be time consuming. Please follow these <a href="/links?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">links</a> for more information where you can find more information out for yourself or experts who may help. If you have a detailed piece of work it is likely that experts will require paying after some time. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>We are glad you are interested in making your website more accessible. We can’t offer detailed information on this because it requires expertise and can be time consuming. Please follow these <a href="/links?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">links</a> for more information where you can find more information out for yourself or experts who may help. If you have a detailed piece of work it is likely that experts will require paying after some time.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
      ),
    ),
  ),
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
  'date' => '2010-10-08 11:21:49 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Can I be both a reporter and a volunteer?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e78f0759-ea32-40ec-a70a-510b30b649fc',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1289935007,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b45982a8-5434-4d67-98a8-353ecb7f4e2b',
  'revision_uid' => 1,
  'question' => 'Can I be both a reporter and a volunteer?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->This is a service for disabled people to address web accessibility issues. There will be people out there who are both disabled and up for the task of volunteering to process reports. If this is you then you can <a href="http://www.fixtheweb.net/register/both">register as both a volunteer and a reporter</a>. You will be asked all the questions a volunteer would be asked aswell as those a reporter would be asked.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This is a service for disabled people to address web accessibility issues. There will be people out there who are both disabled and up for the task of volunteering to process reports. If this is you then you can <a href="http://www.fixtheweb.net/register/both">register as both a volunteer and a reporter</a>. You will be asked all the questions a volunteer would be asked aswell as those a reporter would be asked.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
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
  'date' => '2010-11-16 19:16:47 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Why are lots of the tweeted reports not real reports when you look at them?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4a76e4d3-3fcd-44ec-817b-17b9fa943c64',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286535575,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c564232d-0f30-4aef-b031-af62bb7e5491',
  'revision_uid' => 1,
  'question' => 'Why are lots of the tweeted reports not real reports when you look at them?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Tweets are picked up by our system when they contain the words #FixtheWeb #fail. Sometimes the information about tweeting may be passed around twitter without being an actual report. Please go to your dashboard, view that report then close the report.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Tweets are picked up by our system when they contain the words #FixtheWeb #fail. Sometimes the information about tweeting may be passed around twitter without being an actual report. Please go to your dashboard, view that report then close the report.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-08 10:59:35 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I need to contact the reporter, but they are only available on twitter and I don’t have a twitter account, what shall I do?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8655ca34-889a-49f5-ad57-ccc46f18ee46',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286536679,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c7379e00-6bfa-4084-bf04-57ab85369e84',
  'revision_uid' => 1,
  'question' => 'I need to contact the reporter, but they are only available on twitter and I don’t have a twitter account, what shall I do?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'You can do one of two things. Either get an account on twitter (it is quite straight forwards and could be useful for other Fix the Web jobs). Or re-assign the report so someone else can pick it up.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>You can do one of two things. Either get an account on twitter (it is quite straight forwards and could be useful for other Fix the Web jobs). Or re-assign the report so someone else can pick it up.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-08 11:17:59 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Website owners are either ignoring my emails or fobbing me off, what can I do about it?  ',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'deac4183-698a-4968-a4df-25a2f4fb6ea7',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286535517,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c89d1339-9f70-41c0-8faa-5d9841b11a96',
  'revision_uid' => 1,
  'question' => 'Website owners are either ignoring my emails or fobbing me off, what can I do about it?  ',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Please be assured that having raised the matter you have done two valuable things. You have highlighted the issue, which may well have been noted, even if the owners don’t want to dialogue about it. You have also save the time of a disabled person it trying to take it forwards. Please feel free to chase for what you feel is a reasonable number of times and thengo to your dashboard, visit that report and then close the report.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Please be assured that having raised the matter you have done two valuable things. You have highlighted the issue, which may well have been noted, even if the owners don’t want to dialogue about it. You have also save the time of a disabled person it trying to take it forwards. Please feel free to chase for what you feel is a reasonable number of times and thengo to your dashboard, visit that report and then close the report.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-08 10:58:37 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Can I report things other than websites, e.g. software and email',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5a2da252-7a99-4dfc-b551-67aaf1b92a61',
  'type' => 'faq',
  'language' => 'en',
  'created' => 1291902317,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd1d02df6-7e7e-40f1-9390-a3cd315f4e36',
  'revision_uid' => 1,
  'question' => 'Can I report things other than websites, e.g. software and email',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->Yes please do! It helps us if you can give a relevant website address of course. At the moment we aren\'t focussed on hardware. 
<a href = "http://www.disabledgo.com/">Disabled GO (UK) </a> and <a href = "http://www.jjslist.com/">JJlist</a> (US) are good sources for accessibility of venues and services services!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Yes please do! It helps us if you can give a relevant website address of course. At the moment we aren\'t focussed on hardware.<br /><a href="http://www.disabledgo.com/">Disabled GO (UK) </a> and <a href="http://www.jjslist.com/">JJlist</a> (US) are good sources for accessibility of venues and services services!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
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
  'date' => '2010-12-09 13:45:17 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I work as an expert in web accessibility; can I promote my business when I do Fix the Web volunteering?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9b99cbde-53b7-4b6a-ad28-81b3d7b90efb',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286535409,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ed568719-cd8d-4c82-b6ec-abfbd951acb0',
  'revision_uid' => 1,
  'question' => 'I work as an expert in web accessibility; can I promote my business when I do Fix the Web volunteering?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'No and yes! Basically we would like the first email contact that goes to a site owner to follow the standard format. We do not wish to appear as some overtly commercial outfit where people are attempting to drum up business because this can be counterproductive. However, if the web owner is back in touch and a friendly dialogue ensues it seems very reasonable to us, at some stage, to mention the fact that you have expertise that can be bought. We don’t expect anyone to work for free over time with a web owner to help them get to grips with their issues. We leave it to your professional judgement and personal resource issues to decide how much advice you wish to offer for free.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>No and yes! Basically we would like the first email contact that goes to a site owner to follow the standard format. We do not wish to appear as some overtly commercial outfit where people are attempting to drum up business because this can be counterproductive. However, if the web owner is back in touch and a friendly dialogue ensues it seems very reasonable to us, at some stage, to mention the fact that you have expertise that can be bought. We don’t expect anyone to work for free over time with a web owner to help them get to grips with their issues. We leave it to your professional judgement and personal resource issues to decide how much advice you wish to offer for free.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
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
  'date' => '2010-10-08 10:56:49 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Who is behind Fix the Web?  ',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8928beef-b2ad-4e1d-89cc-260c4285b5c6',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286530907,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f293ebce-1ae5-4c9c-a7ce-a2aa51b96799',
  'revision_uid' => 1,
  'question' => 'Who is behind Fix the Web?  ',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Citizens Online, an independent national charity focussed on an inclusive Internet Age, has been the driving force behind the project. Citizens Online has been asking many stakeholders since early 2009 about how the project should work and welcomes ongoing improvement and <a href="/contact?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf" title="contact us">input</a>. <a href="/about?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#partners">Partners are listed here</a>.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Citizens Online, an independent national charity focussed on an inclusive Internet Age, has been the driving force behind the project. Citizens Online has been asking many stakeholders since early 2009 about how the project should work and welcomes ongoing improvement and <a href="/contact?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf" title="contact us">input</a>. <a href="/about?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#partners">Partners are listed here</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
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
  'date' => '2010-10-08 09:41:47 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'I don’t like the way one of your volunteers has been talking to me, what can I do about it?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4704aede-17e5-4155-a950-945043c1a47d',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1286536958,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fbe26ea6-f987-444a-8dbb-ab8da28cdbd4',
  'revision_uid' => 1,
  'question' => 'I don’t like the way one of your volunteers has been talking to me, what can I do about it?',
  'detailed_question' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Please can you send on information about the volunteer and what is troubling you, including emails you have received. If we agree that our volunteer has acted inappropriately we will ask them to apologise and change their tone. Volunteers who are consistently unhelpful or rude will be asked to stop participating in the project.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Please can you send on information about the volunteer and what is troubling you, including emails you have received. If we agree that our volunteer has acted inappropriately we will ask them to apologise and change their tone. Volunteers who are consistently unhelpful or rude will be asked to stop participating in the project.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
      ),
    ),
  ),
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
  'date' => '2010-10-08 11:22:38 +0000',
);
  return $nodes;
}
