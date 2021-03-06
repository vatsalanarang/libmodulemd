/*
 * This file is part of libmodulemd
 * Copyright (C) 2018 Red Hat, Inc.
 *
 * Fedora-License-Identifier: MIT
 * SPDX-2.0-License-Identifier: MIT
 * SPDX-3.0-License-Identifier: MIT
 *
 * This program is free software.
 * For more information on the license, see COPYING.
 * For more information on free software, see <https://www.gnu.org/philosophy/free-sw.en.html>.
 */

#pragma once

#include <glib-object.h>
#include <yaml.h>

#include "modulemd-component.h"

/**
 * SECTION: modulemd-component-private
 * @title: Modulemd.Component (Private)
 * @stability: Private
 * @short_description: #Modulemd.Component methods that should be used only
 * by internal consumers
 */


/**
 * modulemd_component_emit_yaml_start:
 * @self: This #ModulemdComponent
 * @emitter: (inout): A libyaml emitter object positioned where Component start
 * belongs in the YAML document.
 * @error: (out): A #GError that will return the reason for an emission error.
 *
 * Returns: TRUE if the component header was emitted succesfully. FALSE and sets
 * @error appropriately if the YAML could not be emitted.
 *
 * Since: 2.0
 */
gboolean
modulemd_component_emit_yaml_start (ModulemdComponent *self,
                                    yaml_emitter_t *emitter,
                                    GError **error);

/**
 * modulemd_component_emit_yaml_buildorder:
 * @self: This #ModulemdComponent
 * @emitter: (inout): A libyaml emitter object positioned where a Component
 * buildorder item should appear in the YAML document.
 * @error: (out): A #GError that will return the reason for an emission error.
 *
 * Returns: TRUE if the component buildorder was emitted succesfully. FALSE and sets
 * @error appropriately if the YAML could not be emitted.
 *
 * Since: 2.0
 */
gboolean
modulemd_component_emit_yaml_buildorder (ModulemdComponent *self,
                                         yaml_emitter_t *emitter,
                                         GError **error);
