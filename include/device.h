/*
 * co2mon - programming interface to CO2 sensor.
 * Copyright (C) 2015  Oleg Bulatov <oleg@bulatov.me>

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef CO2_MON_DEVICE_H_INCLUDED_
#define CO2_MON_DEVICE_H_INCLUDED_

#include <libusb.h>

extern libusb_device *
co2mon_find_device();

extern void
co2mon_release_device(libusb_device *dev);

extern libusb_device_handle *
co2mon_open_device(libusb_device *dev);

extern void
co2mon_close_device(libusb_device_handle *handle);

extern int
co2mon_send_magic_table(libusb_device_handle *handle, unsigned char magic_table[8]);

extern int
co2mon_read_data(libusb_device_handle *handle, unsigned char magic_table[8], unsigned char result[8]);

#endif
