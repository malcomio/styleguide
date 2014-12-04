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


  public function styleguidePage() {

    // Get visual testing elements.
    $items = \Drupal::moduleHandler()->invokeAll('styleguide');

    $build = array(
      '#type' => 'markup',
      '#markup' => t('Hello World!'),
    );

    return $build;
  }
}
