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

// Function: sub_00155B50
// Address: 0x155b50 - 0x155ca0
void sub_00155B50_0x155b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155B50_0x155b50");
#endif

    switch (ctx->pc) {
        case 0x155ba8u: goto label_155ba8;
        case 0x155bc8u: goto label_155bc8;
        case 0x155bd8u: goto label_155bd8;
        case 0x155bf0u: goto label_155bf0;
        case 0x155c40u: goto label_155c40;
        default: break;
    }

    ctx->pc = 0x155b50u;

    // 0x155b50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x155b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x155b54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x155b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x155b58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x155b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x155b5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x155b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x155b60: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x155b60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x155b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x155b68: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x155b68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x155b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x155b70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x155b74: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x155b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155b7c: 0x2aa20100  slti        $v0, $s5, 0x100
    ctx->pc = 0x155b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x155b80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155b84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155b8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x155b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155B90u;
    {
        const bool branch_taken_0x155b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B90u;
        // 0x155b94: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b90) {
            ctx->pc = 0x155BA0u;
            goto label_155ba0;
        }
    }
    ctx->pc = 0x155B98u;
    // 0x155b98: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x155B98u;
    {
        const bool branch_taken_0x155b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B98u;
        // 0x155b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b98) {
            ctx->pc = 0x155C70u;
            goto label_155c70;
        }
    }
    ctx->pc = 0x155BA0u;
label_155ba0:
    // 0x155ba0: 0xc055800  jal         func_156000
    ctx->pc = 0x155BA0u;
    SET_GPR_U32(ctx, 31, 0x155BA8u);
    ctx->pc = 0x156000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156000u, 0x155BA0u, 0x155BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BA8u;
label_155ba8:
    // 0x155ba8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155BA8u;
    {
        const bool branch_taken_0x155ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BA8u;
        // 0x155bac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ba8) {
            ctx->pc = 0x155BB8u;
            goto label_155bb8;
        }
    }
    ctx->pc = 0x155BB0u;
    // 0x155bb0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x155BB0u;
    {
        const bool branch_taken_0x155bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BB0u;
        // 0x155bb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bb0) {
            ctx->pc = 0x155C70u;
            goto label_155c70;
        }
    }
    ctx->pc = 0x155BB8u;
label_155bb8:
    // 0x155bb8: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x155BB8u;
    {
        const bool branch_taken_0x155bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x155bb8) {
            ctx->pc = 0x155BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155BB8u;
            // 0x155bbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155BF0u;
            goto label_155bf0;
        }
    }
    ctx->pc = 0x155BC0u;
    // 0x155bc0: 0xc05581c  jal         func_156070
    ctx->pc = 0x155BC0u;
    SET_GPR_U32(ctx, 31, 0x155BC8u);
    ctx->pc = 0x155BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BC0u;
    // 0x155bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156070u, 0x155BC0u, 0x155BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BC8u;
label_155bc8:
    // 0x155bc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155BC8u;
    {
        const bool branch_taken_0x155bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BC8u;
        // 0x155bcc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bc8) {
            ctx->pc = 0x155BE0u;
            goto label_155be0;
        }
    }
    ctx->pc = 0x155BD0u;
    // 0x155bd0: 0xc055810  jal         func_156040
    ctx->pc = 0x155BD0u;
    SET_GPR_U32(ctx, 31, 0x155BD8u);
    ctx->pc = 0x155BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BD0u;
    // 0x155bd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156040u, 0x155BD0u, 0x155BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BD8u;
label_155bd8:
    // 0x155bd8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x155BD8u;
    {
        const bool branch_taken_0x155bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BD8u;
        // 0x155bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bd8) {
            ctx->pc = 0x155C70u;
            goto label_155c70;
        }
    }
    ctx->pc = 0x155BE0u;
label_155be0:
    // 0x155be0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x155be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155be8: 0xc067d64  jal         func_19F590
    ctx->pc = 0x155BE8u;
    SET_GPR_U32(ctx, 31, 0x155BF0u);
    ctx->pc = 0x155BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BE8u;
    // 0x155bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x155BE8u, 0x155BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BF0u;
label_155bf0:
    // 0x155bf0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x155bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x155bf4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x155bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x155bf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bfc: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x155c00: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x155c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x155c04: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x155c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x155c08: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x155c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155c0c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x155c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x155c10: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x155c10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155c14: 0x26840022  addiu       $a0, $s4, 0x22
    ctx->pc = 0x155c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 34));
    // 0x155c18: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155c1c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x155c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x155c20: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x155c20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x155c24: 0xae970008  sw          $s7, 0x8($s4)
    ctx->pc = 0x155c24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 23));
    // 0x155c28: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x155c28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x155c2c: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x155c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
    // 0x155c30: 0xae9e001c  sw          $fp, 0x1C($s4)
    ctx->pc = 0x155c30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 30));
    // 0x155c34: 0xae950004  sw          $s5, 0x4($s4)
    ctx->pc = 0x155c34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 21));
    // 0x155c38: 0xc04a966  jal         func_12A598
    ctx->pc = 0x155C38u;
    SET_GPR_U32(ctx, 31, 0x155C40u);
    ctx->pc = 0x155C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C38u;
    // 0x155c3c: 0xa6800020  sh          $zero, 0x20($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x155C38u, 0x155C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C40u;
label_155c40:
    // 0x155c40: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x155C40u;
    {
        const bool branch_taken_0x155c40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x155C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C40u;
        // 0x155c44: 0xa2800031  sb          $zero, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c40) {
            ctx->pc = 0x155C58u;
            goto label_155c58;
        }
    }
    ctx->pc = 0x155C48u;
    // 0x155c48: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x155c48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x155c4c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x155c4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x155C50u;
    {
        const bool branch_taken_0x155c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C50u;
        // 0x155c54: 0xae800018  sw          $zero, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c50) {
            ctx->pc = 0x155C64u;
            goto label_155c64;
        }
    }
    ctx->pc = 0x155C58u;
label_155c58:
    // 0x155c58: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x155c58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x155c5c: 0xae960018  sw          $s6, 0x18($s4)
    ctx->pc = 0x155c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 22));
    // 0x155c60: 0xaed40014  sw          $s4, 0x14($s6)
    ctx->pc = 0x155c60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 20));
label_155c64:
    // 0x155c64: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x155c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x155c68: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x155c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c6c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x155c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_155c70:
    // 0x155c70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x155c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x155c74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x155c74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155c78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x155c78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155c7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x155c7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155c80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x155c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155c84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155c88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155c8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155c98: 0x3e00008  jr          $ra
    ctx->pc = 0x155C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C98u;
        // 0x155c9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155CA0u;
}
