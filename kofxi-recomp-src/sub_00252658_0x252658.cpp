#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00252658
// Address: 0x252658 - 0x2526e0
void sub_00252658_0x252658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252658_0x252658");
#endif

    switch (ctx->pc) {
        case 0x252688u: goto label_252688;
        case 0x252698u: goto label_252698;
        case 0x2526c4u: goto label_2526c4;
        default: break;
    }

    ctx->pc = 0x252658u;

    // 0x252658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25265c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25265cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252660: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252668: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x252668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25266c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x25266Cu;
    {
        const bool branch_taken_0x25266c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25266Cu;
            // 0x252670: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25266c) {
            ctx->pc = 0x2526C4u;
            goto label_2526c4;
        }
    }
    ctx->pc = 0x252674u;
    // 0x252674: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x252674u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x252678: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x252678u;
    {
        const bool branch_taken_0x252678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252678u;
            // 0x25267c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252678) {
            ctx->pc = 0x2526A8u;
            goto label_2526a8;
        }
    }
    ctx->pc = 0x252680u;
    // 0x252680: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x252680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x252684: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x252684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_252688:
    // 0x252688: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x252688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25268c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25268cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x252690: 0xc092c44  jal         func_24B110
    ctx->pc = 0x252690u;
    SET_GPR_U32(ctx, 31, 0x252698u);
    ctx->pc = 0x252694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252690u;
            // 0x252694: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B110u;
    if (runtime->hasFunction(0x24B110u)) {
        auto targetFn = runtime->lookupFunction(0x24B110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252698u; }
        if (ctx->pc != 0x252698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B110_0x24b110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252698u; }
        if (ctx->pc != 0x252698u) { return; }
    }
    ctx->pc = 0x252698u;
label_252698:
    // 0x252698: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x252698u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x25269c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x25269cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2526a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2526A0u;
    {
        const bool branch_taken_0x2526a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2526A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2526A0u;
            // 0x2526a4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526a0) {
            ctx->pc = 0x252688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252688;
        }
    }
    ctx->pc = 0x2526A8u;
label_2526a8:
    // 0x2526a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2526a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2526acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2526b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2526b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2526b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2526b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2526b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2526b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2526bc: 0x8098560  j           func_261580
    ctx->pc = 0x2526BCu;
    ctx->pc = 0x2526C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2526BCu;
            // 0x2526c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00261580_0x261580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2526C4u;
label_2526c4:
    // 0x2526c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2526c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2526c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2526c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2526cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2526ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2526d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2526d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2526d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2526D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2526D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2526D4u;
            // 0x2526d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2526DCu;
    // 0x2526dc: 0x0  nop
    ctx->pc = 0x2526dcu;
    // NOP
    ctx->pc = 0x2526e0u;
}
