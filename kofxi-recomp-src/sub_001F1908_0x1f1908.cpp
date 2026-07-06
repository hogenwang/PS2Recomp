#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1908
// Address: 0x1f1908 - 0x1f1c30
void sub_001F1908_0x1f1908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1908_0x1f1908");
#endif

    switch (ctx->pc) {
        case 0x1f1908u: goto label_1f1908;
        case 0x1f190cu: goto label_1f190c;
        case 0x1f1910u: goto label_1f1910;
        case 0x1f1914u: goto label_1f1914;
        case 0x1f1918u: goto label_1f1918;
        case 0x1f191cu: goto label_1f191c;
        case 0x1f1920u: goto label_1f1920;
        case 0x1f1924u: goto label_1f1924;
        case 0x1f1928u: goto label_1f1928;
        case 0x1f192cu: goto label_1f192c;
        case 0x1f1930u: goto label_1f1930;
        case 0x1f1934u: goto label_1f1934;
        case 0x1f1938u: goto label_1f1938;
        case 0x1f193cu: goto label_1f193c;
        case 0x1f1940u: goto label_1f1940;
        case 0x1f1944u: goto label_1f1944;
        case 0x1f1948u: goto label_1f1948;
        case 0x1f194cu: goto label_1f194c;
        case 0x1f1950u: goto label_1f1950;
        case 0x1f1954u: goto label_1f1954;
        case 0x1f1958u: goto label_1f1958;
        case 0x1f195cu: goto label_1f195c;
        case 0x1f1960u: goto label_1f1960;
        case 0x1f1964u: goto label_1f1964;
        case 0x1f1968u: goto label_1f1968;
        case 0x1f196cu: goto label_1f196c;
        case 0x1f1970u: goto label_1f1970;
        case 0x1f1974u: goto label_1f1974;
        case 0x1f1978u: goto label_1f1978;
        case 0x1f197cu: goto label_1f197c;
        case 0x1f1980u: goto label_1f1980;
        case 0x1f1984u: goto label_1f1984;
        case 0x1f1988u: goto label_1f1988;
        case 0x1f198cu: goto label_1f198c;
        case 0x1f1990u: goto label_1f1990;
        case 0x1f1994u: goto label_1f1994;
        case 0x1f1998u: goto label_1f1998;
        case 0x1f199cu: goto label_1f199c;
        case 0x1f19a0u: goto label_1f19a0;
        case 0x1f19a4u: goto label_1f19a4;
        case 0x1f19a8u: goto label_1f19a8;
        case 0x1f19acu: goto label_1f19ac;
        case 0x1f19b0u: goto label_1f19b0;
        case 0x1f19b4u: goto label_1f19b4;
        case 0x1f19b8u: goto label_1f19b8;
        case 0x1f19bcu: goto label_1f19bc;
        case 0x1f19c0u: goto label_1f19c0;
        case 0x1f19c4u: goto label_1f19c4;
        case 0x1f19c8u: goto label_1f19c8;
        case 0x1f19ccu: goto label_1f19cc;
        case 0x1f19d0u: goto label_1f19d0;
        case 0x1f19d4u: goto label_1f19d4;
        case 0x1f19d8u: goto label_1f19d8;
        case 0x1f19dcu: goto label_1f19dc;
        case 0x1f19e0u: goto label_1f19e0;
        case 0x1f19e4u: goto label_1f19e4;
        case 0x1f19e8u: goto label_1f19e8;
        case 0x1f19ecu: goto label_1f19ec;
        case 0x1f19f0u: goto label_1f19f0;
        case 0x1f19f4u: goto label_1f19f4;
        case 0x1f19f8u: goto label_1f19f8;
        case 0x1f19fcu: goto label_1f19fc;
        case 0x1f1a00u: goto label_1f1a00;
        case 0x1f1a04u: goto label_1f1a04;
        case 0x1f1a08u: goto label_1f1a08;
        case 0x1f1a0cu: goto label_1f1a0c;
        case 0x1f1a10u: goto label_1f1a10;
        case 0x1f1a14u: goto label_1f1a14;
        case 0x1f1a18u: goto label_1f1a18;
        case 0x1f1a1cu: goto label_1f1a1c;
        case 0x1f1a20u: goto label_1f1a20;
        case 0x1f1a24u: goto label_1f1a24;
        case 0x1f1a28u: goto label_1f1a28;
        case 0x1f1a2cu: goto label_1f1a2c;
        case 0x1f1a30u: goto label_1f1a30;
        case 0x1f1a34u: goto label_1f1a34;
        case 0x1f1a38u: goto label_1f1a38;
        case 0x1f1a3cu: goto label_1f1a3c;
        case 0x1f1a40u: goto label_1f1a40;
        case 0x1f1a44u: goto label_1f1a44;
        case 0x1f1a48u: goto label_1f1a48;
        case 0x1f1a4cu: goto label_1f1a4c;
        case 0x1f1a50u: goto label_1f1a50;
        case 0x1f1a54u: goto label_1f1a54;
        case 0x1f1a58u: goto label_1f1a58;
        case 0x1f1a5cu: goto label_1f1a5c;
        case 0x1f1a60u: goto label_1f1a60;
        case 0x1f1a64u: goto label_1f1a64;
        case 0x1f1a68u: goto label_1f1a68;
        case 0x1f1a6cu: goto label_1f1a6c;
        case 0x1f1a70u: goto label_1f1a70;
        case 0x1f1a74u: goto label_1f1a74;
        case 0x1f1a78u: goto label_1f1a78;
        case 0x1f1a7cu: goto label_1f1a7c;
        case 0x1f1a80u: goto label_1f1a80;
        case 0x1f1a84u: goto label_1f1a84;
        case 0x1f1a88u: goto label_1f1a88;
        case 0x1f1a8cu: goto label_1f1a8c;
        case 0x1f1a90u: goto label_1f1a90;
        case 0x1f1a94u: goto label_1f1a94;
        case 0x1f1a98u: goto label_1f1a98;
        case 0x1f1a9cu: goto label_1f1a9c;
        case 0x1f1aa0u: goto label_1f1aa0;
        case 0x1f1aa4u: goto label_1f1aa4;
        case 0x1f1aa8u: goto label_1f1aa8;
        case 0x1f1aacu: goto label_1f1aac;
        case 0x1f1ab0u: goto label_1f1ab0;
        case 0x1f1ab4u: goto label_1f1ab4;
        case 0x1f1ab8u: goto label_1f1ab8;
        case 0x1f1abcu: goto label_1f1abc;
        case 0x1f1ac0u: goto label_1f1ac0;
        case 0x1f1ac4u: goto label_1f1ac4;
        case 0x1f1ac8u: goto label_1f1ac8;
        case 0x1f1accu: goto label_1f1acc;
        case 0x1f1ad0u: goto label_1f1ad0;
        case 0x1f1ad4u: goto label_1f1ad4;
        case 0x1f1ad8u: goto label_1f1ad8;
        case 0x1f1adcu: goto label_1f1adc;
        case 0x1f1ae0u: goto label_1f1ae0;
        case 0x1f1ae4u: goto label_1f1ae4;
        case 0x1f1ae8u: goto label_1f1ae8;
        case 0x1f1aecu: goto label_1f1aec;
        case 0x1f1af0u: goto label_1f1af0;
        case 0x1f1af4u: goto label_1f1af4;
        case 0x1f1af8u: goto label_1f1af8;
        case 0x1f1afcu: goto label_1f1afc;
        case 0x1f1b00u: goto label_1f1b00;
        case 0x1f1b04u: goto label_1f1b04;
        case 0x1f1b08u: goto label_1f1b08;
        case 0x1f1b0cu: goto label_1f1b0c;
        case 0x1f1b10u: goto label_1f1b10;
        case 0x1f1b14u: goto label_1f1b14;
        case 0x1f1b18u: goto label_1f1b18;
        case 0x1f1b1cu: goto label_1f1b1c;
        case 0x1f1b20u: goto label_1f1b20;
        case 0x1f1b24u: goto label_1f1b24;
        case 0x1f1b28u: goto label_1f1b28;
        case 0x1f1b2cu: goto label_1f1b2c;
        case 0x1f1b30u: goto label_1f1b30;
        case 0x1f1b34u: goto label_1f1b34;
        case 0x1f1b38u: goto label_1f1b38;
        case 0x1f1b3cu: goto label_1f1b3c;
        case 0x1f1b40u: goto label_1f1b40;
        case 0x1f1b44u: goto label_1f1b44;
        case 0x1f1b48u: goto label_1f1b48;
        case 0x1f1b4cu: goto label_1f1b4c;
        case 0x1f1b50u: goto label_1f1b50;
        case 0x1f1b54u: goto label_1f1b54;
        case 0x1f1b58u: goto label_1f1b58;
        case 0x1f1b5cu: goto label_1f1b5c;
        case 0x1f1b60u: goto label_1f1b60;
        case 0x1f1b64u: goto label_1f1b64;
        case 0x1f1b68u: goto label_1f1b68;
        case 0x1f1b6cu: goto label_1f1b6c;
        case 0x1f1b70u: goto label_1f1b70;
        case 0x1f1b74u: goto label_1f1b74;
        case 0x1f1b78u: goto label_1f1b78;
        case 0x1f1b7cu: goto label_1f1b7c;
        case 0x1f1b80u: goto label_1f1b80;
        case 0x1f1b84u: goto label_1f1b84;
        case 0x1f1b88u: goto label_1f1b88;
        case 0x1f1b8cu: goto label_1f1b8c;
        case 0x1f1b90u: goto label_1f1b90;
        case 0x1f1b94u: goto label_1f1b94;
        case 0x1f1b98u: goto label_1f1b98;
        case 0x1f1b9cu: goto label_1f1b9c;
        case 0x1f1ba0u: goto label_1f1ba0;
        case 0x1f1ba4u: goto label_1f1ba4;
        case 0x1f1ba8u: goto label_1f1ba8;
        case 0x1f1bacu: goto label_1f1bac;
        case 0x1f1bb0u: goto label_1f1bb0;
        case 0x1f1bb4u: goto label_1f1bb4;
        case 0x1f1bb8u: goto label_1f1bb8;
        case 0x1f1bbcu: goto label_1f1bbc;
        case 0x1f1bc0u: goto label_1f1bc0;
        case 0x1f1bc4u: goto label_1f1bc4;
        case 0x1f1bc8u: goto label_1f1bc8;
        case 0x1f1bccu: goto label_1f1bcc;
        case 0x1f1bd0u: goto label_1f1bd0;
        case 0x1f1bd4u: goto label_1f1bd4;
        case 0x1f1bd8u: goto label_1f1bd8;
        case 0x1f1bdcu: goto label_1f1bdc;
        case 0x1f1be0u: goto label_1f1be0;
        case 0x1f1be4u: goto label_1f1be4;
        case 0x1f1be8u: goto label_1f1be8;
        case 0x1f1becu: goto label_1f1bec;
        case 0x1f1bf0u: goto label_1f1bf0;
        case 0x1f1bf4u: goto label_1f1bf4;
        case 0x1f1bf8u: goto label_1f1bf8;
        case 0x1f1bfcu: goto label_1f1bfc;
        case 0x1f1c00u: goto label_1f1c00;
        case 0x1f1c04u: goto label_1f1c04;
        case 0x1f1c08u: goto label_1f1c08;
        case 0x1f1c0cu: goto label_1f1c0c;
        case 0x1f1c10u: goto label_1f1c10;
        case 0x1f1c14u: goto label_1f1c14;
        case 0x1f1c18u: goto label_1f1c18;
        case 0x1f1c1cu: goto label_1f1c1c;
        case 0x1f1c20u: goto label_1f1c20;
        case 0x1f1c24u: goto label_1f1c24;
        case 0x1f1c28u: goto label_1f1c28;
        case 0x1f1c2cu: goto label_1f1c2c;
        default: break;
    }

    ctx->pc = 0x1f1908u;

