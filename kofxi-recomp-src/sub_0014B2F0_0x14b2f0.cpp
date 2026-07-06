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

// Function: sub_0014B2F0
// Address: 0x14b2f0 - 0x14b510
void sub_0014B2F0_0x14b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B2F0_0x14b2f0");
#endif

    switch (ctx->pc) {
        case 0x14b338u: goto label_14b338;
        case 0x14b3b8u: goto label_14b3b8;
        case 0x14b3e0u: goto label_14b3e0;
        case 0x14b3f0u: goto label_14b3f0;
        case 0x14b404u: goto label_14b404;
        case 0x14b450u: goto label_14b450;
        case 0x14b4b4u: goto label_14b4b4;
        case 0x14b4d0u: goto label_14b4d0;
        default: break;
    }

    ctx->pc = 0x14b2f0u;

    // 0x14b2f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b2f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14b2f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14b2fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b300: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14b300u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b304: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b308: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x14b308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x14b30c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b310: 0x3054003f  andi        $s4, $v0, 0x3F
    ctx->pc = 0x14b310u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x14b314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b318: 0x2a820030  slti        $v0, $s4, 0x30
    ctx->pc = 0x14b318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14b31c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14b31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b320: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B320u;
    {
        const bool branch_taken_0x14b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B320u;
        // 0x14b324: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b320) {
            ctx->pc = 0x14B33Cu;
            goto label_14b33c;
        }
    }
    ctx->pc = 0x14B328u;
    // 0x14b328: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b32c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b330: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B330u;
    SET_GPR_U32(ctx, 31, 0x14B338u);
    ctx->pc = 0x14B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B330u;
    // 0x14b334: 0x2484ce00  addiu       $a0, $a0, -0x3200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B330u, 0x14B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B338u;
label_14b338:
    // 0x14b338: 0x64140030  daddiu      $s4, $zero, 0x30
    ctx->pc = 0x14b338u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
label_14b33c:
    // 0x14b33c: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x14b33cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x14b340: 0x1620002b  bnez        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x14B340u;
    {
        const bool branch_taken_0x14b340 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b340) {
            ctx->pc = 0x14B3F0u;
            goto label_14b3f0;
        }
    }
    ctx->pc = 0x14B348u;
    // 0x14b348: 0x3292ffff  andi        $s2, $s4, 0xFFFF
    ctx->pc = 0x14b348u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x14b34c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14b350: 0x2463e180  addiu       $v1, $v1, -0x1E80
    ctx->pc = 0x14b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959488));
    // 0x14b354: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x14b358: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b35c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14b360: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x14b360u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b364: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14B364u;
    {
        const bool branch_taken_0x14b364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b364) {
            ctx->pc = 0x14B3F0u;
            goto label_14b3f0;
        }
    }
    ctx->pc = 0x14B36Cu;
    // 0x14b36c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x14b36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x14b370: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b374: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x14b374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14b378: 0x24425d40  addiu       $v0, $v0, 0x5D40
    ctx->pc = 0x14b378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23872));
    // 0x14b37c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14b37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14b380: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14b380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14b384: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x14b384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14b388: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14b388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b38c: 0x10520018  beq         $v0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x14B38Cu;
    {
        const bool branch_taken_0x14b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x14b38c) {
            ctx->pc = 0x14B3F0u;
            goto label_14b3f0;
        }
    }
    ctx->pc = 0x14B394u;
    // 0x14b394: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14b394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14b398: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x14b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x14b39c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x14b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b3a0: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x14b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x14b3a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b3a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b3ac: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x14b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x14b3b0: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14B3B0u;
    SET_GPR_U32(ctx, 31, 0x14B3B8u);
    ctx->pc = 0x14B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3B0u;
    // 0x14b3b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADF0u, 0x14B3B0u, 0x14B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3B8u;
label_14b3b8:
    // 0x14b3b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14b3bc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b3c0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14b3c4: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x14b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x14b3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b3cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3d0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14b3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b3d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14b3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3d8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B3D8u;
    SET_GPR_U32(ctx, 31, 0x14B3E0u);
    ctx->pc = 0x14B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3D8u;
    // 0x14b3dc: 0x2484ce20  addiu       $a0, $a0, -0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B3D8u, 0x14B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3E0u;
label_14b3e0:
    // 0x14b3e0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b3e4: 0xa2140000  sb          $s4, 0x0($s0)
    ctx->pc = 0x14b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x14b3e8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B3E8u;
    SET_GPR_U32(ctx, 31, 0x14B3F0u);
    ctx->pc = 0x14B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3E8u;
    // 0x14b3ec: 0x2484ce38  addiu       $a0, $a0, -0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B3E8u, 0x14B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3F0u;
