#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231318
// Address: 0x231318 - 0x2313a0
void sub_00231318_0x231318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231318_0x231318");
#endif

    switch (ctx->pc) {
        case 0x231344u: goto label_231344;
        case 0x231350u: goto label_231350;
        case 0x231358u: goto label_231358;
        case 0x231390u: goto label_231390;
        default: break;
    }

    ctx->pc = 0x231318u;

    // 0x231318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23131c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231328: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x231328u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x23132c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x231330: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x231330u;
    {
        const bool branch_taken_0x231330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231330) {
            ctx->pc = 0x231334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231330u;
            // 0x231334: 0xde020010  ld          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23135Cu;
            goto label_23135c;
        }
    }
    ctx->pc = 0x231338u;
    // 0x231338: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x231338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x23133c: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x23133Cu;
    SET_GPR_U32(ctx, 31, 0x231344u);
    ctx->pc = 0x231340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23133Cu;
            // 0x231340: 0x248446d0  addiu       $a0, $a0, 0x46D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231344u; }
        if (ctx->pc != 0x231344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231344u; }
        if (ctx->pc != 0x231344u) { return; }
    }
    ctx->pc = 0x231344u;
label_231344:
    // 0x231344: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x231344u;
    {
        const bool branch_taken_0x231344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231344u;
            // 0x231348: 0xde020010  ld          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231344) {
            ctx->pc = 0x23135Cu;
            goto label_23135c;
        }
    }
    ctx->pc = 0x23134Cu;
    // 0x23134c: 0x0  nop
    ctx->pc = 0x23134cu;
    // NOP
label_231350:
    // 0x231350: 0xc08c4e8  jal         func_2313A0
    ctx->pc = 0x231350u;
    SET_GPR_U32(ctx, 31, 0x231358u);
    ctx->pc = 0x231354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231350u;
            // 0x231354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2313A0u;
    if (runtime->hasFunction(0x2313A0u)) {
        auto targetFn = runtime->lookupFunction(0x2313A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231358u; }
        if (ctx->pc != 0x231358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002313A0_0x2313a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231358u; }
        if (ctx->pc != 0x231358u) { return; }
    }
    ctx->pc = 0x231358u;
label_231358:
    // 0x231358: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x231358u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_23135c:
    // 0x23135c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23135Cu;
    {
        const bool branch_taken_0x23135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23135c) {
            ctx->pc = 0x231360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23135Cu;
            // 0x231360: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231350;
        }
    }
    ctx->pc = 0x231364u;
    // 0x231364: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x231364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231368: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231368u;
    {
        const bool branch_taken_0x231368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231368u;
            // 0x23136c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231368) {
            ctx->pc = 0x23137Cu;
            goto label_23137c;
        }
    }
    ctx->pc = 0x231370u;
    // 0x231370: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x231370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x231374: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231374u;
    {
        const bool branch_taken_0x231374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231374u;
            // 0x231378: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231374) {
            ctx->pc = 0x231390u;
            goto label_231390;
        }
    }
    ctx->pc = 0x23137Cu;
label_23137c:
    // 0x23137c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23137cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231384: 0x248446d8  addiu       $a0, $a0, 0x46D8
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18136));
    // 0x231388: 0x808b5e0  j           func_22D780
    ctx->pc = 0x231388u;
    ctx->pc = 0x23138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231388u;
            // 0x23138c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D780_0x22d780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x231390u;
label_231390:
    // 0x231390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231394: 0x3e00008  jr          $ra
    ctx->pc = 0x231394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231394u;
            // 0x231398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23139Cu;
    // 0x23139c: 0x0  nop
    ctx->pc = 0x23139cu;
    // NOP
    ctx->pc = 0x2313a0u;
}