label_1f1908:
    // 0x1f1908: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f1908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1f190c:
    // 0x1f190c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1f1910:
    // 0x1f1910: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f1910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f1914:
    // 0x1f1914: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1f1918:
    // 0x1f1918: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f1918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1f191c:
    // 0x1f191c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1f1920:
    // 0x1f1920: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f1920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1924:
    // 0x1f1924: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1f1928:
    // 0x1f1928: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1f1928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1f192c:
    // 0x1f192c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f192cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f1930:
    // 0x1f1930: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1f1930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1f1934:
    // 0x1f1934: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1f1934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1f1938:
    // 0x1f1938: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1f1938u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f193c:
    // 0x1f193c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1f1940:
    // 0x1f1940: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1f1940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1f1944:
    // 0x1f1944: 0x8e932018  lw          $s3, 0x2018($s4)
    ctx->pc = 0x1f1944u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8216)));
label_1f1948:
    // 0x1f1948: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1f1948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_1f194c:
    // 0x1f194c: 0x26771080  addiu       $s7, $s3, 0x1080
    ctx->pc = 0x1f194cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4224));
label_1f1950:
    // 0x1f1950: 0x2675008c  addiu       $s5, $s3, 0x8C
    ctx->pc = 0x1f1950u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
label_1f1954:
    // 0x1f1954: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f1954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f1958:
    // 0x1f1958: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1f195c:
    // 0x1f195c: 0xaee00010  sw          $zero, 0x10($s7)
    ctx->pc = 0x1f195cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 0));
