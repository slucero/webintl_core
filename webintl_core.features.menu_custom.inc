<?php
/**
 * @file
 * webintl_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function webintl_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-site-links
  $menus['menu-site-links'] = array(
    'menu_name' => 'menu-site-links',
    'title' => 'Site Links',
    'description' => 'Links related to general site and business information that doesn\'t tie directly into general content.',
  );
  // Exported menu: user-menu
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links related to general site and business information that doesn\'t tie directly into general content.');
  t('Main menu');
  t('Site Links');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
