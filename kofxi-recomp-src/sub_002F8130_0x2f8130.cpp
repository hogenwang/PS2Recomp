#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8130
// Address: 0x2f8130 - 0x2f82d8
void sub_002F8130_0x2f8130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8130_0x2f8130");
#endif

    switch (ctx->pc) {
        case 0x2f819cu: goto label_2f819c;
        case 0x2f81ccu: goto label_2f81cc;
        case 0x2f81f8u: goto label_2f81f8;
        case 0x2f81fcu: goto label_2f81fc;
        case 0x2f8228u: goto label_2f8228;
        case 0x2f8258u: goto label_2f8258;
        case 0x2f8288u: goto label_2f8288;
        case 0x2f82b4u: goto label_2f82b4;
        default: break;
    }

    ctx->pc = 0x2f8130u;

    // 0x2f8130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f8130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f8134: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f8134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f8138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f8138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f813c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f813cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8140: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f8140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f8144: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2f8144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f8148: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x2f8148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x2f814c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2f814cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2f8150: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2f8150u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f8154: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x2f8154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2f8158: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2F8158u;
    {
        const bool branch_taken_0x2f8158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8158u;
            // 0x2f815c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8158) {
            ctx->pc = 0x2F82C0u;
            goto label_2f82c0;
        }
    }
    ctx->pc = 0x2F8160u;
    // 0x2f8160: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f8160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f8164: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f8164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f8168: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x2f8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x2f816c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f8170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f8170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8174: 0x800008  jr          $a0
    ctx->pc = 0x2F8174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F817Cu: goto label_2f817c;
            case 0x2F81ACu: goto label_2f81ac;
            case 0x2F8208u: goto label_2f8208;
            case 0x2F8238u: goto label_2f8238;
            case 0x2F8268u: goto label_2f8268;
            case 0x2F82C0u: goto label_2f82c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F817Cu;
label_2f817c:
    // 0x2f817c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f8180: 0x16020050  bne         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2F8180u;
    {
        const bool branch_taken_0x2f8180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8180u;
            // 0x2f8184: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8180) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8188u;
    // 0x2f8188: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f8188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f818c: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2f818cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f8190: 0x24a525b8  addiu       $a1, $a1, 0x25B8
    ctx->pc = 0x2f8190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9656));
    // 0x2f8194: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F8194u;
    SET_GPR_U32(ctx, 31, 0x2F819Cu);
    ctx->pc = 0x2F8198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8194u;
            // 0x2f8198: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F819Cu; }
        if (ctx->pc != 0x2F819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F819Cu; }
        if (ctx->pc != 0x2F819Cu) { return; }
    }
    ctx->pc = 0x2F819Cu;
label_2f819c:
    // 0x2f819c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2F819Cu;
    {
        const bool branch_taken_0x2f819c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F81A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F819Cu;
            // 0x2f81a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f819c) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F81A4u;
    // 0x2f81a4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2F81A4u;
    {
        const bool branch_taken_0x2f81a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F81A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81A4u;
            // 0x2f81a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81a4) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F81ACu;
label_2f81ac:
    // 0x2f81ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f81acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f81b0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F81B0u;
    {
        const bool branch_taken_0x2f81b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F81B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81B0u;
            // 0x2f81b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81b0) {
            ctx->pc = 0x2F81DCu;
            goto label_2f81dc;
        }
    }
    ctx->pc = 0x2F81B8u;
    // 0x2f81b8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f81b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f81bc: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2f81bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f81c0: 0x24a525c0  addiu       $a1, $a1, 0x25C0
    ctx->pc = 0x2f81c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9664));
    // 0x2f81c4: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F81C4u;
    SET_GPR_U32(ctx, 31, 0x2F81CCu);
    ctx->pc = 0x2F81C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81C4u;
            // 0x2f81c8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F81CCu; }
        if (ctx->pc != 0x2F81CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F81CCu; }
        if (ctx->pc != 0x2F81CCu) { return; }
    }
    ctx->pc = 0x2F81CCu;
label_2f81cc:
    // 0x2f81cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F81CCu;
    {
        const bool branch_taken_0x2f81cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F81D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81CCu;
            // 0x2f81d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81cc) {
            ctx->pc = 0x2F81DCu;
            goto label_2f81dc;
        }
    }
    ctx->pc = 0x2F81D4u;
    // 0x2f81d4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F81D4u;
    {
        const bool branch_taken_0x2f81d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F81D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81D4u;
            // 0x2f81d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81d4) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F81DCu;
label_2f81dc:
    // 0x2f81dc: 0x16020039  bne         $s0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F81DCu;
    {
        const bool branch_taken_0x2f81dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F81E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81DCu;
            // 0x2f81e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81dc) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F81E4u;
    // 0x2f81e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f81e8: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2f81e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f81ec: 0x24a525c8  addiu       $a1, $a1, 0x25C8
    ctx->pc = 0x2f81ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9672));
    // 0x2f81f0: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F81F0u;
    SET_GPR_U32(ctx, 31, 0x2F81F8u);
    ctx->pc = 0x2F81F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81F0u;
            // 0x2f81f4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F81F8u; }
        if (ctx->pc != 0x2F81F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F81F8u; }
        if (ctx->pc != 0x2F81F8u) { return; }
    }
    ctx->pc = 0x2F81F8u;