label_1f1960:
    // 0x1f1960: 0x8ee5000c  lw          $a1, 0xC($s7)
    ctx->pc = 0x1f1960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1f1964:
    // 0x1f1964: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1f1964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1f1968:
    // 0x1f1968: 0xc076802  jal         func_1DA008
label_1f196c:
    if (ctx->pc == 0x1F196Cu) {
        ctx->pc = 0x1F196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1968u;
        // 0x1f196c: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1970u;
        goto label_1f1970;
    }
    ctx->pc = 0x1F1968u;
    SET_GPR_U32(ctx, 31, 0x1F1970u);
    ctx->pc = 0x1F196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1968u;
    // 0x1f196c: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA008u, 0x1F1968u, 0x1F1970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1970u;
label_1f1970:
    // 0x1f1970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1974:
    // 0x1f1974: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1978:
    // 0x1f1978: 0xc072ff8  jal         func_1CBFE0
label_1f197c:
    if (ctx->pc == 0x1F197Cu) {
        ctx->pc = 0x1F197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1978u;
        // 0x1f197c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1980u;
        goto label_1f1980;
    }
    ctx->pc = 0x1F1978u;
    SET_GPR_U32(ctx, 31, 0x1F1980u);
    ctx->pc = 0x1F197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1978u;
    // 0x1f197c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFE0u, 0x1F1978u, 0x1F1980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1980u;
label_1f1980:
    // 0x1f1980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f1980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1984:
    // 0x1f1984: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1f1984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1f1988:
    // 0x1f1988: 0xc076812  jal         func_1DA048
label_1f198c:
    if (ctx->pc == 0x1F198Cu) {
        ctx->pc = 0x1F198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1988u;
        // 0x1f198c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1990u;
        goto label_1f1990;
    }
    ctx->pc = 0x1F1988u;
    SET_GPR_U32(ctx, 31, 0x1F1990u);
    ctx->pc = 0x1F198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1988u;
    // 0x1f198c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA048u, 0x1F1988u, 0x1F1990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1990u;
label_1f1990:
    // 0x1f1990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1994:
    // 0x1f1994: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1f1994u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1f1998:
    // 0x1f1998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f199c:
    // 0x1f199c: 0xc072ff8  jal         func_1CBFE0
label_1f19a0:
    if (ctx->pc == 0x1F19A0u) {
        ctx->pc = 0x1F19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F199Cu;
        // 0x1f19a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19A4u;
        goto label_1f19a4;
    }
    ctx->pc = 0x1F199Cu;
    SET_GPR_U32(ctx, 31, 0x1F19A4u);
    ctx->pc = 0x1F19A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F199Cu;
    // 0x1f19a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFE0u, 0x1F199Cu, 0x1F19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19A4u;
label_1f19a4:
    // 0x1f19a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f19a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f19a8:
    // 0x1f19a8: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1f19a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f19ac:
    // 0x1f19ac: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1f19acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1f19b0:
    // 0x1f19b0: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x1f19b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
label_1f19b4:
    // 0x1f19b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f19b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f19b8:
    // 0x1f19b8: 0xc07c61c  jal         func_1F1870
label_1f19bc:
    if (ctx->pc == 0x1F19BCu) {
        ctx->pc = 0x1F19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19B8u;
        // 0x1f19bc: 0x34e70f04  ori         $a3, $a3, 0xF04 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3844);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19C0u;
        goto label_1f19c0;
    }
    ctx->pc = 0x1F19B8u;
    SET_GPR_U32(ctx, 31, 0x1F19C0u);
    ctx->pc = 0x1F19BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19B8u;
    // 0x1f19bc: 0x34e70f04  ori         $a3, $a3, 0xF04 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3844);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1870u, 0x1F19B8u, 0x1F19C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19C0u;
label_1f19c0:
    // 0x1f19c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f19c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f19c4:
    // 0x1f19c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f19c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f19c8:
    // 0x1f19c8: 0xc07c5f2  jal         func_1F17C8
label_1f19cc:
    if (ctx->pc == 0x1F19CCu) {
        ctx->pc = 0x1F19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19C8u;
        // 0x1f19cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19D0u;
        goto label_1f19d0;
    }
    ctx->pc = 0x1F19C8u;
    SET_GPR_U32(ctx, 31, 0x1F19D0u);
    ctx->pc = 0x1F19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19C8u;
    // 0x1f19cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F17C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F17C8u, 0x1F19C8u, 0x1F19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19D0u;
