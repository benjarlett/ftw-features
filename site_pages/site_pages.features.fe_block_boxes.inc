<?php
/**
 * @file
 * site_pages.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function site_pages_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Discuss accessibility';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'accessify_forum';
  $fe_block_boxes->body = 'Volunteering for Fix the Web? Want to talk to others about your reports? Rather than running our own forum we are recommending that you <a href="http://www.accessifyforum.com/forum20/">join our Fix the Web forum over on Accessify Forum</a>.';

  $export['accessify_forum'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front page intro block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'front_intro';
  $fe_block_boxes->body = '<div id="front-intro-block">
	<div class="love third">
			<h2>Love it,</h2>
			<img src="/sites/default/files/stephen_fry_3.png" alt="Stephen Fry" class="stephenfry">
			<div class="third-inner">
			<a  href="stephen-fry" title="read more of stephen fry\'s comments about fix the web">
                        <div class="quote">
                               <blockquote class="fryquote">This campaign gets to the very heart of the problem – it’s pure genius!</blockquote>
			       <span class="frycredit"> Stephen Fry</span>
			      <span class="frymore offscreen"> - read more of stephen fry\'s comments about fix the web</span>
                      </div></a>
		</div>
	</div>

	<div class="join third">
			<h2>Join it,</h2>
		<div class="third-inner">
			<p><a href="reporter/signup" class="front-button">Sign up as a reporter<span class="offscreen"> for fix the web</span></a></p>
			<p><a href="volunteer/signup" class="front-button">Sign up as a Volunteer<span class="offscreen"> for fix the web</span></a></p>
		</div>
	</div>

	<div class="fix third">
			<h2>Fix it!</h2>
		<div class="third-inner">
<h3><a href="http://en.wikipedia.org/wiki/Web_accessibility">Web accessibility</a></h3>
			<p>Poorly designed websites can exclude some disabled people.</p>
<p>If disabled people report problems and volunteers push for improvements, <br /><span class="red">Fix the Web crowdsources change<span class="offscreen">.</span></span></p>
		</div>
	</div>
</div>';

  $export['front_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'front page video';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'ftw_video_block';
  $fe_block_boxes->body = '<script src="/sites/all/libraries/theworkshop_videoplayer/swfobject/swfobject.js" type="text/javascript"></script><!-- SWFObject javascript -->
<div id="help"><p><br/><a href="/video/help">Video player help and accessibility features</a></p></div>
		<div id="flash">
			<!-- div to contain the video player. This content will show if the user has the incorrect flash player or has javascript disabled in thier browser -->
			<p>To view this content, you must have JavaScript enabled, and the latest version of the <a href="http://www.adobe.com/go/getflashplayer">Adobe Flash Player</a>.</p>
			<p><a href="http://www.adobe.com/go/getflashplayer"><img src="http://www.adobe.com/images/shared/download_buttons/get_flash_player.gif"	alt="Get Adobe Flash Player" border="0" /></a></p>
		</div>
		
		<script type="text/javascript">
			/* <![CDATA[ */
				
				//Embed using SWFObject
				var params = {};
				params.bgColor = "#FFFFFF"; // background colour of the embed (optional)
				params.allowFullScreen = true; // set to true to enable full screen video playback
			
				//Typical Flash vars for the video player
				/*
					mediaURL = url (relative to the SWF page embedding the videoplayer.swf) of media OR Youtube video ID, eg. Oe3St1GgoHQ
					captionsURL = url (relative to the HTML page) to the captions XML (optional)
					imageURL = url (relative to the HTML page) of an image to dipslay (optional)
					audioDescriptionURL = url (relative to the HTML page) of audio description mp3 file (optional)
				*/
				
				var flashvars = {};
				flashvars.mediaURL = "_g991EZE4bI";//a Youtube video ID, eg. Oe3St1GgoHQ
				//flashvars.mediaURL = "video/dummy_video.flv";// url relative to the SWF containing the video player OR absolute path OR youtube ID
				flashvars.imageURL = "/sites/default/files/still3.jpg";// url relative to the HTML page containing the video player
				flashvars.captionsURL = "/sites/default/files/gail-intro02.xml";// url relative to the HTML page containing the video player
				flashvars.audioDescriptionURL = "assets/audio/dummy_audiodesc.mp3";	// url relative to the HTML page containing the video player
				swfobject.embedSWF("/sites/all/libraries/theworkshop_videoplayer/assets/videoplayer.swf", "flash", "280", "180", "9.0.115", null, flashvars, params);
				
			/* ]]> */
		</script>';

  $export['ftw_video_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Intro: Contact form';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'intro_contact_form';
  $fe_block_boxes->body = '<p>If you are having trouble using our website, or have some suggestions for us, or have a funding idea to help sustain this project (or any other reason come to that), please get in touch using the contact form below:</p>';

  $export['intro_contact_form'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Twitter and Facebook links';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'twitter_facebook';
  $fe_block_boxes->body = '<div id="social-links"><a class="twitterbutton" title="Follow us on twitter" href="https://twitter.com/FixtheWeb" target="_blank"><img src="/sites/all/themes/ftw/images/displacement.png" alt="" class="for-css-replacement"><span class="button-label">Follow us on twitter</span></a><a class="facebookbutton" title="Find us on Facebook" href="https://www.facebook.com/fixtheweb" target="_blank"><img src="/sites/all/themes/ftw/images/displacement.png" alt="" class="for-css-replacement"><span class="button-label">Find us on facebook</span></a></div><div class="fb-like" data-href="http://www.fixtheweb.net" data-layout="button" data-action="like" data-show-faces="true" data-share="true"></div>';

  $export['twitter_facebook'] = $fe_block_boxes;

  return $export;
}
