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

    // TODO: investigate plugin instead of hook - Drupal\Core\Render\ElementInfoManager?
    $items = \Drupal::moduleHandler()->invokeAll('styleguide');

    $build = array();
    foreach ($items as $item) {
      $build[] = $item;
    }

    return $build;
  }
}