label_1f19d0:
    // 0x1f19d0: 0x1600008b  bnez        $s0, . + 4 + (0x8B << 2)
label_1f19d4:
    if (ctx->pc == 0x1F19D4u) {
        ctx->pc = 0x1F19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19D0u;
        // 0x1f19d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19D8u;
        goto label_1f19d8;
    }
    ctx->pc = 0x1F19D0u;
    {
        const bool branch_taken_0x1f19d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19D0u;
        // 0x1f19d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19d0) {
            ctx->pc = 0x1F1C00u;
            goto label_1f1c00;
        }
    }
    ctx->pc = 0x1F19D8u;
label_1f19d8:
    // 0x1f19d8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1f19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1f19dc:
    // 0x1f19dc: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x1f19dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1f19e0:
    // 0x1f19e0: 0x10700087  beq         $v1, $s0, . + 4 + (0x87 << 2)
label_1f19e4:
    if (ctx->pc == 0x1F19E4u) {
        ctx->pc = 0x1F19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19E0u;
        // 0x1f19e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19E8u;
        goto label_1f19e8;
    }
    ctx->pc = 0x1F19E0u;
    {
        const bool branch_taken_0x1f19e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1F19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19E0u;
        // 0x1f19e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19e0) {
            ctx->pc = 0x1F1C00u;
            goto label_1f1c00;
        }
    }
    ctx->pc = 0x1F19E8u;
label_1f19e8:
    // 0x1f19e8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1f19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1f19ec:
    // 0x1f19ec: 0xc07674c  jal         func_1D9D30
label_1f19f0:
    if (ctx->pc == 0x1F19F0u) {
        ctx->pc = 0x1F19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19ECu;
        // 0x1f19f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19F4u;
        goto label_1f19f4;
    }
    ctx->pc = 0x1F19ECu;
    SET_GPR_U32(ctx, 31, 0x1F19F4u);
    ctx->pc = 0x1F19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19ECu;
    // 0x1f19f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D30u, 0x1F19ECu, 0x1F19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19F4u;
label_1f19f4:
    // 0x1f19f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f19f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f19f8:
    // 0x1f19f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1f19fc:
    if (ctx->pc == 0x1F19FCu) {
        ctx->pc = 0x1F19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19F8u;
        // 0x1f19fc: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A00u;
        goto label_1f1a00;
    }
    ctx->pc = 0x1F19F8u;
    {
        const bool branch_taken_0x1f19f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19F8u;
        // 0x1f19fc: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19f8) {
            ctx->pc = 0x1F1A18u;
            goto label_1f1a18;
        }
    }
    ctx->pc = 0x1F1A00u;
label_1f1a00:
    // 0x1f1a00: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f1a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1f1a04:
    // 0x1f1a04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a08:
    // 0x1f1a08: 0xc07b5c0  jal         func_1ED700
label_1f1a0c:
    if (ctx->pc == 0x1F1A0Cu) {
        ctx->pc = 0x1F1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A08u;
        // 0x1f1a0c: 0x34a50f05  ori         $a1, $a1, 0xF05 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3845);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A10u;
        goto label_1f1a10;
    }
    ctx->pc = 0x1F1A08u;
    SET_GPR_U32(ctx, 31, 0x1F1A10u);
    ctx->pc = 0x1F1A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A08u;
    // 0x1f1a0c: 0x34a50f05  ori         $a1, $a1, 0xF05 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3845);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F1A08u, 0x1F1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A10u;
label_1f1a10:
    // 0x1f1a10: 0x1000007c  b           . + 4 + (0x7C << 2)
label_1f1a14:
    if (ctx->pc == 0x1F1A14u) {
        ctx->pc = 0x1F1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A10u;
        // 0x1f1a14: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A18u;
        goto label_1f1a18;
    }
    ctx->pc = 0x1F1A10u;
    {
        const bool branch_taken_0x1f1a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A10u;
        // 0x1f1a14: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a10) {
            ctx->pc = 0x1F1C04u;
            goto label_1f1c04;
        }
    }
    ctx->pc = 0x1F1A18u;
label_1f1a18:
    // 0x1f1a18: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1a1c:
    // 0x1f1a1c: 0x30710040  andi        $s1, $v1, 0x40
    ctx->pc = 0x1f1a1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1f1a20:
    // 0x1f1a20: 0x52200018  beql        $s1, $zero, . + 4 + (0x18 << 2)
label_1f1a24:
    if (ctx->pc == 0x1F1A24u) {
        ctx->pc = 0x1F1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A20u;
        // 0x1f1a24: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A28u;
        goto label_1f1a28;
    }
    ctx->pc = 0x1F1A20u;
    {
        const bool branch_taken_0x1f1a20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a20) {
            ctx->pc = 0x1F1A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A20u;
            // 0x1f1a24: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A84u;
            goto label_1f1a84;
        }
    }
    ctx->pc = 0x1F1A28u;
label_1f1a28:
    // 0x1f1a28: 0x8e84090c  lw          $a0, 0x90C($s4)
    ctx->pc = 0x1f1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2316)));
label_1f1a2c:
    // 0x1f1a2c: 0x5880000a  blezl       $a0, . + 4 + (0xA << 2)
label_1f1a30:
    if (ctx->pc == 0x1F1A30u) {
        ctx->pc = 0x1F1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A2Cu;
        // 0x1f1a30: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A34u;
        goto label_1f1a34;
    }
    ctx->pc = 0x1F1A2Cu;
    {
        const bool branch_taken_0x1f1a2c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1f1a2c) {
            ctx->pc = 0x1F1A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A2Cu;
            // 0x1f1a30: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A58u;
            goto label_1f1a58;
        }
    }
    ctx->pc = 0x1F1A34u;
label_1f1a34:
    // 0x1f1a34: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1f1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f1a38:
    // 0x1f1a38: 0x54830071  bnel        $a0, $v1, . + 4 + (0x71 << 2)
