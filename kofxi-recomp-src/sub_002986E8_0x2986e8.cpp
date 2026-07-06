#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002986E8
// Address: 0x2986e8 - 0x298770
void sub_002986E8_0x2986e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002986E8_0x2986e8");
#endif

    switch (ctx->pc) {
        case 0x298710u: goto label_298710;
        case 0x298728u: goto label_298728;
        case 0x298730u: goto label_298730;
        case 0x298754u: goto label_298754;
        default: break;
    }

    ctx->pc = 0x2986e8u;

    // 0x2986e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2986e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2986ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2986ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2986f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2986f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2986f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2986f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2986f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2986fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2986fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298700: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x298700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x298704: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x298704u;
    {
        const bool branch_taken_0x298704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x298708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298704u;
            // 0x298708: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298704) {
            ctx->pc = 0x29874Cu;
            goto label_29874c;
        }
    }
    ctx->pc = 0x29870Cu;
    // 0x29870c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_298710:
    // 0x298710: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x298710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x298714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298718: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x298718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29871c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29871Cu;
    {
        const bool branch_taken_0x29871c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29871Cu;
            // 0x298720: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29871c) {
            ctx->pc = 0x29873Cu;
            goto label_29873c;
        }
    }
    ctx->pc = 0x298724u;
    // 0x298724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298728:
    // 0x298728: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x298728u;
    SET_GPR_U32(ctx, 31, 0x298730u);
    ctx->pc = 0x29872Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298728u;
            // 0x29872c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298730u; }
        if (ctx->pc != 0x298730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298730u; }
        if (ctx->pc != 0x298730u) { return; }
    }
    ctx->pc = 0x298730u;
label_298730:
    // 0x298730: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x298730u;
    {
        const bool branch_taken_0x298730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x298734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298730u;
            // 0x298734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298730) {
            ctx->pc = 0x298728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298728;
        }
    }
    ctx->pc = 0x298738u;
    // 0x298738: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x298738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29873c:
    // 0x29873c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298740: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x298740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x298744: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x298744u;
    {
        const bool branch_taken_0x298744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298744) {
            ctx->pc = 0x298748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298744u;
            // 0x298748: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298710;
        }
    }
    ctx->pc = 0x29874Cu;
label_29874c:
    // 0x29874c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29874Cu;
    SET_GPR_U32(ctx, 31, 0x298754u);
    ctx->pc = 0x298750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29874Cu;
            // 0x298750: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298754u; }
        if (ctx->pc != 0x298754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298754u; }
        if (ctx->pc != 0x298754u) { return; }
    }
    ctx->pc = 0x298754u;
label_298754:
    // 0x298754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298758: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29875c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29875cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298760: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298768: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x298768u;
    ctx->pc = 0x29876Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298768u;
            // 0x29876c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x298770u;
    ctx->pc = 0x298770u;
}
