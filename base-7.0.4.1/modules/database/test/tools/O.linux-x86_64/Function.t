#!/usr/bin/env perl
######################################################################
# SPDX-License-Identifier: EPICS
# EPICS BASE is distributed subject to a Software License Agreement
# found in file LICENSE that is included with this distribution.
######################################################################

use lib '/opt/epics/base-7.0.4.1/lib/perl';

use Test::More tests => 2;

use DBD::Function;

my $func = DBD::Function->new('test');
isa_ok $func, 'DBD::Function';
is $func->name, 'test', 'Function name';