label_1f1a3c:
    if (ctx->pc == 0x1F1A3Cu) {
        ctx->pc = 0x1F1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A38u;
        // 0x1f1a3c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A40u;
        goto label_1f1a40;
    }
    ctx->pc = 0x1F1A38u;
    {
        const bool branch_taken_0x1f1a38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1a38) {
            ctx->pc = 0x1F1A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A38u;
            // 0x1f1a3c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1C00u;
            goto label_1f1c00;
        }
    }
    ctx->pc = 0x1F1A40u;
label_1f1a40:
    // 0x1f1a40: 0x8e840910  lw          $a0, 0x910($s4)
    ctx->pc = 0x1f1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2320)));
label_1f1a44:
    // 0x1f1a44: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1f1a48:
    // 0x1f1a48: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_1f1a4c:
    if (ctx->pc == 0x1F1A4Cu) {
        ctx->pc = 0x1F1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A48u;
        // 0x1f1a4c: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A50u;
        goto label_1f1a50;
    }
    ctx->pc = 0x1F1A48u;
    {
        const bool branch_taken_0x1f1a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1a48) {
            ctx->pc = 0x1F1A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A48u;
            // 0x1f1a4c: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A58u;
            goto label_1f1a58;
        }
    }
    ctx->pc = 0x1F1A50u;
label_1f1a50:
    // 0x1f1a50: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1f1a54:
    if (ctx->pc == 0x1F1A54u) {
        ctx->pc = 0x1F1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A50u;
        // 0x1f1a54: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A58u;
        goto label_1f1a58;
    }
    ctx->pc = 0x1F1A50u;
    {
        const bool branch_taken_0x1f1a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A50u;
        // 0x1f1a54: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a50) {
            ctx->pc = 0x1F1C00u;
            goto label_1f1c00;
        }
    }
    ctx->pc = 0x1F1A58u;
label_1f1a58:
    // 0x1f1a58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f1a5c:
    if (ctx->pc == 0x1F1A5Cu) {
        ctx->pc = 0x1F1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A58u;
        // 0x1f1a5c: 0x8e840d70  lw          $a0, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A60u;
        goto label_1f1a60;
    }
    ctx->pc = 0x1F1A58u;
    {
        const bool branch_taken_0x1f1a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A58u;
        // 0x1f1a5c: 0x8e840d70  lw          $a0, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a58) {
            ctx->pc = 0x1F1A80u;
            goto label_1f1a80;
        }
    }
    ctx->pc = 0x1F1A60u;
label_1f1a60:
    // 0x1f1a60: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1f1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f1a64:
    // 0x1f1a64: 0x40f809  jalr        $v0
label_1f1a68:
    if (ctx->pc == 0x1F1A68u) {
        ctx->pc = 0x1F1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A64u;
        // 0x1f1a68: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A6Cu;
        goto label_1f1a6c;
    }
    ctx->pc = 0x1F1A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1A6Cu);
        ctx->pc = 0x1F1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A64u;
        // 0x1f1a68: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1A64u, 0x1F1A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1A6Cu;
label_1f1a6c:
    // 0x1f1a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f1a70:
    if (ctx->pc == 0x1F1A70u) {
        ctx->pc = 0x1F1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A6Cu;
        // 0x1f1a70: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A74u;
        goto label_1f1a74;
    }
    ctx->pc = 0x1F1A6Cu;
    {
        const bool branch_taken_0x1f1a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A6Cu;
        // 0x1f1a70: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a6c) {
            ctx->pc = 0x1F1A80u;
            goto label_1f1a80;
        }
    }
    ctx->pc = 0x1F1A74u;
label_1f1a74:
    // 0x1f1a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a78:
    // 0x1f1a78: 0x10000061  b           . + 4 + (0x61 << 2)
label_1f1a7c:
    if (ctx->pc == 0x1F1A7Cu) {
        ctx->pc = 0x1F1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A78u;
        // 0x1f1a7c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A80u;
        goto label_1f1a80;
    }
    ctx->pc = 0x1F1A78u;
    {
        const bool branch_taken_0x1f1a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A78u;
        // 0x1f1a7c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a78) {
            ctx->pc = 0x1F1C00u;
            goto label_1f1c00;
        }
    }
    ctx->pc = 0x1F1A80u;
label_1f1a80:
    // 0x1f1a80: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x1f1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_1f1a84:
    // 0x1f1a84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1a88:
    // 0x1f1a88: 0x54860003  bnel        $a0, $a2, . + 4 + (0x3 << 2)
label_1f1a8c:
    if (ctx->pc == 0x1F1A8Cu) {
        ctx->pc = 0x1F1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A88u;
        // 0x1f1a8c: 0x8e850038  lw          $a1, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A90u;
        goto label_1f1a90;
    }
    ctx->pc = 0x1F1A88u;
    {
        const bool branch_taken_0x1f1a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x1f1a88) {
            ctx->pc = 0x1F1A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A88u;
            // 0x1f1a8c: 0x8e850038  lw          $a1, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A98u;
            goto label_1f1a98;
        }
    }
    ctx->pc = 0x1F1A90u;
label_1f1a90:
    // 0x1f1a90: 0x10000019  b           . + 4 + (0x19 << 2)
label_1f1a94:
    if (ctx->pc == 0x1F1A94u) {
        ctx->pc = 0x1F1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A90u;
        // 0x1f1a94: 0xae600174  sw          $zero, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A98u;
        goto label_1f1a98;
    }
    ctx->pc = 0x1F1A90u;
    {
        const bool branch_taken_0x1f1a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A90u;
        // 0x1f1a94: 0xae600174  sw          $zero, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a90) {
            ctx->pc = 0x1F1AF8u;
            goto label_1f1af8;
        }
    }
    ctx->pc = 0x1F1A98u;
label_1f1a98:
    // 0x1f1a98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f1a9c:
    // 0x1f1a9c: 0x54a20017  bnel        $a1, $v0, . + 4 + (0x17 << 2)
