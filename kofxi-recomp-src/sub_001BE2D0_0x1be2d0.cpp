#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE2D0
// Address: 0x1be2d0 - 0x1be3a8
void sub_001BE2D0_0x1be2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE2D0_0x1be2d0");
#endif

    switch (ctx->pc) {
        case 0x1be2d0u: goto label_1be2d0;
        case 0x1be2d4u: goto label_1be2d4;
        case 0x1be2d8u: goto label_1be2d8;
        case 0x1be2dcu: goto label_1be2dc;
        case 0x1be2e0u: goto label_1be2e0;
        case 0x1be2e4u: goto label_1be2e4;
        case 0x1be2e8u: goto label_1be2e8;
        case 0x1be2ecu: goto label_1be2ec;
        case 0x1be2f0u: goto label_1be2f0;
        case 0x1be2f4u: goto label_1be2f4;
        case 0x1be2f8u: goto label_1be2f8;
        case 0x1be2fcu: goto label_1be2fc;
        case 0x1be300u: goto label_1be300;
        case 0x1be304u: goto label_1be304;
        case 0x1be308u: goto label_1be308;
        case 0x1be30cu: goto label_1be30c;
        case 0x1be310u: goto label_1be310;
        case 0x1be314u: goto label_1be314;
        case 0x1be318u: goto label_1be318;
        case 0x1be31cu: goto label_1be31c;
        case 0x1be320u: goto label_1be320;
        case 0x1be324u: goto label_1be324;
        case 0x1be328u: goto label_1be328;
        case 0x1be32cu: goto label_1be32c;
        case 0x1be330u: goto label_1be330;
        case 0x1be334u: goto label_1be334;
        case 0x1be338u: goto label_1be338;
        case 0x1be33cu: goto label_1be33c;
        case 0x1be340u: goto label_1be340;
        case 0x1be344u: goto label_1be344;
        case 0x1be348u: goto label_1be348;
        case 0x1be34cu: goto label_1be34c;
        case 0x1be350u: goto label_1be350;
        case 0x1be354u: goto label_1be354;
        case 0x1be358u: goto label_1be358;
        case 0x1be35cu: goto label_1be35c;
        case 0x1be360u: goto label_1be360;
        case 0x1be364u: goto label_1be364;
        case 0x1be368u: goto label_1be368;
        case 0x1be36cu: goto label_1be36c;
        case 0x1be370u: goto label_1be370;
        case 0x1be374u: goto label_1be374;
        case 0x1be378u: goto label_1be378;
        case 0x1be37cu: goto label_1be37c;
        case 0x1be380u: goto label_1be380;
        case 0x1be384u: goto label_1be384;
        case 0x1be388u: goto label_1be388;
        case 0x1be38cu: goto label_1be38c;
        case 0x1be390u: goto label_1be390;
        case 0x1be394u: goto label_1be394;
        case 0x1be398u: goto label_1be398;
        case 0x1be39cu: goto label_1be39c;
        case 0x1be3a0u: goto label_1be3a0;
        case 0x1be3a4u: goto label_1be3a4;
        default: break;
    }

    ctx->pc = 0x1be2d0u;

label_1be2d0:
    // 0x1be2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1be2d4:
    // 0x1be2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1be2d8:
    // 0x1be2d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1be2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1be2dc:
    // 0x1be2dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1be2e0:
    // 0x1be2e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1be2e4:
    // 0x1be2e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1be2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1be2e8:
    // 0x1be2e8: 0xc06f910  jal         func_1BE440
label_1be2ec:
    if (ctx->pc == 0x1BE2ECu) {
        ctx->pc = 0x1BE2ECu;
            // 0x1be2ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2F0u;
        goto label_1be2f0;
    }
    ctx->pc = 0x1BE2E8u;
    SET_GPR_U32(ctx, 31, 0x1BE2F0u);
    ctx->pc = 0x1BE2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2E8u;
            // 0x1be2ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE440u;
    if (runtime->hasFunction(0x1BE440u)) {
        auto targetFn = runtime->lookupFunction(0x1BE440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2F0u; }
        if (ctx->pc != 0x1BE2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE440_0x1be440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2F0u; }
        if (ctx->pc != 0x1BE2F0u) { return; }
    }
    ctx->pc = 0x1BE2F0u;
label_1be2f0:
    // 0x1be2f0: 0x200f809  jalr        $s0
label_1be2f4:
    if (ctx->pc == 0x1BE2F4u) {
        ctx->pc = 0x1BE2F8u;
        goto label_1be2f8;
    }
    ctx->pc = 0x1BE2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1BE2F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2F8u; }
            if (ctx->pc != 0x1BE2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1BE2F8u;
label_1be2f8:
    // 0x1be2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be2fc:
    // 0x1be2fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1be2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be300:
    // 0x1be300: 0xc06f8ea  jal         func_1BE3A8
label_1be304:
    if (ctx->pc == 0x1BE304u) {
        ctx->pc = 0x1BE304u;
            // 0x1be304: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BE308u;
        goto label_1be308;
    }
    ctx->pc = 0x1BE300u;
    SET_GPR_U32(ctx, 31, 0x1BE308u);
    ctx->pc = 0x1BE304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE300u;
            // 0x1be304: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3A8u;
    if (runtime->hasFunction(0x1BE3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE308u; }
        if (ctx->pc != 0x1BE308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE3A8_0x1be3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE308u; }
        if (ctx->pc != 0x1BE308u) { return; }
    }
    ctx->pc = 0x1BE308u;
label_1be308:
    // 0x1be308: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1be30c:
    if (ctx->pc == 0x1BE30Cu) {
        ctx->pc = 0x1BE30Cu;
            // 0x1be30c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BE310u;
        goto label_1be310;
    }
    ctx->pc = 0x1BE308u;
    {
        const bool branch_taken_0x1be308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE308u;
            // 0x1be30c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be308) {
            ctx->pc = 0x1BE38Cu;
            goto label_1be38c;
        }
    }
    ctx->pc = 0x1BE310u;
