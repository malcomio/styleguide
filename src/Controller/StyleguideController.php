<?php
/**
 * @file
 * Contains \Drupal\styleguide\Controller\StyleguideController.
 */

namespace Drupal\styleguide\Controller;

use Drupal\Core\Controller\ControllerBase;
use Drupal\Core\Extension\ModuleHandlerInterface;

/**
 * Controller routines for styleguide routes.
 */
class StyleguideController extends ControllerBase {


  /**
   * Main page output for styleguide.
   */
  public function styleguidePage() {

    // Get visual testing elements.
    $items = \Drupal::moduleHandler()->invokeAll('styleguide');

    dpm($items);
    $build = array();
    foreach ($items as $item) {
      $build[] = $item;
    }

    return $build;
  }
}
