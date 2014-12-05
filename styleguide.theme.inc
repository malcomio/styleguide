<?php

/**
 * @file
 *   Theme file for Style Guide module.
 */

/**
 * Theme the page links.
 *
 * NOTE: these may be turned into sub-tabs.
 *
 * @param $variables
 *   The theme variables array, including:
 *   -- 'items' the list of links.
 */
function theme_styleguide_links($variables) {
  // Close the header.
  $output = '<div id="styleguide-header" class="styleguide">';
  $output .= $variables['items'];
  $output .= '<div class="break"><br /></div>';
  $output .= '</div>';
  return $output;
}

/**
 * Theme the content.
 *
 * This function is here in case anyone wants to change it.
 *
 * @param $variables
 *   The theme variables array, including:
 *   -- 'content' an HTML content element.
 */
function theme_styleguide_content($variables) {
  return $variables['content'];
}