label_14b3f0:
    // 0x14b3f0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x14b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x14b3f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3f8: 0x3290ffff  andi        $s0, $s4, 0xFFFF
    ctx->pc = 0x14b3f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x14b3fc: 0x24a55d80  addiu       $a1, $a1, 0x5D80
    ctx->pc = 0x14b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23936));
    // 0x14b400: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x14b400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_14b404:
    // 0x14b404: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x14b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b408: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14b408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b40c: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14B40Cu;
    {
        const bool branch_taken_0x14b40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x14b40c) {
            ctx->pc = 0x14B410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B40Cu;
            // 0x14b410: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B458u;
            goto label_14b458;
        }
    }
    ctx->pc = 0x14B414u;
    // 0x14b414: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x14b414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x14b418: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x14b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x14b41c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14b420: 0x24c65d50  addiu       $a2, $a2, 0x5D50
    ctx->pc = 0x14b420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23888));
    // 0x14b424: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14b424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14b428: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x14b428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14b42c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x14b42cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b430: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14b430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14b434: 0xa0940000  sb          $s4, 0x0($a0)
    ctx->pc = 0x14b434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x14b438: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14b43c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b444: 0x2484ce50  addiu       $a0, $a0, -0x31B0
    ctx->pc = 0x14b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954576));
    // 0x14b448: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B448u;
    SET_GPR_U32(ctx, 31, 0x14B450u);
    ctx->pc = 0x14B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B448u;
    // 0x14b44c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B448u, 0x14B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B450u;
label_14b450:
    // 0x14b450: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14B450u;
    {
        const bool branch_taken_0x14b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B450u;
        // 0x14b454: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b450) {
            ctx->pc = 0x14B4F0u;
            goto label_14b4f0;
        }
    }
    ctx->pc = 0x14B458u;
label_14b458:
    // 0x14b458: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x14b458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14b45c: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x14b45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b460: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14B460u;
    {
        const bool branch_taken_0x14b460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b460) {
            ctx->pc = 0x14B464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B460u;
            // 0x14b464: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14b404;
        }
    }
    ctx->pc = 0x14B468u;
    // 0x14b468: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x14b468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x14b46c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b470: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x14b470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14b474: 0x8c455d48  lw          $a1, 0x5D48($v0)
    ctx->pc = 0x14b474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23880)));
    // 0x14b478: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x14b478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14b47c: 0xa0740000  sb          $s4, 0x0($v1)
    ctx->pc = 0x14b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x14b480: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b484: 0x24635d50  addiu       $v1, $v1, 0x5D50
    ctx->pc = 0x14b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23888));
    // 0x14b488: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x14b488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x14b48c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x14b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b490: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x14b490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x14b494: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14b494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14b498: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x14b498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x14b49c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14b4a0: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x14b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x14b4a4: 0x2442e110  addiu       $v0, $v0, -0x1EF0
    ctx->pc = 0x14b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959376));
    // 0x14b4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b4ac: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14B4ACu;
    SET_GPR_U32(ctx, 31, 0x14B4B4u);
    ctx->pc = 0x14B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4ACu;
    // 0x14b4b0: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADF0u, 0x14B4ACu, 0x14B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4B4u;
label_14b4b4:
    // 0x14b4b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4b8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b4bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4c0: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x14b4c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x14b4c4: 0x2484ce80  addiu       $a0, $a0, -0x3180
    ctx->pc = 0x14b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
    // 0x14b4c8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B4C8u;
    SET_GPR_U32(ctx, 31, 0x14B4D0u);
    ctx->pc = 0x14B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4C8u;
    // 0x14b4cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B4C8u, 0x14B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4D0u;
label_14b4d0:
    // 0x14b4d0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b4d4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x14b4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x14b4d8: 0x8c645d48  lw          $a0, 0x5D48($v1)
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23880)));
    // 0x14b4dc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x14b4dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x14b4e0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b4e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14b4e8: 0xac645d48  sw          $a0, 0x5D48($v1)
    ctx->pc = 0x14b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23880), GPR_U32(ctx, 4));
    // 0x14b4ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14b4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_14b4f0:
    // 0x14b4f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14b4f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b4f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b4f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b4f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b504: 0x3e00008  jr          $ra
    ctx->pc = 0x14B504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B504u;
        // 0x14b508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B50Cu;
    // 0x14b50c: 0x0  nop
    ctx->pc = 0x14b50cu;
    // NOP
}
