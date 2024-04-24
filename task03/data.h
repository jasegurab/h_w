/*
 * =====================================================================================
 *
 *       Filename:  csv.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  24.04.2024 15:45:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#ifndef CVS_H
#define CVS_H

std::vector<Data> read(const std::string &filename);
void write(const std::string &filename, std::vector<float> &data);

#endif