label_2f81f8:
    // 0x2f81f8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_2f81fc:
    if (ctx->pc == 0x2F81FCu) {
        ctx->pc = 0x2F81FCu;
            // 0x2f81fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2F8200u;
        goto label_fallthrough_0x2f81f8;
    }
    ctx->pc = 0x2F81F8u;
    {
        const bool branch_taken_0x2f81f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F81FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81F8u;
            // 0x2f81fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81f8) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
label_fallthrough_0x2f81f8:
    ctx->pc = 0x2F8200u;
    // 0x2f8200: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2F8200u;
    {
        const bool branch_taken_0x2f8200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8200u;
            // 0x2f8204: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8200) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8208u;
label_2f8208:
    // 0x2f8208: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2f8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f820c: 0x1602002d  bne         $s0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F820Cu;
    {
        const bool branch_taken_0x2f820c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F820Cu;
            // 0x2f8210: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f820c) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8214u;
    // 0x2f8214: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f8214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f8218: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2f8218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f821c: 0x24a525d0  addiu       $a1, $a1, 0x25D0
    ctx->pc = 0x2f821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9680));
    // 0x2f8220: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F8220u;
    SET_GPR_U32(ctx, 31, 0x2F8228u);
    ctx->pc = 0x2F8224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8220u;
            // 0x2f8224: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8228u; }
        if (ctx->pc != 0x2F8228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8228u; }
        if (ctx->pc != 0x2F8228u) { return; }
    }
    ctx->pc = 0x2F8228u;
label_2f8228:
    // 0x2f8228: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F8228u;
    {
        const bool branch_taken_0x2f8228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8228u;
            // 0x2f822c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8228) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8230u;
    // 0x2f8230: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2F8230u;
    {
        const bool branch_taken_0x2f8230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8230u;
            // 0x2f8234: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8230) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8238u;
label_2f8238:
    // 0x2f8238: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f8238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f823c: 0x16020021  bne         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F823Cu;
    {
        const bool branch_taken_0x2f823c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F823Cu;
            // 0x2f8240: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f823c) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8244u;
    // 0x2f8244: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f8244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f8248: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2f8248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f824c: 0x24a525e0  addiu       $a1, $a1, 0x25E0
    ctx->pc = 0x2f824cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9696));
    // 0x2f8250: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F8250u;
    SET_GPR_U32(ctx, 31, 0x2F8258u);
    ctx->pc = 0x2F8254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8250u;
            // 0x2f8254: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8258u; }
        if (ctx->pc != 0x2F8258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8258u; }
        if (ctx->pc != 0x2F8258u) { return; }
    }
    ctx->pc = 0x2F8258u;
label_2f8258:
    // 0x2f8258: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F8258u;
    {
        const bool branch_taken_0x2f8258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8258u;
            // 0x2f825c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8258) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8260u;
    // 0x2f8260: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F8260u;
    {
        const bool branch_taken_0x2f8260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8260u;
            // 0x2f8264: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8260) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8268u;
label_2f8268:
    // 0x2f8268: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f8268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f826c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F826Cu;
    {
        const bool branch_taken_0x2f826c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F826Cu;
            // 0x2f8270: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f826c) {
            ctx->pc = 0x2F8298u;
            goto label_2f8298;
        }
    }
    ctx->pc = 0x2F8274u;
    // 0x2f8274: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f8274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f8278: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2f8278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f827c: 0x24a525e8  addiu       $a1, $a1, 0x25E8
    ctx->pc = 0x2f827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9704));
    // 0x2f8280: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F8280u;
    SET_GPR_U32(ctx, 31, 0x2F8288u);
    ctx->pc = 0x2F8284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8280u;
            // 0x2f8284: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8288u; }
        if (ctx->pc != 0x2F8288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8288u; }
        if (ctx->pc != 0x2F8288u) { return; }
    }
    ctx->pc = 0x2F8288u;
label_2f8288:
    // 0x2f8288: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8288u;
    {
        const bool branch_taken_0x2f8288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F828Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8288u;
            // 0x2f828c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8288) {
            ctx->pc = 0x2F8298u;
            goto label_2f8298;
        }
    }
    ctx->pc = 0x2F8290u;
    // 0x2f8290: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F8290u;
    {
        const bool branch_taken_0x2f8290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8290u;
            // 0x2f8294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8290) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F8298u;
label_2f8298:
    // 0x2f8298: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F8298u;
    {
        const bool branch_taken_0x2f8298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f8298) {
            ctx->pc = 0x2F829Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8298u;
            // 0x2f829c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F82A0u;
    // 0x2f82a0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f82a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f82a4: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2f82a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f82a8: 0x24a525f0  addiu       $a1, $a1, 0x25F0
    ctx->pc = 0x2f82a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9712));
    // 0x2f82ac: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F82ACu;
    SET_GPR_U32(ctx, 31, 0x2F82B4u);
    ctx->pc = 0x2F82B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82ACu;
            // 0x2f82b0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82B4u; }
        if (ctx->pc != 0x2F82B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82B4u; }
        if (ctx->pc != 0x2F82B4u) { return; }
    }
    ctx->pc = 0x2F82B4u;
label_2f82b4:
    // 0x2f82b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f82b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f82b8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F82B8u;
    {
        const bool branch_taken_0x2f82b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F82BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82B8u;
            // 0x2f82bc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82b8) {
            ctx->pc = 0x2F82C4u;
            goto label_2f82c4;
        }
    }
    ctx->pc = 0x2F82C0u;
label_2f82c0:
    // 0x2f82c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f82c4:
    // 0x2f82c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f82c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f82c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f82c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f82cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f82ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f82d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F82D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F82D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82D0u;
            // 0x2f82d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F82D8u;
    ctx->pc = 0x2f82d8u;
}
