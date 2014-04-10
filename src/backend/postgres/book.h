/********************************************************************\
 * book.h -- implements books for the postgres backend              *
 * Copyright (c) 2000, 2001 Linas Vepstas <linas@linas.org>         *
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 59 Temple Place - Suite 330        Fax:    +1-617-542-2652       *
 * Boston, MA  02111-1307,  USA       gnu@gnu.org                   *
\********************************************************************/


#ifndef POSTGRES_BOOK_H
#define POSTGRES_BOOK_H

#include "qofbook.h"
#include "gnc-engine.h"
#include "guid.h"

#include "PostgresBackend.h"

QofBookList * pgendGetAllBooks (PGBackend *be, QofBookList *);

void pgendGetBook (PGBackend *be, QofBook *book);
void pgendStoreBookNoLock (PGBackend *be, QofBook *book, int do_check_version);
void pgendStoreBook (PGBackend *be, QofBook *book);

void pgend_book_transfer_begin (QofBackend *, QofBook*);
void pgend_book_transfer_commit (QofBackend *, QofBook*);

#endif /* POSTGRES_BOOK_H */