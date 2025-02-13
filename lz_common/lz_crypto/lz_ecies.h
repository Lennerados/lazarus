/*
 * Copyright(c) 2021 Fraunhofer AISEC
 * Fraunhofer-Gesellschaft zur Foerderung der angewandten Forschung e.V.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LZ_CRYPTO_LZ_ECIES_H_
#define LZ_CRYPTO_LZ_ECIES_H_

#ifdef MBEDTLS_CONFIG_FILE

int lz_ecies_encrypt(mbedtls_ecdh_context *ctx, uint8_t *in, uint32_t in_len, uint8_t *out,
					 uint32_t out_len);

int lz_ecies_decrypt(mbedtls_ecdh_context *ctx, uint8_t *in, uint32_t in_len, uint8_t *out,
					 uint32_t out_len);

#endif /* MBEDTLS_CONFIG_FILE */

#endif /* LZ_CRYPTO_LZ_ECIES_H_ */