label_1f1aa0:
    if (ctx->pc == 0x1F1AA0u) {
        ctx->pc = 0x1F1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A9Cu;
        // 0x1f1aa0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AA4u;
        goto label_1f1aa4;
    }
    ctx->pc = 0x1F1A9Cu;
    {
        const bool branch_taken_0x1f1a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f1a9c) {
            ctx->pc = 0x1F1AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A9Cu;
            // 0x1f1aa0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1AFCu;
            goto label_1f1afc;
        }
    }
    ctx->pc = 0x1F1AA4u;
label_1f1aa4:
    // 0x1f1aa4: 0x8e630164  lw          $v1, 0x164($s3)
    ctx->pc = 0x1f1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_1f1aa8:
    // 0x1f1aa8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1f1aac:
    if (ctx->pc == 0x1F1AACu) {
        ctx->pc = 0x1F1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AA8u;
        // 0x1f1aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AB0u;
        goto label_1f1ab0;
    }
    ctx->pc = 0x1F1AA8u;
    {
        const bool branch_taken_0x1f1aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AA8u;
        // 0x1f1aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1aa8) {
            ctx->pc = 0x1F1AF8u;
            goto label_1f1af8;
        }
    }
    ctx->pc = 0x1F1AB0u;
label_1f1ab0:
    // 0x1f1ab0: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
label_1f1ab4:
    if (ctx->pc == 0x1F1AB4u) {
        ctx->pc = 0x1F1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AB0u;
        // 0x1f1ab4: 0x8c630070  lw          $v1, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AB8u;
        goto label_1f1ab8;
    }
    ctx->pc = 0x1F1AB0u;
    {
        const bool branch_taken_0x1f1ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AB0u;
        // 0x1f1ab4: 0x8c630070  lw          $v1, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ab0) {
            ctx->pc = 0x1F1AE0u;
            goto label_1f1ae0;
        }
    }
    ctx->pc = 0x1F1AB8u;
label_1f1ab8:
    // 0x1f1ab8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1f1abc:
    // 0x1f1abc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f1abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f1ac0:
    // 0x1f1ac0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1f1ac4:
    if (ctx->pc == 0x1F1AC4u) {
        ctx->pc = 0x1F1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AC0u;
        // 0x1f1ac4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AC8u;
        goto label_1f1ac8;
    }
    ctx->pc = 0x1F1AC0u;
    {
        const bool branch_taken_0x1f1ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AC0u;
        // 0x1f1ac4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ac0) {
            ctx->pc = 0x1F1AFCu;
            goto label_1f1afc;
        }
    }
    ctx->pc = 0x1F1AC8u;
label_1f1ac8:
    // 0x1f1ac8: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1f1ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1f1acc:
    // 0x1f1acc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1f1ad0:
    if (ctx->pc == 0x1F1AD0u) {
        ctx->pc = 0x1F1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ACCu;
        // 0x1f1ad0: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AD4u;
        goto label_1f1ad4;
    }
    ctx->pc = 0x1F1ACCu;
    {
        const bool branch_taken_0x1f1acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1acc) {
            ctx->pc = 0x1F1AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1ACCu;
            // 0x1f1ad0: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B00u;
            goto label_1f1b00;
        }
    }
    ctx->pc = 0x1F1AD4u;
label_1f1ad4:
    // 0x1f1ad4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f1ad8:
    if (ctx->pc == 0x1F1AD8u) {
        ctx->pc = 0x1F1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AD4u;
        // 0x1f1ad8: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1ADCu;
        goto label_1f1adc;
    }
    ctx->pc = 0x1F1AD4u;
    {
        const bool branch_taken_0x1f1ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AD4u;
        // 0x1f1ad8: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ad4) {
            ctx->pc = 0x1F1AF8u;
            goto label_1f1af8;
        }
    }
    ctx->pc = 0x1F1ADCu;
label_1f1adc:
    // 0x1f1adc: 0x0  nop
    ctx->pc = 0x1f1adcu;
    // NOP
label_1f1ae0:
    // 0x1f1ae0: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_1f1ae4:
    if (ctx->pc == 0x1F1AE4u) {
        ctx->pc = 0x1F1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AE0u;
        // 0x1f1ae4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AE8u;
        goto label_1f1ae8;
    }
    ctx->pc = 0x1F1AE0u;
    {
        const bool branch_taken_0x1f1ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AE0u;
        // 0x1f1ae4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ae0) {
            ctx->pc = 0x1F1AFCu;
            goto label_1f1afc;
        }
    }
    ctx->pc = 0x1F1AE8u;
label_1f1ae8:
    // 0x1f1ae8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1f1aec:
    // 0x1f1aec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f1aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f1af0:
    // 0x1f1af0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1f1af4:
    if (ctx->pc == 0x1F1AF4u) {
        ctx->pc = 0x1F1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AF0u;
        // 0x1f1af4: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AF8u;
        goto label_1f1af8;
    }
    ctx->pc = 0x1F1AF0u;
    {
        const bool branch_taken_0x1f1af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1af0) {
            ctx->pc = 0x1F1AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1AF0u;
            // 0x1f1af4: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1AF8u;
            goto label_1f1af8;
        }
    }
    ctx->pc = 0x1F1AF8u;
label_1f1af8:
    // 0x1f1af8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1f1af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1f1afc:
    // 0x1f1afc: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x1f1afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1f1b00:
    // 0x1f1b00: 0xc076808  jal         func_1DA020
label_1f1b04:
    if (ctx->pc == 0x1F1B04u) {
        ctx->pc = 0x1F1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B00u;
        // 0x1f1b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B08u;
        goto label_1f1b08;
    }
    ctx->pc = 0x1F1B00u;
    SET_GPR_U32(ctx, 31, 0x1F1B08u);
    ctx->pc = 0x1F1B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B00u;
    // 0x1f1b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA020u, 0x1F1B00u, 0x1F1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B08u;
