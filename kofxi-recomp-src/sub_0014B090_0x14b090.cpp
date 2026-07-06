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

// Function: sub_0014B090
// Address: 0x14b090 - 0x14b190
void sub_0014B090_0x14b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B090_0x14b090");
#endif

    switch (ctx->pc) {
        case 0x14b0d0u: goto label_14b0d0;
        case 0x14b138u: goto label_14b138;
        case 0x14b160u: goto label_14b160;
        case 0x14b170u: goto label_14b170;
        default: break;
    }

    ctx->pc = 0x14b090u;

    // 0x14b090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14b094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14b098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b09c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b0a4: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x14b0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14b0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b0ac: 0x3073003f  andi        $s3, $v1, 0x3F
    ctx->pc = 0x14b0acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x14b0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b0b4: 0x2a630030  slti        $v1, $s3, 0x30
    ctx->pc = 0x14b0b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14b0b8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B0B8u;
    {
        const bool branch_taken_0x14b0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0B8u;
        // 0x14b0bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0b8) {
            ctx->pc = 0x14B0D4u;
            goto label_14b0d4;
        }
    }
    ctx->pc = 0x14B0C0u;
    // 0x14b0c0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b0c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14b0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0c8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B0C8u;
    SET_GPR_U32(ctx, 31, 0x14B0D0u);
    ctx->pc = 0x14B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0C8u;
    // 0x14b0cc: 0x2484ce00  addiu       $a0, $a0, -0x3200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B0C8u, 0x14B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0D0u;
label_14b0d0:
    // 0x14b0d0: 0x64130030  daddiu      $s3, $zero, 0x30
    ctx->pc = 0x14b0d0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
label_14b0d4:
    // 0x14b0d4: 0x3271ffff  andi        $s1, $s3, 0xFFFF
    ctx->pc = 0x14b0d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14b0d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14b0dc: 0x2484e180  addiu       $a0, $a0, -0x1E80
    ctx->pc = 0x14b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    // 0x14b0e0: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x14b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x14b0e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14b0e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x14b0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14b0ec: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x14b0ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b0f0: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14B0F0u;
    {
        const bool branch_taken_0x14b0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b0f0) {
            ctx->pc = 0x14B0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B0F0u;
            // 0x14b0f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B174u;
            goto label_14b174;
        }
    }
    ctx->pc = 0x14B0F8u;
    // 0x14b0f8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b0fc: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x14b0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14b100: 0x24635d40  addiu       $v1, $v1, 0x5D40
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23872));
    // 0x14b104: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x14b104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b108: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x14b108u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b10c: 0x10710018  beq         $v1, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14B10Cu;
    {
        const bool branch_taken_0x14b10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x14b10c) {
            ctx->pc = 0x14B170u;
            goto label_14b170;
        }
    }
    ctx->pc = 0x14B114u;
    // 0x14b114: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14b114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14b118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x14b118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x14b11c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x14b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b120: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x14b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x14b124: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14b124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b128: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14b128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b12c: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x14b130: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14B130u;
    SET_GPR_U32(ctx, 31, 0x14B138u);
    ctx->pc = 0x14B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B130u;
    // 0x14b134: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADF0u, 0x14B130u, 0x14B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B138u;
label_14b138:
    // 0x14b138: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14b13c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b140: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x14b140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14b144: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x14b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x14b148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b14c: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x14b14cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14b150: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14b150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b154: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14b154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b158: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B158u;
    SET_GPR_U32(ctx, 31, 0x14B160u);
    ctx->pc = 0x14B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B158u;
    // 0x14b15c: 0x2484ce20  addiu       $a0, $a0, -0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B158u, 0x14B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B160u;
label_14b160:
    // 0x14b160: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b164: 0xa2130000  sb          $s3, 0x0($s0)
    ctx->pc = 0x14b164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x14b168: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B168u;
    SET_GPR_U32(ctx, 31, 0x14B170u);
    ctx->pc = 0x14B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B168u;
    // 0x14b16c: 0x2484ce38  addiu       $a0, $a0, -0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B168u, 0x14B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B170u;
label_14b170:
    // 0x14b170: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14b170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14b174:
    // 0x14b174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b17c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b184: 0x3e00008  jr          $ra
    ctx->pc = 0x14B184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B184u;
        // 0x14b188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B18Cu;
    // 0x14b18c: 0x0  nop
    ctx->pc = 0x14b18cu;
    // NOP
}
