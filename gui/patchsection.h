/*  Petri-Foo is a fork of the Specimen audio sampler.

    Original Specimen author Pete Bessman
    Copyright 2005 Pete Bessman
    Copyright 2011 James W. Morris

    This file is part of Petri-Foo.

    Petri-Foo is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2 as
    published by the Free Software Foundation.

    Petri-Foo is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Petri-Foo.  If not, see <http://www.gnu.org/licenses/>.

    This file is a derivative of a Specimen original, modified 2011
*/


#ifndef __PATCH_SECTION__
#define __PATCH_SECTION__

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define PATCH_SECTION_TYPE \
    (patch_section_get_type())

#define PATCH_SECTION(obj) \
    (G_TYPE_CHECK_INSTANCE_CAST ((obj), PATCH_SECTION_TYPE, PatchSection))

#define IS_PATCH_SECTION(obj) \
    (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PATCH_SECTION_TYPE))

#define PATCH_SECTION_CLASS(klass) \
   (G_TYPE_CHECK_CLASS_CAST((klass), PATCH_SECTION_TYPE, PatchSectionClass))

#define IS_PATCH_SECTION_CLASS(klass) \
    (G_TYPE_CHECK_INSTANCE_TYPE ((klass), PATCH_SECTION_TYPE))


typedef struct _PatchSectionClass PatchSectionClass;
typedef struct _PatchSection PatchSection;


struct _PatchSection
{
    GtkVBox parent;
};


struct _PatchSectionClass
{
    GtkVBoxClass parent_class;
};


GType       patch_section_get_type(void);
GtkWidget*  patch_section_new(void);

void        patch_section_set_patch(PatchSection* self, int patch);


G_END_DECLS


#endif /* __PATCH_SECTION__ */