label_1f1b08:
    // 0x1f1b08: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1f1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1f1b0c:
    // 0x1f1b0c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1f1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1f1b10:
    // 0x1f1b10: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1f1b14:
    if (ctx->pc == 0x1F1B14u) {
        ctx->pc = 0x1F1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B10u;
        // 0x1f1b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B18u;
        goto label_1f1b18;
    }
    ctx->pc = 0x1F1B10u;
    {
        const bool branch_taken_0x1f1b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B10u;
        // 0x1f1b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b10) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1B18u;
label_1f1b18:
    // 0x1f1b18: 0xae63010c  sw          $v1, 0x10C($s3)
    ctx->pc = 0x1f1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
label_1f1b1c:
    // 0x1f1b1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f1b20:
    if (ctx->pc == 0x1F1B20u) {
        ctx->pc = 0x1F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B1Cu;
        // 0x1f1b20: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B24u;
        goto label_1f1b24;
    }
    ctx->pc = 0x1F1B1Cu;
    {
        const bool branch_taken_0x1f1b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B1Cu;
        // 0x1f1b20: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b1c) {
            ctx->pc = 0x1F1B2Cu;
            goto label_1f1b2c;
        }
    }
    ctx->pc = 0x1F1B24u;
label_1f1b24:
    // 0x1f1b24: 0x0  nop
    ctx->pc = 0x1f1b24u;
    // NOP
label_1f1b28:
    // 0x1f1b28: 0xae600110  sw          $zero, 0x110($s3)
    ctx->pc = 0x1f1b28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
label_1f1b2c:
    // 0x1f1b2c: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_1f1b30:
    if (ctx->pc == 0x1F1B30u) {
        ctx->pc = 0x1F1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B2Cu;
        // 0x1f1b30: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B34u;
        goto label_1f1b34;
    }
    ctx->pc = 0x1F1B2Cu;
    {
        const bool branch_taken_0x1f1b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b2c) {
            ctx->pc = 0x1F1B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B2Cu;
            // 0x1f1b30: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B6Cu;
            goto label_1f1b6c;
        }
    }
    ctx->pc = 0x1F1B34u;
label_1f1b34:
    // 0x1f1b34: 0x8e900d54  lw          $s0, 0xD54($s4)
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3412)));
label_1f1b38:
    // 0x1f1b38: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1f1b3c:
    if (ctx->pc == 0x1F1B3Cu) {
        ctx->pc = 0x1F1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B38u;
        // 0x1f1b3c: 0x8e910d58  lw          $s1, 0xD58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B40u;
        goto label_1f1b40;
    }
    ctx->pc = 0x1F1B38u;
    {
        const bool branch_taken_0x1f1b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B38u;
        // 0x1f1b3c: 0x8e910d58  lw          $s1, 0xD58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b38) {
            ctx->pc = 0x1F1B68u;
            goto label_1f1b68;
        }
    }
    ctx->pc = 0x1F1B40u;
label_1f1b40:
    // 0x1f1b40: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1f1b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1b44:
    // 0x1f1b44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1b48:
    // 0x1f1b48: 0xc076326  jal         func_1D8C98
label_1f1b4c:
    if (ctx->pc == 0x1F1B4Cu) {
        ctx->pc = 0x1F1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B48u;
        // 0x1f1b4c: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B50u;
        goto label_1f1b50;
    }
    ctx->pc = 0x1F1B48u;
    SET_GPR_U32(ctx, 31, 0x1F1B50u);
    ctx->pc = 0x1F1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B48u;
    // 0x1f1b4c: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1F1B48u, 0x1F1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B50u;
label_1f1b50:
    // 0x1f1b50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f1b54:
    if (ctx->pc == 0x1F1B54u) {
        ctx->pc = 0x1F1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B50u;
        // 0x1f1b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B58u;
        goto label_1f1b58;
    }
    ctx->pc = 0x1F1B50u;
    {
        const bool branch_taken_0x1f1b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B50u;
        // 0x1f1b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b50) {
            ctx->pc = 0x1F1B68u;
            goto label_1f1b68;
        }
    }
    ctx->pc = 0x1F1B58u;
label_1f1b58:
    // 0x1f1b58: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1f1b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1b5c:
    // 0x1f1b5c: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x1f1b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f1b60:
    // 0x1f1b60: 0x200f809  jalr        $s0
label_1f1b64:
    if (ctx->pc == 0x1F1B64u) {
        ctx->pc = 0x1F1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B60u;
        // 0x1f1b64: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B68u;
        goto label_1f1b68;
    }
    ctx->pc = 0x1F1B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1F1B68u);
        ctx->pc = 0x1F1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B60u;
        // 0x1f1b64: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B60u, 0x1F1B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1B68u;
label_1f1b68:
    // 0x1f1b68: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1f1b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1b6c:
    // 0x1f1b6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f1b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f1b70:
    // 0x1f1b70: 0xc076326  jal         func_1D8C98
label_1f1b74:
    if (ctx->pc == 0x1F1B74u) {
        ctx->pc = 0x1F1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B70u;
        // 0x1f1b74: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B78u;
        goto label_1f1b78;
    }
    ctx->pc = 0x1F1B70u;
    SET_GPR_U32(ctx, 31, 0x1F1B78u);
    ctx->pc = 0x1F1B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B70u;
    // 0x1f1b74: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1F1B70u, 0x1F1B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B78u;
label_1f1b78:
    // 0x1f1b78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b7c:
    // 0x1f1b7c: 0x8e690110  lw          $t1, 0x110($s3)
    ctx->pc = 0x1f1b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1f1b80:
    // 0x1f1b80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f1b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b84:
    // 0x1f1b84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b88:
    // 0x1f1b88: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f1b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b8c:
    // 0x1f1b8c: 0xc07c70c  jal         func_1F1C30
label_1f1b90:
    if (ctx->pc == 0x1F1B90u) {
        ctx->pc = 0x1F1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B8Cu;
        // 0x1f1b90: 0x27a80008  addiu       $t0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B94u;
        goto label_1f1b94;
    }
    ctx->pc = 0x1F1B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B94u);
    ctx->pc = 0x1F1B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B8Cu;
    // 0x1f1b90: 0x27a80008  addiu       $t0, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1C30u, 0x1F1B8Cu, 0x1F1B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B94u;
