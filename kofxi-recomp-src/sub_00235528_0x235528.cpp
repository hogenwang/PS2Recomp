#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00235528
// Address: 0x235528 - 0x2355a8
void sub_00235528_0x235528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235528_0x235528");
#endif

    switch (ctx->pc) {
        case 0x235558u: goto label_235558;
        case 0x23556cu: goto label_23556c;
        default: break;
    }

    ctx->pc = 0x235528u;

    // 0x235528: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23552c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x235530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235534: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x235534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x235538: 0x8c50fcd0  lw          $s0, -0x330($v0)
    ctx->pc = 0x235538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
    // 0x23553c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23553cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235540: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235544: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x235544u;
    {
        const bool branch_taken_0x235544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235544u;
            // 0x235548: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235544) {
            ctx->pc = 0x235588u;
            goto label_235588;
        }
    }
    ctx->pc = 0x23554Cu;
    // 0x23554c: 0x3c110023  lui         $s1, 0x23
    ctx->pc = 0x23554cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)35 << 16));
    // 0x235550: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x235550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x235554: 0x0  nop
    ctx->pc = 0x235554u;
    // NOP
label_235558:
    // 0x235558: 0x262243b0  addiu       $v0, $s1, 0x43B0
    ctx->pc = 0x235558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 17328));
    // 0x23555c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23555Cu;
    {
        const bool branch_taken_0x23555c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23555Cu;
            // 0x235560: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23555c) {
            ctx->pc = 0x23557Cu;
            goto label_23557c;
        }
    }
    ctx->pc = 0x235564u;
    // 0x235564: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x235564u;
    SET_GPR_U32(ctx, 31, 0x23556Cu);
    ctx->pc = 0x235568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235564u;
            // 0x235568: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23556Cu; }
        if (ctx->pc != 0x23556Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23556Cu; }
        if (ctx->pc != 0x23556Cu) { return; }
    }
    ctx->pc = 0x23556Cu;
label_23556c:
    // 0x23556c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23556Cu;
    {
        const bool branch_taken_0x23556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23556c) {
            ctx->pc = 0x235570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23556Cu;
            // 0x235570: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235580u;
            goto label_235580;
        }
    }
    ctx->pc = 0x235574u;
    // 0x235574: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x235574u;
    {
        const bool branch_taken_0x235574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235574u;
            // 0x235578: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235574) {
            ctx->pc = 0x23558Cu;
            goto label_23558c;
        }
    }
    ctx->pc = 0x23557Cu;
label_23557c:
    // 0x23557c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x23557cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_235580:
    // 0x235580: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x235580u;
    {
        const bool branch_taken_0x235580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x235580) {
            ctx->pc = 0x235584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235580u;
            // 0x235584: 0x8e0300c0  lw          $v1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235558;
        }
    }
    ctx->pc = 0x235588u;
label_235588:
    // 0x235588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23558c:
    // 0x23558c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23558cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235590: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235594: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x235594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23559c: 0x3e00008  jr          $ra
    ctx->pc = 0x23559Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2355A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23559Cu;
            // 0x2355a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2355A4u;
    // 0x2355a4: 0x0  nop
    ctx->pc = 0x2355a4u;
    // NOP
    ctx->pc = 0x2355a8u;
}
