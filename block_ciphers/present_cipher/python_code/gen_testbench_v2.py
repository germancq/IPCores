#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : gen_testbench_v2.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 17.04.2026
# Last Modified Date: 17.04.2026
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>

import grp
import itertools
import math
import os
import random
import sys
import time
from pwd import getpwnam

import allpairspy
import numpy as np

import present
def create_microsd_vectors(micro_sd, storage_file, VIOstorage_file, N, e):
    storage_file.seek(0)
    # storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    j = 0
    for i in range(0, N):

        key = np.random.randint(0, 2**63 - 1, 1, dtype=np.int64)
        text = np.random.randint(0, 2**63 - 1, 1, dtype=np.int64)
        present_SW = present.Present(int(key[0]))
        expected_enc_value = present_SW.encrypt(int(text[0]))
        expected_dec_value = present_SW.decrypt(int(text[0]))


        storage_file.write(int(text[0]).to_bytes(8, byteorder="little"))
        storage_file.write(int(key[0]).to_bytes(12, byteorder="little"))
        storage_file.write(zero.to_bytes(492,byteorder="little"))


def main():
    """
    parameters
        param1 : microsd path
        param2 : N numero tests
        param3 : e , percent of create wrong test
    """

    try:
        with open(abs_path_file_storage, "rb+") as storage_file:
            storage_file.close()
    except:
        with open(abs_path_file_storage, "wb+") as storage_file:
            storage_file.close()

    try:
        with open(abs_path_VIOfile_storage, "rb+") as VIOstorage_file:
            VIOstorage_file.close()
    except:
        with open(abs_path_VIOfile_storage, "wb+") as VIOstorage_file:
            VIOstorage_file.close()

    try:
        with open(sys.argv[1], "rb+") as micro_sd:
            micro_sd.close()
    except:
        with open(sys.argv[1], "wb+") as micro_sd:
            micro_sd.close()

    uid = getpwnam(username).pw_uid
    gid = grp.getgrnam(groupname)[2]
    os.chown(abs_path_file_storage, uid, gid)
    os.chown(abs_path_VIOfile_storage, uid, gid)

    with open(abs_path_file_storage, "rb+") as storage_file:
        with open(abs_path_VIOfile_storage, "w") as VIOstorage_file:
            with open(sys.argv[1], "rb+") as micro_sd:
                N = int(sys.argv[2])
                e = int(sys.argv[3])
                print(
                    create_microsd_vectors(
                        micro_sd, storage_file, VIOstorage_file, N, e
                    )
                )


if __name__ == "__main__":
    start = time.time()
    main()
    end = time.time()
    print(end - start)
