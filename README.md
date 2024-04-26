Genie
======

Genie – A Lightweight Serverless Infrastructure For In-Memory Key-Value Caching With Fine-Grained And Prompt Elasticity

Genie is a lightweight serverless infrastructure for in-memory key-value caching with fine-grained and immediate elasticity.
In Genie, a novel approach is adopted to enable dynamic and independent resource allocation to multiple tenants. 
It processes all arrived requests and estimates the vCPU consumption with a lightweight machine-learning approach for fine-grained billing. 
Moreover, Genie estimates the working set of each tenant and dynamically resizes the allocated memory to guarantee the hit ratio requirements.
Evaluation results show that CPU estimation can be achieved at an interval of every 100 microseconds with almost no impact on system performance.
Besides, it could resize the memory capacity in a few seconds at megabytes level according to the calculated memory size.
The holistic design incurs 1%-2% performance degradation compared to our baseline.
Moreover, Genie achieves an average of 58.3% CPU and 49.9% memory savings compared to AsparaDB for Memcache.

Requirements
------------

 * Linux x86\_64 >= 3.0
 * Intel CPU >= Sandy Bridge (Haswell or more recent recommended)
 * Hugepage (2 GiB) support

Dependencies for compilation
----------------------------

 * g++ >= 5.3
 * cmake >= 2.8
 * make >= 3.81
 * libnuma-dev >= 2.0
 * libcurl-dev >= 7.35
 * DPDK >= 16.11
 * libsqlite3-dev >= 3.0 (with -DSQLITE=ON)

Dependencies for execution
--------------------------

 * bash >= 4.0
 * python >= 3.4
 * etcd >= 2.2, etcd should be open on both client and server

Compiling DPDK
--------------

         * cd dpdk-16.11
         * make config T=x86_64-native-linuxapp-gcc
         # Optimization: try to increase "CONFIG_RTE_MEMPOOL_CACHE_MAX_SIZE" to 4096 in build/.config (but it can also break mempool initialization)
         * make -j

Compiling Genie
--------------

         * cd Genie/build
         * ln -s ../../dpdk-16.11 ./dpdk
         * cmake ..
         * make -j

Setting up the general environment
----------------------------------

         * cd Genie/build
         * ln -s src/mica/test/*.json .
         * ../script/setup.sh 8192 8192    # 2 NUMA nodes, 16 Ki pages (32 GiB)
         * killall etcd; ../../etcd-v2.2.1-linux-amd64/etcd &

Setting up the DPDK environment
-------------------------------

         * sudo modprobe uio
         * sudo insmod dpdk/build/kmod/igb_uio.ko
         * dpdk/tools/dpdk_nic_bind.py --status
         * sudo dpdk/tools/dpdk_nic_bind.py --force -b igb_uio 0000:02:00.0 0000:02:00.1 0000:04:00.0 0000:04:00.1 0000:83:00.0 0000:83:00.1 0000:84:00.0 0000:84:00.1
         * sudo dpdk/tools/dpdk_nic_bind.py --force -b igb_uio 0000:01:00.0 0000:01:00.1 0000:03:00.0 0000:03:00.1 0000:42:00.0 0000:42:00.1 0000:43:00.0 0000:43:00.1
         * sudo dpdk/tools/dpdk_nic_bind.py --force -b igb_uio 0000:03:00.0 0000:03:00.1

Running microbench
------------------

         * cd Genie/build
         * sudo ./microbench 0.00          # 0.00 = uniform key popularity

Running Netbench
------------------

        * cd Genie/build
        * sudo sudo ./netbench 0 0.5 8 8 256
        * The five parameters are zipf_theta(0~1), get_ratio(0~1), key_size(byte), value_size(byte), item_number(x1048576) respectively

Running Server
-----------------

        * cd Genie/build
        * sudo ./server 0.9 8 0.5 2048
        * The four parameters are target_hit_ratio(0~1), thread_num, LRU_threshold(0.5~1), initial_log_size(MB) respectively

Core code
-----------------

The source code are mainly in Genie/src/mica

### alloc

### datagram

### directory

### eaet

### network

### parda

### pool

### processor

### table

### test

### util

Authors
-------

Xiao Huijuan & Yang Shixi

License
-------

        Licensed under the Apache License, Version 2.0 (the "License");
        you may not use this file except in compliance with the License.
        You may obtain a copy of the License at

            http://www.apache.org/licenses/LICENSE-2.0

        Unless required by applicable law or agreed to in writing, software
        distributed under the License is distributed on an "AS IS" BASIS,
        WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
        See the License for the specific language governing permissions and
        limitations under the License.

