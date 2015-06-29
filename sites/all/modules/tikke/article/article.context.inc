<?php
/**
 * @file
 * article.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function article_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'article_page';
  $context->description = '';
  $context->tag = 'articles';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/2' => 'node/2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-article_page-block' => array(
          'module' => 'views',
          'delta' => 'article_page-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('articles');
  $export['article_page'] = $context;

  return $export;
}
