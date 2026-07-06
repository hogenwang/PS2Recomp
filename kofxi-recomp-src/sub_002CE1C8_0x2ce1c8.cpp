#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE1C8
// Address: 0x2ce1c8 - 0x2ce3e8
void sub_002CE1C8_0x2ce1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE1C8_0x2ce1c8");
#endif

    switch (ctx->pc) {
        case 0x2ce1f4u: goto label_2ce1f4;
        case 0x2ce1fcu: goto label_2ce1fc;
        case 0x2ce210u: goto label_2ce210;
        case 0x2ce224u: goto label_2ce224;
        case 0x2ce23cu: goto label_2ce23c;
        case 0x2ce260u: goto label_2ce260;
        case 0x2ce278u: goto label_2ce278;
        case 0x2ce2c8u: goto label_2ce2c8;
        case 0x2ce2d8u: goto label_2ce2d8;
        case 0x2ce308u: goto label_2ce308;
        case 0x2ce328u: goto label_2ce328;
        case 0x2ce380u: goto label_2ce380;
        case 0x2ce390u: goto label_2ce390;
        case 0x2ce3c0u: goto label_2ce3c0;
        default: break;
    }

    ctx->pc = 0x2ce1c8u;

    // 0x2ce1c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce1d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce1dc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2ce1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ce1e0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE1E0u;
    {
        const bool branch_taken_0x2ce1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1e0) {
            ctx->pc = 0x2CE1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1E0u;
            // 0x2ce1e4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE200u;
            goto label_2ce200;
        }
    }
    ctx->pc = 0x2CE1E8u;
    // 0x2ce1e8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ce1ec: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CE1ECu;
    SET_GPR_U32(ctx, 31, 0x2CE1F4u);
    ctx->pc = 0x2CE1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1ECu;
            // 0x2ce1f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1F4u; }
        if (ctx->pc != 0x2CE1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1F4u; }
        if (ctx->pc != 0x2CE1F4u) { return; }
    }
    ctx->pc = 0x2CE1F4u;
label_2ce1f4:
    // 0x2ce1f4: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CE1F4u;
    SET_GPR_U32(ctx, 31, 0x2CE1FCu);
    ctx->pc = 0x2CE1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1F4u;
            // 0x2ce1f8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1FCu; }
        if (ctx->pc != 0x2CE1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1FCu; }
        if (ctx->pc != 0x2CE1FCu) { return; }
    }
    ctx->pc = 0x2CE1FCu;
label_2ce1fc:
    // 0x2ce1fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ce1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce200:
    // 0x2ce200: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CE200u;
    {
        const bool branch_taken_0x2ce200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE200u;
            // 0x2ce204: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce200) {
            ctx->pc = 0x2CE234u;
            goto label_2ce234;
        }
    }
    ctx->pc = 0x2CE208u;
    // 0x2ce208: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ce208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ce20c: 0x0  nop
    ctx->pc = 0x2ce20cu;
    // NOP
label_2ce210:
    // 0x2ce210: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ce210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ce214: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ce214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ce218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce21c: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CE21Cu;
    SET_GPR_U32(ctx, 31, 0x2CE224u);
    ctx->pc = 0x2CE220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE21Cu;
            // 0x2ce220: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE224u; }
        if (ctx->pc != 0x2CE224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE224u; }
        if (ctx->pc != 0x2CE224u) { return; }
    }
    ctx->pc = 0x2CE224u;
label_2ce224:
    // 0x2ce224: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ce224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ce228: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2ce228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ce22c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CE22Cu;
    {
        const bool branch_taken_0x2ce22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce22c) {
            ctx->pc = 0x2CE230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE22Cu;
            // 0x2ce230: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce210;
        }
    }
    ctx->pc = 0x2CE234u;
label_2ce234:
    // 0x2ce234: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CE234u;
    SET_GPR_U32(ctx, 31, 0x2CE23Cu);
    ctx->pc = 0x2CE238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE234u;
            // 0x2ce238: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE23Cu; }
        if (ctx->pc != 0x2CE23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE23Cu; }
        if (ctx->pc != 0x2CE23Cu) { return; }
    }
    ctx->pc = 0x2CE23Cu;
label_2ce23c:
    // 0x2ce23c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE240u;
    {
        const bool branch_taken_0x2ce240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE240u;
            // 0x2ce244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce240) {
            ctx->pc = 0x2CE260u;
            goto label_2ce260;
        }
    }
    ctx->pc = 0x2CE248u;
    // 0x2ce248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce24c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce254: 0x80b5ca0  j           func_2D7280
    ctx->pc = 0x2CE254u;
    ctx->pc = 0x2CE258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE254u;
            // 0x2ce258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7280u;
    {
        auto targetFn = runtime->lookupFunction(0x2D7280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2CE25Cu;
    // 0x2ce25c: 0x0  nop
    ctx->pc = 0x2ce25cu;
    // NOP
label_2ce260:
    // 0x2ce260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce26c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE26Cu;
            // 0x2ce270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE274u;
    // 0x2ce274: 0x0  nop
    ctx->pc = 0x2ce274u;
    // NOP
label_2ce278:
    // 0x2ce278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce280: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2ce280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ce284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ce288: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ce288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce28c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ce28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ce290: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ce290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce294: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ce294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ce298: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ce298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce29c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce2a0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2ce2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ce2a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ce2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2b4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ce2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2b8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ce2b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ce2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ce2c0: 0xc0b3a3a  jal         func_2CE8E8
    ctx->pc = 0x2CE2C0u;
    SET_GPR_U32(ctx, 31, 0x2CE2C8u);
    ctx->pc = 0x2CE2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2C0u;
            // 0x2ce2c4: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8E8u;
    if (runtime->hasFunction(0x2CE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2C8u; }
        if (ctx->pc != 0x2CE2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8E8_0x2ce8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2C8u; }
        if (ctx->pc != 0x2CE2C8u) { return; }
    }
    ctx->pc = 0x2CE2C8u;
label_2ce2c8:
    // 0x2ce2c8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CE2C8u;
    {
        const bool branch_taken_0x2ce2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce2c8) {
            ctx->pc = 0x2CE2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2C8u;
            // 0x2ce2cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE30Cu;
            goto label_2ce30c;
        }
    }
    ctx->pc = 0x2CE2D0u;
    // 0x2ce2d0: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2CE2D0u;
    SET_GPR_U32(ctx, 31, 0x2CE2D8u);
    ctx->pc = 0x2CE2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2D0u;
            // 0x2ce2d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2D8u; }
        if (ctx->pc != 0x2CE2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2D8u; }
        if (ctx->pc != 0x2CE2D8u) { return; }
    }
    ctx->pc = 0x2CE2D8u;
