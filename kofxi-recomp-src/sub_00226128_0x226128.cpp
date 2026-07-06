#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226128
// Address: 0x226128 - 0x2261c0
void sub_00226128_0x226128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226128_0x226128");
#endif

    switch (ctx->pc) {
        case 0x22615cu: goto label_22615c;
        case 0x22617cu: goto label_22617c;
        case 0x22619cu: goto label_22619c;
        case 0x2261b8u: goto label_2261b8;
        default: break;
    }

    ctx->pc = 0x226128u;

    // 0x226128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22612c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x22612cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226130: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x226134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x226138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22613c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22613cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226140: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x226140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x226144: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226148: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x226148u;
    {
        const bool branch_taken_0x226148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22614Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226148u;
            // 0x22614c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226148) {
            ctx->pc = 0x22619Cu;
            goto label_22619c;
        }
    }
    ctx->pc = 0x226150u;
    // 0x226150: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x226150u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x226154: 0x51c00007  beql        $t6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x226154u;
    {
        const bool branch_taken_0x226154 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x226154) {
            ctx->pc = 0x226158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226154u;
            // 0x226158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226174u;
            goto label_226174;
        }
    }
    ctx->pc = 0x22615Cu;
label_22615c:
    // 0x22615c: 0x11d10016  beq         $t6, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x22615Cu;
    {
        const bool branch_taken_0x22615c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 17));
        ctx->pc = 0x226160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22615Cu;
            // 0x226160: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22615c) {
            ctx->pc = 0x2261B8u;
            goto label_2261b8;
        }
    }
    ctx->pc = 0x226164u;
    // 0x226164: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x226164u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x226168: 0x15e0fffc  bnez        $t7, . + 4 + (-0x4 << 2)
    ctx->pc = 0x226168u;
    {
        const bool branch_taken_0x226168 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x22616Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226168u;
            // 0x22616c: 0x1e0702d  daddu       $t6, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226168) {
            ctx->pc = 0x22615Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22615c;
        }
    }
    ctx->pc = 0x226170u;
    // 0x226170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_226174:
    // 0x226174: 0xc08981a  jal         func_226068
    ctx->pc = 0x226174u;
    SET_GPR_U32(ctx, 31, 0x22617Cu);
    ctx->pc = 0x226178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226174u;
            // 0x226178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226068u;
    if (runtime->hasFunction(0x226068u)) {
        auto targetFn = runtime->lookupFunction(0x226068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22617Cu; }
        if (ctx->pc != 0x22617Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226068_0x226068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22617Cu; }
        if (ctx->pc != 0x22617Cu) { return; }
    }
    ctx->pc = 0x22617Cu;
label_22617c:
    // 0x22617c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x22617cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226180: 0x104f0006  beq         $v0, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x226180u;
    {
        const bool branch_taken_0x226180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x226184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226180u;
            // 0x226184: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226180) {
            ctx->pc = 0x22619Cu;
            goto label_22619c;
        }
    }
    ctx->pc = 0x226188u;
    // 0x226188: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x226188u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22618c: 0x504f0001  beql        $v0, $t7, . + 4 + (0x1 << 2)
    ctx->pc = 0x22618Cu;
    {
        const bool branch_taken_0x22618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x22618c) {
            ctx->pc = 0x226190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22618Cu;
            // 0x226190: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226194u;
            goto label_226194;
        }
    }
    ctx->pc = 0x226194u;
label_226194:
    // 0x226194: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x226194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x226198: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x226198u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22619c:
    // 0x22619c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22619cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2261a0: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x2261a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2261a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2261a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2261a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2261ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2261acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2261b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2261B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2261B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2261B0u;
            // 0x2261b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2261B8u;
label_2261b8:
    // 0x2261b8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x2261B8u;
    {
        const bool branch_taken_0x2261b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2261BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2261B8u;
            // 0x2261bc: 0x220702d  daddu       $t6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261b8) {
            ctx->pc = 0x22619Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22619c;
        }
    }
    ctx->pc = 0x2261C0u;
    ctx->pc = 0x2261c0u;
}
