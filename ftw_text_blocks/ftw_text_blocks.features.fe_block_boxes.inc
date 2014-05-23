<?php
/**
 * @file
 * ftw_text_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ftw_text_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Incorrect reports';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'count_incorrect_reports';
  $fe_block_boxes->body = '<p>Sites reported to Fix the Web which are not unique reports of website issues. This is comprised of reporting of none accessibility issues, using the reporting mechanism to comment on the project in general and the “retweeting” of tweets (#fixtheweb #fail).</p>';

  $export['count_incorrect_reports'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Owners acknowledged';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'count_owners_acknowledged';
  $fe_block_boxes->body = 'Reports where the site owner has acknowledged the accessibility issue. Often they may pledge to do something about it. This may be at a clearly defined point in the future (in which case the volunteer can track progress) or it may be indeterminate';

  $export['count_owners_acknowledged'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Owners fixed';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'count_owners_fixed';
  $fe_block_boxes->body = '<p>The issue as described by the reporter has been addressed. This doesn’t mean the whole site is now accessible (some would argue such a concept is always relative). Fix the Web does not currently check that this is the case, but the reporter logged with the system can hear about this update and may wish to check for themselves.</p>';

  $export['count_owners_fixed'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Owners informed';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'count_owners_informed';
  $fe_block_boxes->body = '<p>Reports where the site owner has been sent an email describing the accessibility issue.</p>';

  $export['count_owners_informed'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Reporters';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'count_reporters';
  $fe_block_boxes->body = '<p>People signed up to report accessibility issues. Some reports are made anonymously or by people who don’t wish to be registered on the site. Registering with the site makes background information easier to log.</p>';

  $export['count_reporters'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Reports in progress';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'count_reports_in_progress';
  $fe_block_boxes->body = 'Reports that have been accepted, but not yet closed by a volunteer having been fixed, acknowledged, etc. In some cases a volunteer may wait months to hear of fixes made in new releases of a site.';

  $export['count_reports_in_progress'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Tweets';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'count_tweets';
  $fe_block_boxes->body = '<p>Tweets made that include the <a href="https://twitter.com/search?q=%23fixtheweb&src=typd">#fixtheweb hash tag</a>.</p>';

  $export['count_tweets'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Volunteers';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'count_volunteers';
  $fe_block_boxes->body = '<p>People signed up to process the reports coming in about accessibility issues.</p>';

  $export['count_volunteers'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Count: Websites reported';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'count_websites_reported';
  $fe_block_boxes->body = '<p>Reports that have arrived via our website, the fix the web toolbar, via twitter, or by email.</p>';

  $export['count_websites_reported'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Not an accessibility issue email';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'email_not_an_acessibility_email';
  $fe_block_boxes->body = '<p>We have had your last report looked at by one of our volunteers and they have decided it was not an <a href="http://www.fixtheweb.net/accessibility">accessibility</a> issue. If your next report is also not an accessibility issue then you will be blocked from reporting to our website.&nbsp;We have to do this because we need to keep the quality of reports good for our volunteers so that they can spend most of their time volunteering for us on reporting accessibility issues to web owners, what we have set out to do.</p><p>Our website is only able to process issues that relate to accessibility (not problems with customer service, or offensive content and so on).</p><p>You may want to look at&nbsp;<a href="http://www.fixtheweb.net/links">our links page</a>&nbsp;for signposts towards more information about what an&nbsp;<a href="http://www.fixtheweb.net/accessibility">accessibility</a> issue is, and also links to other organisations that may be able to help disabled people with technology issues.</p><p>We hope that this was a good decision made by our volunteer, but mistakes can happen. If you feel that this decision was a mistake please get in <a href="http://http://www.fixtheweb.net/contact">contact</a> and we will rectify the situation.</p><p>Thanks from the Fix the Web team.</p>';

  $export['email_not_an_acessibility_email'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Not an accessibility issue email 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'email_not_an_acessibility_email2';
  $fe_block_boxes->body = '<p class="p1">We have had a second report looked at by one of our volunteers and they have decided it was not an&nbsp;<a href="http://www.fixtheweb.net/accessibility">accessibility</a> issue. As this has happened before we now have to <span class="s1">block</span> you from reporting to our website. We have to do this because we need to keep the quality of reports good for our volunteers so that they can spend most of their time volunteering for us on reporting accessibility issues to web owners, what we have set out to do.</p><p class="p1">Our website is only able to process issues that relate to accessibility (not problems with customer service, or offensive content and so on).</p><p class="p1">You may want to look at&nbsp;<a href="http://www.fixtheweb.net/links">our links page</a>&nbsp;for signposts towards more information about what an&nbsp;<a href="http://www.fixtheweb.net/accessibility">accessibility</a>&nbsp;issue is, and also links to other organisations that may be able to help disabled people with technology issues.</p><p class="p1">We hope that this was a good decision made by our volunteer, but mistakes can happen. If you feel that this decision was a mistake please get in&nbsp;<a href="http://http//www.fixtheweb.net/contact"><span class="s2">contact</span></a>&nbsp;and we will rectify the situation.</p><p class="p1">Thanks from the Fix the Web team.</p>';

  $export['email_not_an_acessibility_email2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Closure email';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'email_report_closure_to_reporter';
  $fe_block_boxes->body = 'Dear [name], 

Your Fix the Web report for [url] has been <strong>closed</strong>.

The reason for the report being closed is: [closure reason].

For more information about the report, go to [link]

Thank you for your report and for helping to fix the web.';

  $export['email_report_closure_to_reporter'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Spam';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'email_spam_body';
  $fe_block_boxes->body = '<p>We have had your last report looked at by one of our volunteers and they&nbsp;thought&nbsp;that your report was not relevant to the focus we have on web and software accessibility for disabled people.</p><p>We hope that this was a good decision made by our reporter, but mistakes can happen. Your account has now been blocked. If you feel that this decision was a mistake please get in <a href="http://http://www.fixtheweb.net/contact">contact</a> and we will rectify the situation.</p><p>Thanks from the Fix the Web team.</p>';

  $export['email_spam_body'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Nag text sent to the volunteer';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'email_volunteer_nag_email';
  $fe_block_boxes->body = 'Dear [name]

We are receiving genuine reports into Fix the Web that need a volunteer to attend to, so here is your nudge to remind you to go and have a look at the status of yours!

<h4>A few notes:</h4>

As well as genuine reports, we also have a bit of a spam issue: quite a few reports are being submitted that aren\'t relevant for the Fix the Web campaign. While we are trying to filter these out at source, please close such reports with the appropriate label if you find them.

We have also found that some reports are being closed as "fixed" when they haven\'t really been satisfactorily addressed, and of course some website owners will try to fob you off by saying things will be fixed. So please can you make sure you chase up on old reports at least three times - allowing sufficient time between contacts - before finally closing them. We need to increase our percentage of fixed reports!

[dashboard]

Please contact us if you have any difficulties.

Best wishes and thanks again for your tenacity, patience and hard work!
The Fix the Web Team

You have asked for a reminder every [reminder] days, if you want to change this at any time please <a href="http://www.fixtheweb.net/user/login">login</a> then go to My Account to edit your profile.

If you have queries please do not reply directly to this email. Login at fixtheweb.net and use our <a href="http://www.fixtheweb.net/contact">contact form</a> instead.
Fix the Web is an innovative project to crowd-source e-accessibility. It is led by Citizens Online and funded by Nominet Trust, with support from partners such as AbilityNet, Hanona, Nomensa, Bloor Research, RNIB and Coolfields Consulting.';

  $export['email_volunteer_nag_email'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Subject of email from volunteer to volunteer';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'email_volunteer_subject';
  $fe_block_boxes->body = 'Fix the Web: A question from another volunteer';

  $export['email_volunteer_subject'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Template for volunteer to send to web owner';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'email_web_owner';
  $fe_block_boxes->body = 'Dear Website Owner,

A disabled person has logged that they have a problem with your website and I am acting on their behalf to hopefully help you to resolve it. I am working for Fix the Web ( http://www.fixtheweb.net ) which has been set up to work in collaboration with website owners to improve e-accessibility.
  
Fix the Web believes in working together with website owners such as yourself, to help make sites accessible to everyone - for the benefit of the disabled community who want to visit your site and also for your benefit - to increase the traffic to your site.

We receive reports from disabled people who are experiencing difficulties with accessing websites and then take them back to website owners to attempt to get the problems resolved.

Regarding your website, a disabled person logged this page:

[url]

And gave the following information:

[issue]

You may of course be aware of the issues raised and even be in process of getting them fixed.  There is also the chance that the disabled person made an error.  However, if you are unaware of accessibility issues, the best site to visit for information, guidelines and best practice is: http://www.w3.org/standards/webdesign/accessibility.html

I would like to support you in making positive changes to your site and it would be great to hear from you so that we can take this report forward and get it resolved.

Yours Sincerely,
[volunteer name]
[volunteer contact information]


Further Information

Fix the Web
Websites are required to be accessible in many countries by national policies. The UN Convention on the Rights of Persons with Disabilities states that disabled people have a right to access information and services via the Internet. Also, accessible websites provide business benefits for website owners and benefits for people without disabilities.

Fix the Web is an innovative project to crowd-source e-accessibility. It is led by Citizens Online and funded by Nominet Trust, with support from partners such as AbilityNet, Hanona, Nomensa, Bloor Research, RNIB and Coolfields Consulting. Initial information about e-accessibility issues collected from disabled people may be brief (some comes via Twitter). Further information can be sought if you are willing to work through the volunteer. Occasionally your website may not have a problem because the disabled person made an error; we hope you will bear with us if that happens. If you feel any part of the process is not satisfactory, please raise this with the volunteer or contact the Fix the Web admin team ( admin@fixtheweb.net )';

  $export['email_web_owner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Not an accessibility issue email subject';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'esubj_not_an_acessibility_email';
  $fe_block_boxes->body = 'Warning, you may be blocked from reporting to Fix the Web';

  $export['esubj_not_an_acessibility_email'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Not an accessibility issue email 2 subject';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'esubj_not_an_acessibility_email2';
  $fe_block_boxes->body = 'Sorry, But you have been blocked from reporting to Fix the Web';

  $export['esubj_not_an_acessibility_email2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Closure email subject';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'esubj_report_closure_to_reporter';
  $fe_block_boxes->body = 'Fix the Web: Your report has been dealt with';

  $export['esubj_report_closure_to_reporter'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Spam subject';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'esubj_spam_body';
  $fe_block_boxes->body = 'Sorry, But you have been blocked from reporting to Fix the Web';

  $export['esubj_spam_body'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Email: Nag text sent to the volunteer subject';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'esubj_volunteer_nag_email';
  $fe_block_boxes->body = 'Fix the web dashboard nudge';

  $export['esubj_volunteer_nag_email'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Accept report';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_accept_report';
  $fe_block_boxes->body = '<span class="help-link"><a href="#content" alt="back to the top">&raquo; back</a></span>
<dl>
  <lh>Help definitions</lh>
  <dt id="help-url">What is the website?</dt>
  <dd>This is the website address of the report. If this field is empty then find out what it is from the report and enter it in here. <a href="#help-url-top" alt="back to the form"><span class="help-link">&raquo; back to the form</span></a></dd>
  <dt  id="help-issue">What is the issue?</dt>
  <dd>This is the report that was made by the reporter. You should not need to edit this at this stage in the process. <a href="?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#edit-issue-wrapper"alt="back to the form"><span class="help-link">&raquo; back to the form</span></a></dd>
  <dt  id="help-comment">Status Comment</dt>
  <dd>This is a note for yourself that appears next to the website address in your dashboard to help you track the progress of your reports. <a href="?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#edit-comment-wrapper"alt="back to the form"><span class="help-link">&raquo; back to the form</span></a></dd>
  <dt  id="help-notes">Notes</dt>
  <dd>This is a place to put notes for yourself and any other volunteers who may view this report in the future, should you wish to use it. <a href="?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#edit-notes-wrapper"alt="back to the form"><span class="help-link">&raquo; back to the form</span></a></dd>
  <dt id="help-close">Close the report</dt>
  <dd>A button to close the report, you will be directed to another form where you will need to indicate why this report needs closing. <a href="?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#edit-close"alt="back to the form"><span class="help-link">&raquo; back to the form</span></a></dd>
  <dt id="help-relist">Re-list the report</dt>
  <dd>A button to allow you to put this report back into the "Browse new reports" list, should you decide not to accept this report for any reason.<a href="?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#edit-relist"alt="back to the form"><span class="help-link">&raquo; back to the form</span></a></dd>
</dl>';

  $export['help_accept_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Assign report to another volunteer';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_assign_report';
  $fe_block_boxes->body = '<dl>
  <lh>Help definitions</lh>
  <dt id="help-url2">What is the website?</dt>
  <dd>This is the website address of the report. If this field is empty then find out what it is from the report and enter it in here. <a href="#edit-url-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt  id="help-issue2">What is the issue?</dt>
  <dd>This is the report that was made by the reporter. You should not need to edit this at this stage in the process. <a href="?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#edit-issue-wrapper"alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt  id="help-notes2">Notes</dt>
  <dd>This is a place to put notes for your self and other volunteers who may view this report in the future should you wish to use it. <a href="#edit-notes-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
</dl>';

  $export['help_assign_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Close report';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_close_report';
  $fe_block_boxes->body = '<h4 id="stepbystep">Step by step help</h4>
  <p>Please choose a closure reason and, if applicable a closure description. This information will be sent to the reporter.</p>
  <dl>
    <dt>Issue Fixed</dt>
    <dd>Hurrah! Your report caused a change on the site so that this issue has been fixed.</dd>
    <dt>Owner logged it to be resolved later</dt>
    <dd>The web owner says something like \'yes we know its a problem it will be dealt with at some point in the future\'.</dd>
    <dt>I never heard back</dt>
    <dd>If you hear nothing back from the web owner or there are no contact details on the website.</dd>
    <dt>Duplicate report</dt>
    <dd>If this report is the same issue as one of the ones listed in "Duplicate reports" (do check by viewing that report), and that issue has already been closed.</dd>
    <dt>Spam</dt>
<dd>If the report was simply an irrelevant or unsolicited message for the purposes of advertising, phishing, spreading malware, increasing traffic to pornographic websites or sites that sell drugs, etc., that missed our spam filter.</dd>
<dt>Not an accessibility issue</dt>
<dd>If the user has reported an issue that is about a website that is anything other than an accessibility issue delivering a bad service, or delivering content that upsets the reporter.  </dd>
<dt>Usability or tech issue</dt>
<dd>In the case of usability problems or technical issues, where the reporter might need help using their equipment, please do what you can to advise them and also point them towards <a href="http://www.fixtheweb.net/links">the help on our links page</a>.</dd>
    <dt>Other</dt>
    <dd>If it does not fit into any of the above definitions</dd>
</dl>
<span class="help-link"><a href="#content" alt="back to the top">&raquo;back</a></span>
 <dl>
  <lh>Help definitions</lh>
  <dt  id="help-notes">Notes</dt>
  <dd>This is a place to put notes for your self and other volunteers who may view this report in the future should you wish to use it. <a href="#edit-notes-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
</dl>';

  $export['help_close_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Dashboard';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'help_dashboard';
  $fe_block_boxes->body = '<p>If you are looking for a new report to work on, then you can <a href="dashboard/waiting">browse for new reports</a>&nbsp;or take a lucky dip and click to&nbsp;<a href="dashboard/get">get a new report</a>.</p>';

  $export['help_dashboard'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Closed reports';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'help_dashboard_closed_reports';
  $fe_block_boxes->body = '<p><span style="line-height: 1.538em;">Above is a list of the reports that <strong>you</strong> have closed.&nbsp;</span><span style="line-height: 1.538em;">To revisit a closed report, click on the report title.</span></p><p><span style="line-height: 1.538em;">To start work on a new report, click </span><a style="line-height: 1.538em;" href="get">get a new report</a>, or&nbsp;<a style="line-height: 1.538em;" href="waiting">browse the list of waiting reports</a><span style="line-height: 1.538em;">.</span></p>';

  $export['help_dashboard_closed_reports'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Internal email';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_internal_email';
  $fe_block_boxes->body = '<dl>
  <lh>Help definitions</lh>
  <dt id="help-url2">Message</dt>
  <dd>The message you would like to email to the user.</dd>
</dl>';

  $export['help_internal_email'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Send report to web owner';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_post_report';
  $fe_block_boxes->body = '<h4 id="stepbystep">Step by step help</h4>
<p>Please spend a bit of time neatening the email before sending it. We want to avoid being seen as spam.</p>

<p>Click Send when it\'s ready and an email will be sent. They should respond directly to you.</p>

<p>If you are sending this report via a web form on the reported website copy and paste this text in, then mark as contacted.</p>
<span class="help-link"><a href="#content" alt="back to the top">&raquo;back</a></span>
<dl>
  <lh>Help definitions</lh>
<dt  id="help-contact">Contact email</dt>
<dd>This is the email address of the web owner if you were able to find it.  <a href="#edit-field-report-contact-email-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
<dt  id="help-email">Body</dt>
<dd>This is the main body of the email to be sent to the web owner.  <a href="#edit-field-report-contact-email-body-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
<dt  id="help-status-comment">Status Comment</dt>
  <dd>This is a note for your self which appears next to the website address in your dashboard to help you easily track the progress of your reports. <a href="#edit-comment-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt  id="help-notes">Notes</dt>
  <dd>This is a place to put notes for your self and other volunteers who may view this report in the future should you wish to use it. <a href="#edit-notes-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>';

  $export['help_post_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Process reports';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_process_reports';
  $fe_block_boxes->body = '<h4 id="stepbystep">Step by step help</h4>
<ol>
<li>If there are any similar reports to this one a button saying &quot;View similar reports&quot;  will appear. You check these reports to see if any of these are the same as your report.</li>
<li>Assess likelihood that the report is really an accessibility issue, by doing this test: <strong>[wave]</strong>. Include any findings in the Reported issues box.</li>
<li>Make sure the text in the <strong>Accessibility issue</strong> box is polite (some people may feel rightly annoyed but a polite tone will be a good approach!) and comprehensible. This may be limited; at this stage the point is to raise the fact that there is an issue.</li>
<li>Find the <strong>contact email</strong> for the web owner or general contact details, on the website. If the website has a contact form paste the url of this form into Notes for use later. If there is no way to contact the web owner close the report and mark it as such.</li>
<li><strong>Rate the report</strong> (please note tweeted reports cannot be lengthy!) and save it.</li>
<li><strong>Tag the report</strong> (to help us <em>crowdsource</em> most common problem types).</li>
<li>If you have any questions for the reporter you can <a href=<?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#edit-contact">contact the reporter</a> using the action button at the bottom of the form.</li>
<li>If you are not satisfied that this is an accessibility issue please <a href="#edit-close">close the report</a>, otherwise continue to <a href="#edit-next">Save & Contact the web owner</a>. 
</ol>
<span class="help-link"><a href="#content" alt="back to the top">&raquo;back</a></span>
<dl>
  <lh>Help definitions</lh>
  <dt id="help-url">What is the website?</dt>
  <dd>This is the website address of the report. If this field is empty then find out what it is from the report and enter it in here. <a href="#edit-url-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt  id="help-issue">What is the issue?</dt>
  <dd>This is the report that was made by the reporter. You should not need to edit this at this stage in the process. <a href="#edit-issue-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt id="help-tools">Test this reported website using WebAIM\'s WAVE tool.</dt>
  <dd>WAVE is a free web accessibility evaluation tool provided by <a href="http://webaim.org">WebAIM</a>.  It is used to aid humans in the web accessibility evaluation process.  Rather than providing a complex technical report, WAVE shows the original web page with embedded  icons and indicators that reveal the accessibility of that page. <a href="#help-tools" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt id="help-rate">Please rate this report</dt>
  <dd>Helps us to identify our best reporters so we can prioritise them by selecting one of these options. <a href="#edit-rate-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt id="help-tags">Tag this report</dt>
  <dd>You can give reports a &quot;tag&quot; which is like a keyword or category label (you may enter a few). These tags will help us to find trends in accessibility issues in the future. As you type your tags in you will notice that tags that have been used previously will appear below, this can help you choose the same tag that others have used. <a href="?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf#edit-tags-wrapper"alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt  id="help-status-comment">Status Comment</dt>
  <dd>This is a note for your self which appears next to the website address in your dashboard to help you easily track the progress of your reports. <a href="#edit-comment-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt  id="help-notes">Notes</dt>
  <dd>This is a place to put notes for your self and other volunteers who may view this report in the future should you wish to use it. <a href="#edit-notes-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
<dt id="help-contact">Contact the reporter</dt>
  <dd>This button takes you to a form which enables you to contact the reporter should you need clarification of the issue. If there is no button then we have no information on who posted this report and the reporter must have submitted information anonymously.<a href="#edit-contact" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
<dt id="help-close">Close the report</dt>
  <dd>This button enables you to close the report, the form you get to will give you the opportunity to label your reasons for closing the report. <a href="#edit-close" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
</dl>';

  $export['help_process_reports'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Relist report';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_relist_report';
  $fe_block_boxes->body = '<h3 id="stepbystep">Step by step help</h3>
<p>On this page you are given the opportunity to add notes about the report before relisting it.
<a href="#edit-url-wrapper" alt="back to the form"><span class="help-link">&raquo; back</span></a></p>';

  $export['help_relist_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Simmilar reports';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_simmilar_reports';
  $fe_block_boxes->body = '<h4 id="stepbystep">Step by step help</h4>
<ol>
  <li>If any reports are listed on this page then you need to check if they have the same issue as the one that you have accepted.</li>
  <li>If  a report has the same issue as the one you are already processing you need to assign this report to that user by selecting \'Assign to\', so that they can collect all the reports that come in for this website in their Dashboard. They will then have more information to pass on to the web owner. </li><li>If you feel you need to ask the volunteer processing the similar report a question you can email them by selecting \'Email\'.</li>
  <li>If there are no reports similar to this one then move on to process this report.</li>
</ol>
We feel it best that only one volunteer is in touch with a web owner at one time.
<span class="help-link"><a href="#content" alt="back to the top">&raquo;back</a></span>';

  $export['help_simmilar_reports'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Ask this volunteer a question';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_volunteer_question';
  $fe_block_boxes->body = '<dl>
  <lh>Help definitions</lh>
  <dt id="help-url2">Question</dt>
  <dd>This is the question you\'d like to ask the volunteer. It will be emailed to them.<a href="#edit-url-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt id="help-url2">What is the website?</dt>
  <dd>This is the website address of the report. If this field is empty then find out what it is from the report and enter it in here. <a href="#edit-url-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt  id="help-issue2">What is the issue?</dt>
  <dd>This is the report that was made by the reporter. You should not need to edit this at this stage in the process. <a href="#edit-issue-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
  <dt  id="help-notes2">Notes</dt>
  <dd>This is a place to put notes for your self and other volunteers who may view this report in the future should you wish to use it. <a href="#edit-notes-wrapper" alt="back to the form"><span class="help-link">&raquo;back</span></a></dd>
</dl>';

  $export['help_volunteer_question'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help: Waiting reports';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'help_waiting_reports';
  $fe_block_boxes->body = 'These are reports that are waiting to be taken on by a volunteer.
To take on a report yourself: click on it to view more details, then save the subsequent form.

Please note, if a report gives only "http://" as the address, this means it has come via twitter, and you will need to enter the correct URL.';

  $export['help_waiting_reports'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Accept report';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_accept_report';
  $fe_block_boxes->body = '<p>You have three options with this report:</p>
<ol>
  <li>If the report concerns an illegal, discriminatory or pornographic (etc) website, then please do not proceed. Instead, <a href="#edit-close">close the report</a> and mark it as closed (spam, or not an accessibility issue).</li>
  <li>If the report is a valid fix the web issue, but for any reason you don\'t want to accept it at this time, please <a href="#edit-relist">re-list the report</a> so it can be picked up by someone else.</li>
  <li>Or, if you wish to accept the report and work on fixing the issue, then <a href="#edit-submit">accept the report</a>.</li>
</ol>


<p><a href="#stepbystep" class="help-jump"><span class="help-link">Further help with the report form &raquo;</span></a></p>';

  $export['intro_accept_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Assign report to another volunteer';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_assign_report';
  $fe_block_boxes->body = 'This page allows you to assign this report to the volunteer who is already processing a report with the same issue.';

  $export['intro_assign_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Close report';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_close_report';
  $fe_block_boxes->body = 'Are you sure this report is ready for closure?<br><a href="#stepbystep" class="help-jump"><span class="help-link">&raquo;Step-by-step help</span></a>';

  $export['intro_close_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Dashboard';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_dashboard';
  $fe_block_boxes->body = 'Welcome to your Dashboard - the nerve centre for your work as a Fix The Web volunteer.

Your list of current jobs is in the table below - click on the report title to get stuck in.

You can use the tabs above to navigate within your Dashboard, or use these links: <a href="/waiting">reports waiting</a>; <a href="/closed">reports closed</a>; <a href="/all">all reports</a>; .
We can point you to lots of sources of information and support, so if you are feeling stuck or lost as a volunteer then please visit our support page (LINK) or the dedicated <a href="http://www.accessifyforum.com/forum20/">forum for Fix the Webbers</a>.';

  $export['intro_dashboard'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Delete account';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_delete_account';
  $fe_block_boxes->body = 'You are just about to delete your account. By doing this you will re-list any reports still currently assigned to you. It would be very useful to leave a comment explaining your progress with the reports so that the person accepting the report can continue processing it with knowledge of its progress. Thank you for your support.';

  $export['intro_delete_account'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Downgrade volunteer';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_downgrade_volunteer';
  $fe_block_boxes->body = 'You are just about to downgrade your account from volunteer. By doing this you will re-list any reports still currently assigned to you. It would be very useful to leave a comment explaining your progress with the reports so that the person accepting the report can continue processing it with knowledge of its progress. Thank you for your support.';

  $export['intro_downgrade_volunteer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Internal email';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_internal_email';
  $fe_block_boxes->body = 'Send an email to [username]. They should respond directly to you.';

  $export['intro_internal_email'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Send report to web owner';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_post_report';
  $fe_block_boxes->body = 'This form will send the report to the website owner.<br><a href="#stepbystep" class="help-jump"><span class="help-link">&raquo;Step-by-step help</span></a>';

  $export['intro_post_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Process report';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_process_report';
  $fe_block_boxes->body = 'Here is where you research and edit your report.<br><a href="#stepbystep" class="help-jump"><span class="help-link">&raquo;Step-by-step help</span></a>';

  $export['intro_process_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Relist report';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_relist_report';
  $fe_block_boxes->body = '<p>If the report you have selected is a valid fix the web issue, but for any reason you are not ready to accept the report yourself, then please use the form on this page to <a href="#edit-submit" alt="re-list the report">re-list the report</a> so that another volunteer can take it on.</p>
<p><a href="#stepbystep" class="help-jump"><span class="help-link">&raquo;Step-by-step help</span></a>></p>';

  $export['intro_relist_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Simmilar reports';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_simmilar_reports';
  $fe_block_boxes->body = 'This page is here to help you discover if another volunteer is processing the same issue that you have in your report.<br><a href="#stepbystep" class="help-jump"><span class="help-link">&raquo;Step-by-step help</span></a>';

  $export['intro_simmilar_reports'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Upgrade reporter';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_upgrade_reporter';
  $fe_block_boxes->body = 'Thank you for becoming a reporter. In order to make this account work effectivly for both of us we need you to complete the following form.';

  $export['intro_upgrade_reporter'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Upgrade volunteer';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_upgrade_volunteer';
  $fe_block_boxes->body = 'Thank you for becoming a volunteer. In order to make this account work effectivly for both of us we need you to complete the following form.';

  $export['intro_upgrade_volunteer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: User registration';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_user_registration';
  $fe_block_boxes->body = 'To submit a report you need to register with Fix The Web. It only takes a few seconds. <a href="faq/why-do-i-need-register-become-reporter">Why you need to register</a>.';

  $export['intro_user_registration'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Ask this volunteer a question ';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'intro_volunteer_question';
  $fe_block_boxes->body = 'This page allows you to ask the volunteer who you believe is processing the same report as you a question. They should respond directly to you.';

  $export['intro_volunteer_question'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tweet: Closure from volunteer to reporter';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'tweet_report_closure';
  $fe_block_boxes->body = 'Dear [name], Your #fixtheweb report has been closed. ffi: [link]';

  $export['tweet_report_closure'] = $fe_block_boxes;

  return $export;
}
