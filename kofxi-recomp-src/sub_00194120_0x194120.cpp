#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194120
// Address: 0x194120 - 0x1941f0
void sub_00194120_0x194120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194120_0x194120");
#endif

    switch (ctx->pc) {
        case 0x194160u: goto label_194160;
        case 0x19417cu: goto label_19417c;
        case 0x194190u: goto label_194190;
        case 0x1941b0u: goto label_1941b0;
        case 0x1941c0u: goto label_1941c0;
        case 0x1941d0u: goto label_1941d0;
        case 0x1941e0u: goto label_1941e0;
        default: break;
    }

    ctx->pc = 0x194120u;

label_194120:
    // 0x194120: 0x90a20354  lbu         $v0, 0x354($a1)
    ctx->pc = 0x194120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x194124: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x194124u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x194128: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x194128u;
    {
        const bool branch_taken_0x194128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194128) {
            ctx->pc = 0x19412Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194128u;
            // 0x19412c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19414Cu;
            goto label_19414c;
        }
    }
    ctx->pc = 0x194130u;
    // 0x194130: 0x8ca20494  lw          $v0, 0x494($a1)
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1172)));
    // 0x194134: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x194134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x194138: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194138u;
    {
        const bool branch_taken_0x194138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194138) {
            ctx->pc = 0x194148u;
            goto label_194148;
        }
    }
    ctx->pc = 0x194140u;
    // 0x194140: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194140u;
    {
        const bool branch_taken_0x194140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194140u;
            // 0x194144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194140) {
            ctx->pc = 0x19414Cu;
            goto label_19414c;
        }
    }
    ctx->pc = 0x194148u;
label_194148:
    // 0x194148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19414c:
    // 0x19414c: 0x3e00008  jr          $ra
    ctx->pc = 0x19414Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194154u;
    // 0x194154: 0x0  nop
    ctx->pc = 0x194154u;
    // NOP
    // 0x194158: 0x0  nop
    ctx->pc = 0x194158u;
    // NOP
    // 0x19415c: 0x0  nop
    ctx->pc = 0x19415cu;
    // NOP
label_194160:
    // 0x194160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194168: 0x90a20354  lbu         $v0, 0x354($a1)
    ctx->pc = 0x194168u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x19416c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x19416Cu;
    {
        const bool branch_taken_0x19416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19416c) {
            ctx->pc = 0x194170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19416Cu;
            // 0x194170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19417Cu;
            goto label_19417c;
        }
    }
    ctx->pc = 0x194174u;
    // 0x194174: 0xc065048  jal         func_194120
    ctx->pc = 0x194174u;
    SET_GPR_U32(ctx, 31, 0x19417Cu);
    ctx->pc = 0x194120u;
    goto label_194120;
    ctx->pc = 0x19417Cu;
label_19417c:
    // 0x19417c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194180: 0x3e00008  jr          $ra
    ctx->pc = 0x194180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194180u;
            // 0x194184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194188u;
    // 0x194188: 0x0  nop
    ctx->pc = 0x194188u;
    // NOP
    // 0x19418c: 0x0  nop
    ctx->pc = 0x19418cu;
    // NOP
label_194190:
    // 0x194190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19419c: 0x90a30354  lbu         $v1, 0x354($a1)
    ctx->pc = 0x19419cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x1941a0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1941A0u;
    {
        const bool branch_taken_0x1941a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1941a0) {
            ctx->pc = 0x1941A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1941A0u;
            // 0x1941a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1941B0u;
            goto label_1941b0;
        }
    }
    ctx->pc = 0x1941A8u;
    // 0x1941a8: 0xc065048  jal         func_194120
    ctx->pc = 0x1941A8u;
    SET_GPR_U32(ctx, 31, 0x1941B0u);
    ctx->pc = 0x194120u;
    goto label_194120;
    ctx->pc = 0x1941B0u;
label_1941b0:
    // 0x1941b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1941b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1941b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1941B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1941B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941B4u;
            // 0x1941b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1941BCu;
    // 0x1941bc: 0x0  nop
    ctx->pc = 0x1941bcu;
    // NOP
label_1941c0:
    // 0x1941c0: 0x90a20354  lbu         $v0, 0x354($a1)
    ctx->pc = 0x1941c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x1941c4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1941c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1941c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1941C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1941CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941C8u;
            // 0x1941cc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1941D0u;
label_1941d0:
    // 0x1941d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1941D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1941D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941D0u;
            // 0x1941d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1941D8u;
    // 0x1941d8: 0x0  nop
    ctx->pc = 0x1941d8u;
    // NOP
    // 0x1941dc: 0x0  nop
    ctx->pc = 0x1941dcu;
    // NOP
label_1941e0:
    // 0x1941e0: 0x8ca20494  lw          $v0, 0x494($a1)
    ctx->pc = 0x1941e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1172)));
    // 0x1941e4: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1941e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1941e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1941E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1941ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941E8u;
            // 0x1941ec: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1941F0u;
    ctx->pc = 0x1941f0u;
}
