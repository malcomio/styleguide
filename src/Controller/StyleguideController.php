<?php
/**
 * @file
 * Contains \Drupal\styleguide\Controller\StyleguideController.
 */

namespace Drupal\styleguide\Controller;

use Drupal\Core\Controller\ControllerBase;
use Drupal\Core\Extension\ModuleHandlerInterface;
use Drupal\Core\Url;

/**
 * Controller routines for styleguide routes.
 */
class StyleguideController extends ControllerBase {


  /**
   * Main page output for styleguide.
   */
  public function styleguidePage() {

    $header_items = $styleguide_output = array();

    // Get visual testing elements.

    // TODO: investigate plugin instead of hook - Drupal\Core\Render\ElementInfoManager?
    $items = \Drupal::moduleHandler()->invokeAll('styleguide');

    $styleguide_output = array();
    foreach ($items as $item) {
      $url = Url::fromRoute('styleguide.page', array(), array(
        'fragment' => $item['#key'],
      ));
      $link_output = array(
        '#markup' => \Drupal::l($item['#key'], $url),
      );
      $header_items[] = $link_output;

      $styleguide_output[] = $item;
    }

    $header = array(
      '#theme' => 'item_list',
      '#items' => $header_items,
    );

    $output = array($header, $styleguide_output);
    return $output;
  }
}