label_1be310:
    // 0x1be310: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1be310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
label_1be314:
    // 0x1be314: 0x24835590  addiu       $v1, $a0, 0x5590
    ctx->pc = 0x1be314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 21904));
label_1be318:
    // 0x1be318: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x1be318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1be31c:
    // 0x1be31c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1be320:
    if (ctx->pc == 0x1BE320u) {
        ctx->pc = 0x1BE320u;
            // 0x1be320: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1BE324u;
        goto label_1be324;
    }
    ctx->pc = 0x1BE31Cu;
    {
        const bool branch_taken_0x1be31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE31Cu;
            // 0x1be320: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be31c) {
            ctx->pc = 0x1BE34Cu;
            goto label_1be34c;
        }
    }
    ctx->pc = 0x1BE324u;
label_1be324:
    // 0x1be324: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1be324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1be328:
    // 0x1be328: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1be328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_1be32c:
    // 0x1be32c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1be330:
    if (ctx->pc == 0x1BE330u) {
        ctx->pc = 0x1BE330u;
            // 0x1be330: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x1BE334u;
        goto label_1be334;
    }
    ctx->pc = 0x1BE32Cu;
    {
        const bool branch_taken_0x1be32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE32Cu;
            // 0x1be330: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be32c) {
            ctx->pc = 0x1BE34Cu;
            goto label_1be34c;
        }
    }
    ctx->pc = 0x1BE334u;
label_1be334:
    // 0x1be334: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1be334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1be338:
    // 0x1be338: 0x0  nop
    ctx->pc = 0x1be338u;
    // NOP
label_1be33c:
    // 0x1be33c: 0x0  nop
    ctx->pc = 0x1be33cu;
    // NOP
label_1be340:
    // 0x1be340: 0x0  nop
    ctx->pc = 0x1be340u;
    // NOP
label_1be344:
    // 0x1be344: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1be348:
    if (ctx->pc == 0x1BE348u) {
        ctx->pc = 0x1BE348u;
            // 0x1be348: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1BE34Cu;
        goto label_1be34c;
    }
    ctx->pc = 0x1BE344u;
    {
        const bool branch_taken_0x1be344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be344) {
            ctx->pc = 0x1BE348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE344u;
            // 0x1be348: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be328;
        }
    }
    ctx->pc = 0x1BE34Cu;
label_1be34c:
    // 0x1be34c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1be34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1be350:
    // 0x1be350: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
label_1be354:
    if (ctx->pc == 0x1BE354u) {
        ctx->pc = 0x1BE354u;
            // 0x1be354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BE358u;
        goto label_1be358;
    }
    ctx->pc = 0x1BE350u;
    {
        const bool branch_taken_0x1be350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BE354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE350u;
            // 0x1be354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be350) {
            ctx->pc = 0x1BE38Cu;
            goto label_1be38c;
        }
    }
    ctx->pc = 0x1BE358u;
label_1be358:
    // 0x1be358: 0x24825590  addiu       $v0, $a0, 0x5590
    ctx->pc = 0x1be358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 21904));
label_1be35c:
    // 0x1be35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be360:
    // 0x1be360: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1be360u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1be364:
    // 0x1be364: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1be364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1be368:
    // 0x1be368: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1be36c:
    // 0x1be36c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1be36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1be370:
    // 0x1be370: 0xc04a83e  jal         func_12A0F8
label_1be374:
    if (ctx->pc == 0x1BE374u) {
        ctx->pc = 0x1BE374u;
            // 0x1be374: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x1BE378u;
        goto label_1be378;
    }
    ctx->pc = 0x1BE370u;
    SET_GPR_U32(ctx, 31, 0x1BE378u);
    ctx->pc = 0x1BE374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE370u;
            // 0x1be374: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE378u; }
        if (ctx->pc != 0x1BE378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE378u; }
        if (ctx->pc != 0x1BE378u) { return; }
    }
    ctx->pc = 0x1BE378u;
label_1be378:
    // 0x1be378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be37c:
    // 0x1be37c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be380:
    // 0x1be380: 0xc049c48  jal         func_127120
label_1be384:
    if (ctx->pc == 0x1BE384u) {
        ctx->pc = 0x1BE384u;
            // 0x1be384: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1BE388u;
        goto label_1be388;
    }
    ctx->pc = 0x1BE380u;
    SET_GPR_U32(ctx, 31, 0x1BE388u);
    ctx->pc = 0x1BE384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE380u;
            // 0x1be384: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE388u; }
        if (ctx->pc != 0x1BE388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE388u; }
        if (ctx->pc != 0x1BE388u) { return; }
    }
    ctx->pc = 0x1BE388u;
label_1be388:
    // 0x1be388: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1be388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be38c:
    // 0x1be38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be390:
    // 0x1be390: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1be394:
    // 0x1be394: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1be398:
    // 0x1be398: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1be398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1be39c:
    // 0x1be39c: 0x3e00008  jr          $ra
label_1be3a0:
    if (ctx->pc == 0x1BE3A0u) {
        ctx->pc = 0x1BE3A0u;
            // 0x1be3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BE3A4u;
        goto label_1be3a4;
    }
    ctx->pc = 0x1BE39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE39Cu;
            // 0x1be3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE3A4u;
label_1be3a4:
    // 0x1be3a4: 0x0  nop
    ctx->pc = 0x1be3a4u;
    // NOP
    ctx->pc = 0x1be3a8u;
}