label_1f1b94:
    // 0x1f1b94: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x1f1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_1f1b98:
    // 0x1f1b98: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1f1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1b9c:
    // 0x1f1b9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ba0:
    // 0x1f1ba0: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x1f1ba0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f1ba4:
    // 0x1f1ba4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1f1ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1f1ba8:
    // 0x1f1ba8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1f1bac:
    if (ctx->pc == 0x1F1BACu) {
        ctx->pc = 0x1F1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BA8u;
        // 0x1f1bac: 0xfe641120  sd          $a0, 0x1120($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 4384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BB0u;
        goto label_1f1bb0;
    }
    ctx->pc = 0x1F1BA8u;
    {
        const bool branch_taken_0x1f1ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BA8u;
        // 0x1f1bac: 0xfe641120  sd          $a0, 0x1120($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 4384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ba8) {
            ctx->pc = 0x1F1C00u;
            goto label_1f1c00;
        }
    }
    ctx->pc = 0x1F1BB0u;
label_1f1bb0:
    // 0x1f1bb0: 0x8e660110  lw          $a2, 0x110($s3)
    ctx->pc = 0x1f1bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1f1bb4:
    // 0x1f1bb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bb8:
    // 0x1f1bb8: 0xc07c7b0  jal         func_1F1EC0
label_1f1bbc:
    if (ctx->pc == 0x1F1BBCu) {
        ctx->pc = 0x1F1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BB8u;
        // 0x1f1bbc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BC0u;
        goto label_1f1bc0;
    }
    ctx->pc = 0x1F1BB8u;
    SET_GPR_U32(ctx, 31, 0x1F1BC0u);
    ctx->pc = 0x1F1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BB8u;
    // 0x1f1bbc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1EC0u, 0x1F1BB8u, 0x1F1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BC0u;
label_1f1bc0:
    // 0x1f1bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bc4:
    // 0x1f1bc4: 0x8e670110  lw          $a3, 0x110($s3)
    ctx->pc = 0x1f1bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1f1bc8:
    // 0x1f1bc8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f1bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bcc:
    // 0x1f1bcc: 0xc07c886  jal         func_1F2218
label_1f1bd0:
    if (ctx->pc == 0x1F1BD0u) {
        ctx->pc = 0x1F1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BCCu;
        // 0x1f1bd0: 0xdfa60000  ld          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BD4u;
        goto label_1f1bd4;
    }
    ctx->pc = 0x1F1BCCu;
    SET_GPR_U32(ctx, 31, 0x1F1BD4u);
    ctx->pc = 0x1F1BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BCCu;
    // 0x1f1bd0: 0xdfa60000  ld          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2218u, 0x1F1BCCu, 0x1F1BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BD4u;
label_1f1bd4:
    // 0x1f1bd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bd8:
    // 0x1f1bd8: 0xc07c9f0  jal         func_1F27C0
label_1f1bdc:
    if (ctx->pc == 0x1F1BDCu) {
        ctx->pc = 0x1F1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BD8u;
        // 0x1f1bdc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BE0u;
        goto label_1f1be0;
    }
    ctx->pc = 0x1F1BD8u;
    SET_GPR_U32(ctx, 31, 0x1F1BE0u);
    ctx->pc = 0x1F1BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BD8u;
    // 0x1f1bdc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F27C0u, 0x1F1BD8u, 0x1F1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BE0u;
label_1f1be0:
    // 0x1f1be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1be4:
    // 0x1f1be4: 0xc07ca28  jal         func_1F28A0
label_1f1be8:
    if (ctx->pc == 0x1F1BE8u) {
        ctx->pc = 0x1F1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BE4u;
        // 0x1f1be8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BECu;
        goto label_1f1bec;
    }
    ctx->pc = 0x1F1BE4u;
    SET_GPR_U32(ctx, 31, 0x1F1BECu);
    ctx->pc = 0x1F1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BE4u;
    // 0x1f1be8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F28A0u, 0x1F1BE4u, 0x1F1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BECu;
label_1f1bec:
    // 0x1f1bec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bf0:
    // 0x1f1bf0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1f1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1f1bf4:
    // 0x1f1bf4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f1bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bf8:
    // 0x1f1bf8: 0xc07ca8e  jal         func_1F2A38
label_1f1bfc:
    if (ctx->pc == 0x1F1BFCu) {
        ctx->pc = 0x1F1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BF8u;
        // 0x1f1bfc: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1C00u;
        goto label_1f1c00;
    }
    ctx->pc = 0x1F1BF8u;
    SET_GPR_U32(ctx, 31, 0x1F1C00u);
    ctx->pc = 0x1F1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BF8u;
    // 0x1f1bfc: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2A38u, 0x1F1BF8u, 0x1F1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C00u;
label_1f1c00:
    // 0x1f1c00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f1c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1c04:
    // 0x1f1c04: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f1c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f1c08:
    // 0x1f1c08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f1c08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1c0c:
    // 0x1f1c0c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f1c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1f1c10:
    // 0x1f1c10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f1c10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1c14:
    // 0x1f1c14: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f1c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1f1c18:
    // 0x1f1c18: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1f1c18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f1c1c:
    // 0x1f1c1c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1f1c1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1f1c20:
    // 0x1f1c20: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1f1c20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f1c24:
    // 0x1f1c24: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1f1c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1f1c28:
    // 0x1f1c28: 0x3e00008  jr          $ra
label_1f1c2c:
    if (ctx->pc == 0x1F1C2Cu) {
        ctx->pc = 0x1F1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C28u;
        // 0x1f1c2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1C30u;
        goto label_fallthrough_0x1f1c28;
    }
    ctx->pc = 0x1F1C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C28u;
        // 0x1f1c2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f1c28:
    ctx->pc = 0x1F1C30u;
}
