/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

namespace facebook {
namespace react {

/*
 * An enum that represents React's event priority.
 * Used to map Fabric events to React.
 */
enum class ReactEventPriority {
  /*
   * Event priority is unspecified.
   */
  Default,

  /*
   * User events that happen at discrete times, like
   * input into text field.
   */
  Discrete,

  /*
   * “fluid” user events that happen many times over a short period of time like
   * scrolling.
   */
  Continuous,
};

static constexpr std::underlying_type<ReactEventPriority>::type serialize(
    ReactEventPriority reactEventPriority) {
  return static_cast<std::underlying_type<ReactEventPriority>::type>(
      reactEventPriority);
}

} // namespace react
} // namespace facebook