label_2ce2d8:
    // 0x2ce2d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce2d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2dc: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x2ce2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    // 0x2ce2e0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ce2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE2E4u;
    {
        const bool branch_taken_0x2ce2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2E4u;
            // 0x2ce2e8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2e4) {
            ctx->pc = 0x2CE308u;
            goto label_2ce308;
        }
    }
    ctx->pc = 0x2CE2ECu;
    // 0x2ce2ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ce2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2f4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2ce2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce2f8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ce2f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2fc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2ce2fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce300: 0xc0b3a3a  jal         func_2CE8E8
    ctx->pc = 0x2CE300u;
    SET_GPR_U32(ctx, 31, 0x2CE308u);
    ctx->pc = 0x2CE304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE300u;
            // 0x2ce304: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8E8u;
    if (runtime->hasFunction(0x2CE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE308u; }
        if (ctx->pc != 0x2CE308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8E8_0x2ce8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE308u; }
        if (ctx->pc != 0x2CE308u) { return; }
    }
    ctx->pc = 0x2CE308u;
label_2ce308:
    // 0x2ce308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce30c:
    // 0x2ce30c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ce310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce314: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ce314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ce318: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ce318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce31c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ce31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ce320: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE320u;
            // 0x2ce324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE328u;
label_2ce328:
    // 0x2ce328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ce328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ce32c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce330: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2ce330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce334: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ce334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ce338: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ce338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce33c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ce33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ce340: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ce340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce344: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ce344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ce348: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ce348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce34c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ce34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ce350: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2ce350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce358: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ce358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce35c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce364: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ce364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce368: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2ce368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce36c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ce36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce370: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ce370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ce374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ce378: 0xc0b3a3a  jal         func_2CE8E8
    ctx->pc = 0x2CE378u;
    SET_GPR_U32(ctx, 31, 0x2CE380u);
    ctx->pc = 0x2CE37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE378u;
            // 0x2ce37c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8E8u;
    if (runtime->hasFunction(0x2CE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE380u; }
        if (ctx->pc != 0x2CE380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8E8_0x2ce8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE380u; }
        if (ctx->pc != 0x2CE380u) { return; }
    }
    ctx->pc = 0x2CE380u;
label_2ce380:
    // 0x2ce380: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CE380u;
    {
        const bool branch_taken_0x2ce380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce380) {
            ctx->pc = 0x2CE384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE380u;
            // 0x2ce384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE3C4u;
            goto label_2ce3c4;
        }
    }
    ctx->pc = 0x2CE388u;
    // 0x2ce388: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2CE388u;
    SET_GPR_U32(ctx, 31, 0x2CE390u);
    ctx->pc = 0x2CE38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE388u;
            // 0x2ce38c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE390u; }
        if (ctx->pc != 0x2CE390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE390u; }
        if (ctx->pc != 0x2CE390u) { return; }
    }
    ctx->pc = 0x2CE390u;
label_2ce390:
    // 0x2ce390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce394: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x2ce394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    // 0x2ce398: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ce398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce39c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE39Cu;
    {
        const bool branch_taken_0x2ce39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE39Cu;
            // 0x2ce3a0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce39c) {
            ctx->pc = 0x2CE3C0u;
            goto label_2ce3c0;
        }
    }
    ctx->pc = 0x2CE3A4u;
    // 0x2ce3a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ce3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3ac: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2ce3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce3b0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2ce3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3b4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ce3b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3b8: 0xc0b3a3a  jal         func_2CE8E8
    ctx->pc = 0x2CE3B8u;
    SET_GPR_U32(ctx, 31, 0x2CE3C0u);
    ctx->pc = 0x2CE3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3B8u;
            // 0x2ce3bc: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8E8u;
    if (runtime->hasFunction(0x2CE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3C0u; }
        if (ctx->pc != 0x2CE3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8E8_0x2ce8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3C0u; }
        if (ctx->pc != 0x2CE3C0u) { return; }
    }
    ctx->pc = 0x2CE3C0u;
label_2ce3c0:
    // 0x2ce3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce3c4:
    // 0x2ce3c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce3c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ce3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce3cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ce3ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ce3d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ce3d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce3d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ce3d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ce3d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ce3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3DCu;
            // 0x2ce3e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE3E4u;
    // 0x2ce3e4: 0x0  nop
    ctx->pc = 0x2ce3e4u;
    // NOP
    ctx->pc = 0x2ce3e8u;
}
