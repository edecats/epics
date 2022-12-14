/**
* Copyright (c) 2020 Cosylab d.d.
* This software is distributed under the terms found
* in file LICENSE.txt that is included with this distribution.
*/

#ifndef VARIABLE_H
#define VARIABLE_H

#include <string>
#include <vector>
#include <memory>

#include <ADSAddress.h>
#include <BufferDataPosition.h>

/* Defined in Connection.h, which includes this header file (prevent cyclic
 * include). */
class Connection;

class Variable {
protected:
    std::shared_ptr<Connection> conn = nullptr;
    BufferDataPosition buffer_reader = EMPTY_BUFFER_DATA_POSITION;
    uint32_t elem_size = 0; /* Element size in bytes */
    std::vector<uint8_t> value;
    bool notify_on_update;
    // TODO: timestamp

public:
    const std::shared_ptr<ADSAddress> addr;
    const ADSAddress *get_address();
    uint32_t size(); /* Total data size in bytes */
    bool notifies_on_update();
    void set_notify_on_update(const bool notify);

    void set_connection(std::shared_ptr<Connection> connection);
    std::shared_ptr<Connection> get_connection();

    /* Used for sum reads, specifies location in buffer containing the variable
     * data and read operation result */
    void set_buffer_reader(BufferDataPosition br);
    BufferDataPosition get_buffer_reader();

    Variable(std::string address, bool notify_on_update=false);
    Variable(std::shared_ptr<ADSAddress> address, bool notify_on_update=false);

    /* Read data from underlying buffer. The method implicitly acquires a read
     * lock before copying into the caller's buffer.  */
    int read_from_buffer(const uint32_t size, uint8_t *buffer);

    /* Get pointer to the underlying value as uint8_t. The method implicitly
     * acquires a read lock (RWLock), which *must* be released by the caller
     * when done reading the data. */
    std::pair<uint8_t *, RWLock *> get_read_data();

    /* Write DATA to ADS device. The number of bytes written will be set to the
     * smaller of SIZE and this->size() values. */
    int write(const uint8_t *data, const uint32_t size);

    /* Read variable from ADS device into DATA or SIZE bytes. The number of
     * bytes read will be the smaller value of SIZE and this->size().  */
    int read(uint8_t *data, const uint32_t size, uint32_t *bytes_read);
};

#endif /* VARIABLE_H */

