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
#include "modulemd-module-index.h"

G_BEGIN_DECLS

/**
 * SECTION: modulemd-module-index-private
 * @title: Modulemd.ModuleIndex (Private)
 * @stability: Private
 * @short_description: #ModulemdModuleIndex methods that should be used only
 * by internal consumers.
 */


/**
 * modulemd_module_index_merge:
 * @from: (in) (transfer none): The #ModulemdModuleIndex whose contents are
 * being merged in.
 * @into: (inout) (transfer none): The #ModulemdModuleIndex whose contents are
 * being merged updated by those from @from.
 * @override: (in): In the event that the contents cannot be merged, this
 * argument specifies whether the contents of @from will supersede those from
 * @into. For specifics of how this works, see the Description section for
 * #ModulemdIndexMerger.
 * @error: (out): If the merge fails, this will return a #GError explaining the
 * reason for it.
 *
 * Returns: TRUE if the two #ModulemdModuleIndex objects could be merged
 * without conflicts. FALSE and sets @error appropriately if the merge fails.
 *
 * Since: 2.0
 */
gboolean
modulemd_module_index_merge (ModulemdModuleIndex *from,
                             ModulemdModuleIndex *into,
                             gboolean override,
                             GError **error);

G_END_DECLS
